// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "BreathingComponent.h"
#include "FirstPersonCharacter.h"


UBreathingComponent::UBreathingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.
	PrimaryComponentTick.bCanEverTick = true;
}


void UBreathingComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UBreathingComponent::TickComponent(float DeltaTime, ELevelTick TickType
	, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


void UBreathingComponent::UpdateCharacterMovement(AFirstPersonCharacter* Character
	, const ECharacterMovement InCharacterMovementMode)
{
	// Note, Gabriel, that if any case of EPhysicalEffort for either Sprinting or Walking are identical, restructure
	// this block so that the Sprinting and Walking branching if statements are contained within a case.
	
	if (InCharacterMovementMode == ECharacterMovement::Sprinting)
	{
		switch(PhysicalEffort)
		{
		case EPhysicalEffort::Regular:

			break;
			
		case EPhysicalEffort::Heavy:
			
			break;

		case EPhysicalEffort::Recovery:
			
			break;

		default:
			break;
		}
	}
	if (InCharacterMovementMode == ECharacterMovement::Walking)
	{
		switch(PhysicalEffort)
		{
		case EPhysicalEffort::Regular:

			break;
			
		case EPhysicalEffort::Heavy:
			
			break;

		case EPhysicalEffort::Recovery:
			
			break;

		default:
			break;
		}
	}
}
