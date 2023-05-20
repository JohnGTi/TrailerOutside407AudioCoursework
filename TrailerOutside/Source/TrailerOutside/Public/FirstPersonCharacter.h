// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FirstPersonCharacter.generated.h"


/**
 *	A semantic representation of the scale of player input along an axis (A key press is binary and so is always "Hard";
 *	a gamepad analogue stick provides more granular control. Such input is analogous to a key press where the stick 
 *	travels far enough; unlike the binary key press, a stick may ease the scale of its input as opposed to stopping it).
 */
UENUM(BlueprintType)
enum class EPressure : uint8
{
	Easy,
	Hard
};


/**
 *	State representation of character movement does not currently extend past what information is useful for a playback
 *	system that is to control loops of breathing sounds (As the report should justify, the decision to not implement a
 *	similar system for footprints was made prior to any programming was done).
 */
UENUM(BlueprintType)
enum class ECharacterMovement : uint8
{
	Walking,
	Sprinting
};


/**
 *	The change of state of player movement is resolved according to axis mappings (Keyboard input, for example).
 */
UCLASS()
class TRAILEROUTSIDE_API AFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	/** Sets default values for this character's properties. */
	AFirstPersonCharacter();

protected:
	/** Called when the game starts or when spawned. */
	virtual void BeginPlay() override;

public:	
	/**
	 *	Update the character movement mode and, according to that mode (The kind of which is offered as an argument),
	 *	set this character's movement component's movement (Maximum walking) speed.
	 *
	 *	@param InCharacterMovementMode	The kind of movement that the character is to exhibit.
	 */
	UFUNCTION()
		void UpdateCharacterMovement(ECharacterMovement InCharacterMovementMode);

	/**
	 *	Input along some axis may one in a sequence of two identical (In their axis along a direction) commands. Process
	 *	the input, accordingly (Timestamp the ease of a "Hard" input, or update the character movement mode upon a
	 *	double "tap").
	 *
	 *	@param InAxisValue			Indicative of the speed and direction at which the player is to move along an axis.
	 *	@param OutInputPressure		A binary interpretation of the previous tick's axis scale; key down ("Hard") or up
	 *								("Easy")/analogue stick closer to the boundary ("Hard") or rest ("Easy").
	 *	@param OutPressTimeStamp	The game time, in seconds, that a "Hard" press was made.
	 */
	UFUNCTION()
		void AssessMovementInput(const float InAxisValue, EPressure& OutInputPressure, float& OutPressTimeStamp);

	/**
	 *	@param	InAxisValue	The speed at which the player is to move along the forward axis is scaled according to
	 *						controller input.
	 */
	void MoveAlongForwardAxis(float InAxisValue);

	/**
	 *	@param	InAxisValue	The speed at which the player is to move along the right/lateral axis is scaled according to
	 *						controller input.
	 */
	void MoveAlongLateralAxis(float InAxisValue);

	/** Called to bind movement functionality to keyboard input. */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	
private:
	/**
	 *	For input to qualify as "Hard" (For it to register as a complete input) its scale must escape the default,
	 *	"Easy."
	 */
	UPROPERTY()
		EPressure ForwardPressure = EPressure::Easy;
	UPROPERTY()
		EPressure LateralPressure = EPressure::Easy;

	/** The character movement mode defaults to "Walking." */
	UPROPERTY()
		ECharacterMovement CharacterMovementMode = ECharacterMovement::Walking;

	/** The normalised direction of the previous, "Hard" movement command. */
	UPROPERTY()
		float PreviousDirection = 0.f;

	/**
	 *	The game time, in seconds, that the movement of the character along an axis was initiated (For the comparison
	 *	between the subsequent input, so as to assess whether or not the series of inputs constitute a double "tap").
	 */
	UPROPERTY()
		float HardForwardTimeStamp = 0.f;
	UPROPERTY()
		float HardLateralTimeStamp = 0.f;

	/**
	 *	The period of time in which a player must follow up an initial movement of the character with a second,
	 *	identical movement command, for their input to be considered a double "tap" (The tapping of the physical
	 *	boundary of a key down, or a gamepad analogue stick's pivot).
	 */
	UPROPERTY(EditDefaultsOnly, Category = "InputResponsiveness")
		float DoubleTapWindow = 0.2f;

	/**
	 *	The value that the character movement component's maximum walk speed is to be changed in the case that the
	 *	character is sprinting.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "CharacterMovement")
		float SprintSpeed = 600.f;

	/**
	 *	The value that the character movement component's maximum walk speed is to be set to by default, and in the case
	 *	that the character stops sprinting.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "CharacterMovement")
		float WalkSpeed = 320.f;
};
