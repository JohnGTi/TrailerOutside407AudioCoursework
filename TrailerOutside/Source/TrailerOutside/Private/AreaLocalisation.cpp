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
	}
}


void AAreaLocalisation::AssignListener(AFirstPersonCharacter* InListenerActor)
{
	if (InListenerActor)
	{
		Listener = InListenerActor;
	}
}


void AAreaLocalisation::OccludeAudio()
{
	// Part of the occlusion effect involves an equal stereo channel output, obscuring the directionality of the sound.

	// In the case of the listener entering the tunnel that is the trailer-interior, bypassing the panning effect enhan-
	// ces the sense that the rain impact on the above ceiling immerses the space.
    			
    if (AudioComponent)
    {
    	AudioComponent->SetBoolParameter("Pan", false);
    }

	// Flag occlusion.

	bIsAudioOccluded = true;
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
	if (AbsorptionComponent)
	{
		// The absorption component traces a line in the direction of the listener and returns the first item that bloc-
		// ks this line.
		
		const AActor* HitActor = AbsorptionComponent->TraceToListener(GetActorLocation()
			, Listener->GetListenerLocation());

		if (Cast<AActor>(Listener) != HitActor)
		{
			// An Audio channel line trace in the direction of the listener has been obstructed - the occlusion effect
			// is to demonstrate the absorption of sound by this obstruction.

			OccludeAudio();
		}
		else if (bIsAudioOccluded)
		{
			//

			if (AudioComponent)
			{
				AudioComponent->SetBoolParameter("Pan", true); GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Pan false."));
			}
			
			// Occlusion has been reverted.

			bIsAudioOccluded = false;
		}
	}
}
