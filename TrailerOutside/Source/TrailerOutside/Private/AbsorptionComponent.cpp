// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "AbsorptionComponent.h"

#include "Components/CapsuleComponent.h"


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
		
		WorldContext->LineTraceSingleByChannel(TraceResult, SourceWorldPosition, ListenerWorldPosition
			, OCCLUSION_AUDIO);
		
		DrawDebugLine(WorldContext,SourceWorldPosition,TraceResult.Location, FColor(255, 0, 0),false, -1, 0,1);

		return TraceResult.GetActor();
	}
	return nullptr;
}
