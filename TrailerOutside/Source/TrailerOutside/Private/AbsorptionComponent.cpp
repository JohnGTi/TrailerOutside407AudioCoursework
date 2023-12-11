// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "AbsorptionComponent.h"

#include "OutsideLevelScriptActor.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"


#define OCCLUSION_AUDIO ECC_GameTraceChannel2


UAbsorptionComponent::UAbsorptionComponent()
{
	// Set this component to be ticked every frame.
	PrimaryComponentTick.bCanEverTick = true;
	
}


void UAbsorptionComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


AActor* UAbsorptionComponent::TraceToListener(const FVector SourceWorldPosition
	, const FVector ListenerWorldPosition) const
{
	if (const UWorld* WorldContext = GetWorld())
	{
		FHitResult TraceResult;

		// Perform a line trace from the world location of the audio source, in the direction of and the distance until
		// the listener world location.
		
		WorldContext->LineTraceSingleByChannel(TraceResult, SourceWorldPosition, ListenerWorldPosition
			, OCCLUSION_AUDIO);
		
		/*DrawDebugLine(WorldContext,SourceWorldPosition,TraceResult.Location, FColor(255, 0, 0)
			,false, -1, 0,1);*/

		// Return the actor that the line trace may have hit (The listener, an obstruction, or nothing).

		return TraceResult.GetActor();
	}
	return nullptr;
}


void UAbsorptionComponent::UpdateParameters(const bool bInIsSourceOccluded, const FVector SourceWorldPosition
	, const FVector ListenerWorldPosition
	, float& OutVolumeMultiplier
	, bool bInChangeInOcclusion
	, float& OutLowPassCutOff, float InDeltaTime)
{
	// Flag whether or not the path between the source and listen is obstructed.
	
	bIsSourceOccluded = bInIsSourceOccluded;
	
	// Volume attenuation is achieved in the range of [The audio source world location, the radius of the traversable s-
	// cene].

	const float DistanceAttenuation = 1 - fabs(FVector::DistSquared(SourceWorldPosition, ListenerWorldPosition)
		/ (SCENE_RADIUS * SCENE_RADIUS));

	OutVolumeMultiplier = DistanceAttenuation * DistanceAttenuationLinearScale;

	// A change in the state of occlusion requires a transition between distance or interior volume-relative frequencies
	// and so, the elapsed time of the ease function is reset.

	if (bInChangeInOcclusion)
	{
		EaseTimeElapsed = 0.f;
	}

	// The frequency values relevant for a transition to or from either occluded or free modes are set, accordingly.

	float* PreviousCutOff = nullptr;
	float TargetCutOff = 20000.f;

	float* EaseStartLowPassCutOff = nullptr;
	
	if (bIsSourceOccluded)
	{
		PreviousCutOff = &PreviousDistanceCutOff;
		TargetCutOff = InteriorLowPassCutOff;
		EaseStartLowPassCutOff = &PreviousInteriorCutOff;
	}
	else
	{
		PreviousCutOff = &PreviousInteriorCutOff;
		TargetCutOff = DistanceLowPassCutOff;
		EaseStartLowPassCutOff = &PreviousDistanceCutOff;
	}

	// While the elapsed transition period is less than the assigned duration of the transition, update the elapsed time
	// according to the passage of frame time.

	if (EaseTimeElapsed < EaseDuration)
	{
		EaseTimeElapsed += InDeltaTime;
	}
	
	// The ease function returns a cut-off frequency value and smoothly (Sinusoidally, decelerating from a high-velocity
	// start) interpolates between the value before any change in state, and the target.
	
	OutLowPassCutOff = UKismetMathLibrary::Ease(*PreviousCutOff, TargetCutOff, EaseTimeElapsed / EaseDuration
		, EEasingFunc::EaseOut);

	// The frequency cut-off (According to atmospheric and surface effects, and not occlusion) is further determined ac-
	// cording to the relative distance of the listener.
	
	OutLowPassCutOff *= DistanceAttenuation;

	*EaseStartLowPassCutOff = OutLowPassCutOff;
}
