// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "AreaLocalisation.h"
#include "AbsorptionComponent.h"
#include "FirstPersonCharacter.h"

#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"


AAreaLocalisation::AAreaLocalisation()
{
 	// Set this actor to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;

	// The root actor component provides the transform and representation of this actor's location in the world.
	
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SetRootComponent(SceneComponent);
}


void AAreaLocalisation::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	// An actor component has no transform and so there is no spacial relationship to this actor to describe.

	if (IsValid(BPAbsorptionComponent))
	{
		AbsorptionComponent = NewObject<UAbsorptionComponent>(this, BPAbsorptionComponent);
	}
	
	if (AbsorptionComponent)
	{
		// As construction of the component is not done by way of a constructor helper, the component must be manually
		// registered.
		
		AbsorptionComponent->RegisterComponent();
		AddInstanceComponent(AbsorptionComponent);
	}
}


void AAreaLocalisation::AreaLocalisationSystemToggle(bool bInEnableSystem)
{
	// Adapt the local audio level scalar relative to the state of this sound management system.

	if (bInEnableSystem)
	{
		AudioLevel = 1.f;
	}
	else
	{
		AudioLevel = 0.f;
	}
}


void AAreaLocalisation::BeginPlay()
{
	Super::BeginPlay();

	// The Drumming sound plays as it is spawned by and attached to this sound management system (Actor).

	if (AudioLoopBase)
	{
		AudioComponent = UGameplayStatics::SpawnSoundAttached(AudioLoopBase, GetRootComponent());

		if (AudioComponent)
		{
			AudioComponent->SetVolumeMultiplier(AudioLevel);
		}
	}

	// Trace down the Z-axis for a magnitude of StaticHeightOffset, and detect the surface that follow-movement is to be
	// restricted to.

	if (const UWorld* WorldContext = GetWorld())
	{
		const FVector ActorLocation = GetActorLocation();
		
		FVector TraceEndVector = FVector(0.f, 0.f, -1.f) * StaticHeightOffset;
		TraceEndVector += ActorLocation;
		
		FHitResult TraceDownResult;
        
		WorldContext->LineTraceSingleByChannel(TraceDownResult, ActorLocation, TraceEndVector
			, ECC_WorldStatic);

		if (TraceDownResult.bBlockingHit)
		{
			// Compensate for any initial spawning of the actor where it is situated at a height relative to the hit su-
			// rface, a greater or lesser amount than the StaticHeightOffset.

			SetActorLocation(ActorLocation + FVector(0.f, 0.f
				, StaticHeightOffset - TraceDownResult.Distance));

			// The hit component is to be referenced in calculations which validate traversal (If a trace is unblocked
			// by this component, the actor would be travelling out-of-bounds).
			
			SurfaceArea = TraceDownResult.GetComponent();
		}
	}
}


void AAreaLocalisation::AssignListener(AFirstPersonCharacter* InListenerActor)
{
	if (InListenerActor)
	{
		Listener = InListenerActor;
	}
}


void AAreaLocalisation::HandleAbsorption(const float InDeltaTime)
{
	if (AbsorptionComponent)
	{
		// The absorption component traces a line in the direction of the listener and returns the first item that bloc-
		// ks this line.

		const FVector ListenerLocation = Listener->GetListenerLocation();
    
		const AActor* HitActor = AbsorptionComponent->TraceToListener(GetActorLocation()
			, ListenerLocation);
    
		const AActor* ListenerActor = Cast<AActor>(Listener);
    
		const EOcclusion PreviousPropagationState = AudioPropagation;
    
    
		if (AudioPropagation == EOcclusion::Occluded && ListenerActor == HitActor)
		{
			// The previously occluded sound propagates to the listener unobstructed.
    
			AudioPropagation = EOcclusion::Free;
		}
		else if (AudioPropagation == EOcclusion::Free && ListenerActor != HitActor)
		{
			// An Audio channel line trace in the direction of the listener has been newly obstructed - the occlusion e-
			// ffect is to demonstrate the absorption of sound by this obstruction.
    
			AudioPropagation = EOcclusion::Occluded;
		}

		// The Absorption component manipulates frequency and volume data using a UKismetMathLibrary 'Ease' function, so
		// as to effect a gradual transition between an initial and target value. Both parameters are variable according
		// to distance, though the calculations prioritise a deeper low pass cut-off where some obstruction blocks audio
		// propagation.

		float AudioVolumeMultiplier = 0.f;
		float LowPassCutOff = 20000.f;
		
		AbsorptionComponent->UpdateParameters(!static_cast<bool>(AudioPropagation)
			, GetActorLocation(), ListenerLocation
			, AudioVolumeMultiplier
			, AudioPropagation != PreviousPropagationState
			, LowPassCutOff
			, InDeltaTime);

		if (AudioComponent == nullptr)
		{
			return;
		}

		// Atmospheric and surface effects of absorption are reflected in the attenuation of volume and high frequencies
		// over relative-distance.

		AudioComponent->SetVolumeMultiplier(AudioLevel * AudioVolumeMultiplier);
		AudioComponent->SetFloatParameter("LowPassCutOff", LowPassCutOff);

		// Part of the occlusion effect involves an equal stereo channel output, obscuring the directionality of the so-
		// und.
          
        // In the case of the listener entering the tunnel that is the trailer-interior, bypassing the panning effect e-
        // nhances the sense that the rain impact on the above ceiling immerses the space.

		const float DistanceToListenerSquared = FVector::DistSquared(GetActorLocation(), ListenerLocation);
		const float ObfuscationRangeSquared = ObfuscationRange * ObfuscationRange;
		
		if (DistanceToListenerSquared < ObfuscationRangeSquared && Panning == true)
		{
			Panning = false;
			AudioComponent->SetBoolParameter("Pan", Panning);
		}
		else if (DistanceToListenerSquared > ObfuscationRangeSquared && Panning == false)
		{
			Panning = true;
			AudioComponent->SetBoolParameter("Pan", Panning);
		}
	}
}


