// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "FirstPersonCharacter.h"
#include "BreathingComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"


AFirstPersonCharacter::AFirstPersonCharacter()
{
}


void AFirstPersonCharacter::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	// An actor component has no transform and so there is no spacial relationship to this actor to describe.
	
	BreathingComponent = NewObject<UBreathingComponent>(this, BPBreathingComponent);

	if (BreathingComponent)
	{
		// As construction of the component is not done by way of a constructor helper, the component must be manually
		// registered.
		
		BreathingComponent->RegisterComponent();
		AddInstanceComponent(BreathingComponent);
	}
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


void AFirstPersonCharacter::EnterSprint(MovementPassKey InPassKey)
{
	if(UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement())
	{
		// Update the character movement component's maximum walking speed and movement mode.

		CharacterMovementComponent->MaxWalkSpeed = SprintSpeed;
		CharacterMovementMode = ECharacterMovement::Sprinting;
	}
}

void AFirstPersonCharacter::EnterWalk(MovementPassKey InPassKey)
{
	if(UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement())
	{
		// Update the character movement component's maximum walking speed and movement mode.

		CharacterMovementComponent->MaxWalkSpeed = WalkSpeed;
		CharacterMovementMode = ECharacterMovement::Walking;
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
				// Run! (Or, pass onto the Breathing system that the player has input some intention to enter a sprint;
				// the Breathing system will use this information to update its representation of the intensity of the
				// player's movement effort and may not condone entry into a sprint where the character is exhausted.
				
				// The character movement mode switches according to audio design).
				
				if (BreathingComponent)
				{
					BreathingComponent->UpdateCharacterMovement(this, ECharacterMovement::Sprinting);
				}
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
    	// Easing of movement along an axis may be the release of a keyboard key or the easing of a gamepad analogue
    	// stick (Hence, the broad range in which an command is considered to be lifted).

    	OutInputPressure = EPressure::Easy;
    	
    	// (The OutInputPressure, set to "Easy," references either ForwardPressure, or LateralPressure).
    	
    	if (ForwardPressure == LateralPressure)
    	{
    		// Where neither the movement in the forward or lateral axis is significant ("Hard"/Existing), relax the
    		// character movement mode (Return to walking pace).

    		if (BreathingComponent)
    		{
    			BreathingComponent->UpdateCharacterMovement(this, ECharacterMovement::Walking);
    		}
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
