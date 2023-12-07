// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "AreaLocalisation.h"

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


void AAreaLocalisation::BeginPlay()
{
	Super::BeginPlay();

	// The Drumming sound plays as it is spawned by and attached to this sound management system (Actor).

	if (AudioLoopBase)
	{
		AudioComponent = UGameplayStatics::SpawnSoundAttached(AudioLoopBase, GetRootComponent());
	}
}


void AAreaLocalisation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*float wait = GetWorld()->GetTimeSeconds() - prevt;
	if (wait > 1.f)
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
}