bool AAreaLocalisation::ValidateMovement(FVector2D& OutLocationInXY)
{
	if (const UWorld* WorldContext = GetWorld())
	{
		// The source of the audio is attached to the world location of this actor.

		const FVector ActorLocation = GetActorLocation();

		// A line is traced from the audio source, above, and an intermittent end location determined by the exponential
		// interpolation between a location directly below the source, and a location directly ahead (i.e., for a length
		// that is the distance between the audio source and the listener).
		
		const float ListenerTraceMagnitude = FVector::Dist(ActorLocation, Listener->GetListenerLocation());

		FVector TraceDownZEnd = FVector(0.f, 0.f, -1.f) * ListenerTraceMagnitude;
		TraceDownZEnd += ActorLocation;

		// This actor is incrementally rotated proportional to the granularity of the search (StepResolution). This rot-
		// ation extends the search area to a 360 degree awareness (And prevents the actor hyper-fixating on pursuit of
		// the listener in a single, forward direction)

		FMatrix YawRotation = FMatrix::Identity;

		// The direction - or sense - of the rotation is flipped for every complete search, outside of this scope.
		
		const float SearchYawIncrement = SearchSense * UKismetMathLibrary::DegreesToRadians(360.f
			/ static_cast<float>(StepResolution));

		YawRotation.M[0][0] = UKismetMathLibrary::Cos(SearchYawIncrement);
		YawRotation.M[0][1] = UKismetMathLibrary::Sin(SearchYawIncrement);
		YawRotation.M[1][0] = -UKismetMathLibrary::Sin(SearchYawIncrement);
		YawRotation.M[1][1] = UKismetMathLibrary::Cos(SearchYawIncrement);

		const FMatrix ActorYawRotated = YawRotation * GetActorTransform().ToMatrixWithScale();

		SetActorTransform(FTransform(ActorYawRotated));
		
		FVector SearchTraceEnd = GetActorForwardVector() * ListenerTraceMagnitude;
		SearchTraceEnd += ActorLocation;

		// A curve function begins the search finely, and broadens the difference between subsequent traces exponential-
		// ly.

		// The exponential ease alpha is determined by the search iteration, TraceStep over the total number of iterati-
		// ons, StepResolution.
		
		if (TraceStep > StepResolution)
		{
			TraceStep = 1;
		}
		
		float Alpha = static_cast<float>(TraceStep) / static_cast<float>(StepResolution);

		const FVector TraceEnd = FMath::InterpExpoIn(TraceDownZEnd, SearchTraceEnd, Alpha);

		TraceStep++;

		FHitResult TraceResult;

		WorldContext->LineTraceSingleByChannel(TraceResult, ActorLocation, TraceEnd
					, ECC_WorldStatic);
		
		if (TraceResult.bBlockingHit)
		{
			// A successful line trace is blocked. Where it is blocked by the surface area by which this actor is const-
			// rained, the actor will assess if this blocked world location is a more viable situation relative to the
			// listener (A squared distance comparison determines which location is closer).
			
			if (TraceResult.GetComponent() == SurfaceArea)
			{
				const FVector2D ListenerLocationInXY = FVector2D(Listener->GetListenerLocation().X
					, Listener->GetListenerLocation().Y);
				
				const FVector2D TraceEndLocationInXY = FVector2D(TraceResult.Location.X, TraceResult.Location.Y);
				
				if (FVector2D::DistSquared(TraceEndLocationInXY, ListenerLocationInXY)
					< FVector2D::DistSquared(FVector2D(ActorLocation.X, ActorLocation.Y), ListenerLocationInXY))
				{
					OutLocationInXY = TraceEndLocationInXY;
					return true;
				}
			}
		}
		else
		{
			TraceStep = 1;
		}
	}
	return false;
}


void AAreaLocalisation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// Validate that pursuit of the listener will not carry this actor out-of-bounds, and return the target displacement
	// of the actor in the XY-plane, accordingly.

	if (SurfaceArea)
	{
		FVector2D DisplacedLocation = FVector2D::Zero();
		
		for (int i = 0; i < StepResolution; ++i)
		{
			if (ValidateMovement(DisplacedLocation))
            {
				SetActorLocation(FVector(DisplacedLocation.X, DisplacedLocation.Y, GetActorLocation().Z));
            }
		}
		
		// Prepare a flipped direction of the rotating, searching line traces. The following search will be done in
        // a clockwise or counter-clockwise direction and vice versa.
        
        SearchSense = -SearchSense;
	}

	// Liaise with the Absorption component and accordingly update MetaSound parameters and component attributes to ref-
    // lect absorption calculations.
    
    HandleAbsorption(DeltaTime);
}