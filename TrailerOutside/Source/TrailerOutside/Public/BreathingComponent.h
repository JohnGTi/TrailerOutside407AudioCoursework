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
	Recovery,
	Faint
};


/**
 *	Playback of audio loops of breathing patterns respond to the character movement demands of the player. This system
 *	(For the purposes of the CMP407 coursework) was designed to motivate/stipulate the changes in the mode of the first
 *	person character's movement (The first person "Character" class calls upon this component to handle movement mode
 *	updates according to the player's input).
 */
UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRAILEROUTSIDE_API UBreathingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** Sets default values for this component's properties. */
	UBreathingComponent();


private:
	/**
	 *	Create an audio component with default settings (Specifically, with zero spatialisation) that are suitable to
	 *	the stereo (The sound is to envelope the player's head) breathing effect. Subscribe a class method that is to
	 *	control a change in the MetaSound to handle, to an audio component delegate that signals the end of playback.
	 */
	UFUNCTION()
		void InitialiseBreathingPattern();

	/**  */
	UFUNCTION()
		void EnterRecovery();

	/**
	 *	@param InPhysicalEffort	The state of physical effort that is to be changed set.
	 */
	UFUNCTION()
		void SetPhysicalEffort(EPhysicalEffort InPhysicalEffort);

	/**
	 *	
	 */
	UFUNCTION()
		void ControlCharacterBreathing();

protected:
	/** Called when the game starts. */
	virtual void BeginPlay() override;

	
public:	
	/**
	 *	Protected first person character methods that directly change the mode of character movement are called upon
	 *	according to the Breathing system's reinterpretation of that which is offered as an argument.
	 *
	 *	@param InCharacterMovementMode	The character movement mode (An indicator of the speed at which the first person
	 *									character is to move) that a caller wishes to change to.
	 *	@param InCharacter	The first person "Character."
	 */
	UFUNCTION()
		void UpdateCharacterMovement(class AFirstPersonCharacter* InCharacter
			, const ECharacterMovement InCharacterMovementMode);



private:
	/**
	 *	The Blueprint interface of this actor component is to assign soft references to the MetaSound assets that are to
	 *	be assigned to the "Breathing" audio component for each kind of breathing pattern (Or, "EPhysicalEffort").
	 */
	UPROPERTY(EditDefaultsOnly, Category = "BreathingPatternAssets")
		USoundBase* RegularBreathPattern = nullptr;
	
	UPROPERTY(EditDefaultsOnly, Category = "BreathingPatternAssets")
		USoundBase* HeavyBreathPattern = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "BreathingPatternAssets")
		USoundBase* FeverishBreathPattern = nullptr;
	
	UPROPERTY(EditDefaultsOnly, Category = "BreathingPatternAssets")
		USoundBase* FaintBreath = nullptr;

	/**
	 *	The current state of physical effort will key the MetaSound representation of the associated breathing pattern.
	 */
	UPROPERTY()
		TMap<EPhysicalEffort, USoundBase*> BreathingPatternMap;

	/**
	 *	The "Breathing" audio component handles a MetaSound, at a time, that will play a single or series of breathing
	 *	pattern audio assets. Continuous playing of a series of breathing patterns may come to an end after a maximum
	 *	number has been played, or having been interrupted by an input flag sent in response to movement of the first
	 *	person character.
	 */
	UPROPERTY()
		UAudioComponent* BreathingAudioComponent = nullptr;

	/**
	 *	The statement that a change in physical effort was made is useful in informing a MetaSound that it may no longer
	 *	cycle its playback of audio, for example.
	 */
	bool bChangeInPhysicalEffort = false;
	
	/** Motivated by the movement mode of the first person character that defaults to the "Walking" state. */
	UPROPERTY()
		EPhysicalEffort PhysicalEffort = EPhysicalEffort::Regular;
	
	/**
	 *	An exhausted character cannot break into sprint; the first person character is exhausted by sprinting without
	 *	the benefit of a full recovery (The player commands that a character sprints during the runtime of a recovery
	 *	duration).
	 */
	bool bIsExhausted = false;
	
	/**
	 *	The number of cycles a character will be made to (Feverishly) breathe before they have recovered from physical
	 *	effort. The recovery duration
	 */
	UPROPERTY(EditDefaultsOnly, Category = "PhysicalHealth")
		uint8 RecoveryBreaths = 2;

	/**
	 *	The number of cycles a character will be made to (Feverishly) breathe before they have recovered from exhausted
	 *	physical effort.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "PhysicalHealth")
		uint8 PenaltyRecoveryBreaths = 5;

#if WITH_EDITOR
	
	/**
	 *	The number of breath cycles that are to repeat before a full recovery from exhausted physical effort is made is
	 *	to be no less than one cycle greater than a standard recovery duration.
	 */
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

#endif
	

	/** The duration, in number of cycles of breaths, that a character will not be able to sprint /without penalty. */
	uint8 RecoveryDuration = 2;

	/** The number of recovery breaths taken (Since new entry into the recovery state). */
	uint8 RecoveryBreathCycle = 0;

	/** The duration, in number of cycles of breaths, that a character may sprint for. */
	UPROPERTY(EditDefaultsOnly, Category = "PhysicalHealth")
		uint8 SprintDuration = 4;

	/**
	 *	The number of heavy breaths taken, as of the character breaking into a sprint, will be counted so as to measure
	 *	the duration of the sprint (Useful, where the character slows their pace prior to the maximum burst duration of
	 *	a sprint; a short enough burst does not incur *any* recovery penalty).
	 */
	uint8 HeavyBreathCycle = 0;
};
