// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).

#pragma once

#include "Components/ActorComponent.h"
#include "BreathingComponent.generated.h"


/** Forward declaration. */
enum class ECharacterMovement : uint8;


/**
 *	State representation of the physical exertion of the first person character according to its movement history (These
 *	states are to influence the sounds of the character's breathing and "Breathing" the character's movement).
 */
UENUM(BlueprintType)
enum class EPhysicalEffort : uint8
{
	Regular,
	Heavy,
	Recovery
};


/**
 *	Playback of audio loops of breathing patterns respond to the character movement demands of the player. This system
 *	(For the purposes of the CMP407 coursework) was designed to motivate/stipulate the changes in the mode of the first
 *	person character's movement (The first person "Character" class calls upon this component to handle movement mode
 *	updates according to the player's input).
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRAILEROUTSIDE_API UBreathingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** Sets default values for this component's properties. */
	UBreathingComponent();

protected:
	/** Called when the game starts. */
	virtual void BeginPlay() override;

public:	
	/** Called every frame. */
	virtual void TickComponent(float DeltaTime, ELevelTick TickType
		, FActorComponentTickFunction* ThisTickFunction) override;

	/**
	 *	Protected first person character methods that directly change the mode of character movement are called upon
	 *	according to the Breathing system's reinterpretation of that which is offered as an argument.
	 *
	 *	@param InCharacterMovementMode	The character movement mode (An indicator of the speed at which the first person
	 *									character is to move) that a caller wishes to change to.
	 *	@param Character	The first person "Character."
	 */
	UFUNCTION()
		void UpdateCharacterMovement(class AFirstPersonCharacter* Character
			, const ECharacterMovement InCharacterMovementMode);



private:
	/**  */
	UPROPERTY()
		EPhysicalEffort PhysicalEffort = EPhysicalEffort::Regular;
};
