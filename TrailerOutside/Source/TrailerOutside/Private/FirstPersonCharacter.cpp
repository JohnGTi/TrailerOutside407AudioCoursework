// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "FirstPersonCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"


AFirstPersonCharacter::AFirstPersonCharacter()
{
}


void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();

	if(UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement())
	{
		// Default the maximum movement speed of the character to the designed walking speed value.
		
		CharacterMovementComponent->MaxWalkSpeed = WalkSpeed;
	}
}


void AFirstPersonCharacter::UpdateCharacterMovement(ECharacterMovement InCharacterMovementMode)
{
	if(UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement())
	{
		// Update the character movement component's maximum walking speed with the relevant sprint or walk speed class
		// members, and update the character movement mode.
		
		switch(InCharacterMovementMode)
		{
		case ECharacterMovement::Sprinting:

			CharacterMovementComponent->MaxWalkSpeed = SprintSpeed;
			CharacterMovementMode = InCharacterMovementMode;

			break;
			
		case ECharacterMovement::Walking:
			
			CharacterMovementComponent->MaxWalkSpeed = WalkSpeed;
			CharacterMovementMode = InCharacterMovementMode;

			break;

		default:
			break;
		}
	}
}


void AFirstPersonCharacter::AssessMovementInput(const float InAxisValue, EPressure& OutInputPressure
	, float& OutPressTimeStamp)
{
	// Where magic scalar boundaries have been crossed (Designed for good gamepad feel) and the OutInputPressure applied
	// along an axis was relaxed, the axis scalar is of *new* significance (The command has not been held for a previous
	// duration; this is a new "press").
	
	if ((InAxisValue >= 0.9f || InAxisValue <= -0.9f) && OutInputPressure == EPressure::Easy)
    {
		// A simple key press, or the movement of a gamepad analogue stick close enough to its physical boundary, is
		// considered hard pressure in some direction: a command that qualifies for being one in a series (A double
		// "tap") that might trigger the changing of the character movement state.
            
		OutInputPressure = EPressure::Hard;
            
		// Check whether or not the commanding of the character to move along an axis is the second in a series (Check
		// for double input - two of the same commands done within DoubleTapWindow seconds).
        
		if ((InAxisValue * PreviousDirection) >= 0.f)
		{
			// The sequential commands are in the same direction (The axis scales in the same direction as the direction
			// of the command that was previously released).
        
			if ((UKismetSystemLibrary::GetGameTimeInSeconds(this) - OutPressTimeStamp)
				<= DoubleTapWindow)
			{
				// Run! (Prepare the character movement speed for, and flag that the character is, sprinting).
                
				UpdateCharacterMovement(ECharacterMovement::Sprinting);
			}
		}
        
		// Store the axis value for a future comparison of the direction it will scale an axis (In assessing a series of
		// input commanding movement in the same direction).
            
		PreviousDirection = InAxisValue;
    
		// Stamp the time that an initial (/Single) movement command (Of significance, i.e. "Hard") was made (Again, for
		// later comparison).
            
		OutPressTimeStamp = UKismetSystemLibrary::GetGameTimeInSeconds(this);
    }
    else if (InAxisValue < 0.5f && InAxisValue > -0.5f && OutInputPressure == EPressure::Hard)
    {
    	// (Easing of movement along an axis may be the release of a keyboard key or the easing of a gamepad analogue
    	// stick).
    	
    	OutInputPressure = EPressure::Easy;

    	// Declare and subscribe to a delegate that carries a payload so as to copy the screen space location of
    	// the press that this event responds to the release of, into a method that handles the case of a single
    	// press input.
				
    	FTimerDelegate EaseSprintDelegate;
				
    	if (ForwardPressure != EPressure::Hard && LateralPressure != EPressure::Hard)
    	{
    		// Where neither the movement in the forward or lateral axis is significant (/Existing), relax the character
    		// movement mode (Return to walking pace).

    		UpdateCharacterMovement(ECharacterMovement::Walking);
    	}
    }
}


void AFirstPersonCharacter::MoveAlongForwardAxis(float InAxisValue)
{
	// Assess the player input and control the character movement mode accordingly (Does the input qualify that a state
	// change into sprinting action is triggered?).

	AssessMovementInput(InAxisValue, ForwardPressure, HardForwardTimeStamp);

	// Move (At the current speed defined by the character movement component - scaled by InAxisValue) along the
	// direction the character is facing.
	
	AddMovementInput(GetActorForwardVector(), InAxisValue);
}


void AFirstPersonCharacter::MoveAlongLateralAxis(float InAxisValue)
{
	// Assess the player input and control the character movement mode accordingly (Does the input qualify that a state
	// change into sprinting action is triggered?).

	AssessMovementInput(InAxisValue, LateralPressure, HardLateralTimeStamp);

	// Move (At the current speed defined by the character movement component - scaled by InAxisValue) along the
	// direction perpendicular to the character facing direction.
	
	AddMovementInput(GetActorRightVector(), InAxisValue);
}


void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind axis mappings (For keyboard and gamepad input) to callback functions that are to resolve character movement.
	
	PlayerInputComponent->BindAxis(TEXT("MoveAlongForward"), this, &AFirstPersonCharacter::MoveAlongForwardAxis);
	PlayerInputComponent->BindAxis(TEXT("MoveLaterally"), this, &AFirstPersonCharacter::MoveAlongLateralAxis);
}
