// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "AreaLocalisation.h"
#include "AbsorptionComponent.h"
#include "FirstPersonCharacter.h"

#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"


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

		const bool bChangeInPropagation = AudioPropagation != PreviousPropagationState;

		// The Absorption component manipulates frequency and volume data using a UKismetMathLibrary 'Ease' function, so
		// as to effect a gradual transition between an initial and target value. Both parameters are variable according
		// to distance, though the calculations prioritise a deeper low pass cut-off where some obstruction blocks audio
		// propagation.

		float AudioVolumeMultiplier = 0.f;
		float LowPassCutOff = 20000.f;
		
		AbsorptionComponent->UpdateParameters(!static_cast<bool>(AudioPropagation)
			, GetActorLocation(), ListenerLocation
			, AudioVolumeMultiplier
			, bChangeInPropagation
			, LowPassCutOff
			, InDeltaTime);

		if (AudioComponent == nullptr)
		{
			return;
		}

		// Atmospheric and surface effects of absorption are reflected in the attenuation of volume and high frequencies
		// over relative-distance.

		//AudioComponent->SetVolumeMultiplier(AudioLevel * AudioVolumeMultiplier);
		AudioComponent->SetFloatParameter("LowPassCutOff", LowPassCutOff);
    
		if (bChangeInPropagation)
		{
			// Part of the occlusion effect involves an equal stereo channel output, obscuring the directionality of the
			// sound.

			// In the case of the listener entering the tunnel that is the trailer-interior, bypassing the panning effe-
			// ct enhances the sense that the rain impact on the above ceiling immerses the space.
			
			AudioComponent->SetBoolParameter("Pan", !AbsorptionComponent->IsSourceOccluded());
		}
	}
}


void AAreaLocalisation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float wait = GetWorld()->GetTimeSeconds() - prevt;
	/*if (wait > 3.f)
	{
		if (AudioComponent)
        {
        	AudioComponent->SetBoolParameter("Pan", flip);
        	flip = !flip;
        	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Flip."));
        }
        else
        {
        	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("AudioComponent is false."));
        }
		prevt = GetWorld()->GetTimeSeconds();
	}*/
	
	// Liaise with the Absorption component and accordingly update MetaSound parameters and component attributes to ref-
	// lect absorption calculations.

	HandleAbsorption(DeltaTime);
}