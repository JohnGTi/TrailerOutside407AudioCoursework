// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).

#pragma once

#include "Engine/LevelScriptActor.h"
#include "OutsideLevelScriptActor.generated.h"

/** Forward declaration. */
class AAreaLocalisation;


/** A single-cast delegate broadcasts to the relevant system that it should enable or disable its activity/output. */
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnActiveSystemToggleSignature, bool, bInEnableSystem);


/**
 *	State representation of the sound management systems that may have their output enabled/disabled according to
 *	debugging or demonstration needs.
 */
UENUM(BlueprintType)
enum class ESoundManagementSystem : uint8
{
	All,
	Breathing,
	AreaLocalisation,
	//Weather,

	// Facilitate the definition of these enum as iterable by ENUM_RANGE_BY_COUNT.
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(ESoundManagementSystem, ESoundManagementSystem::Count);


/**
 *	This LevelScriptActor sees a hidden instance in the FirstPersonMap level and features level-wide/specific logic.
 */
UCLASS()
class TRAILEROUTSIDE_API AOutsideLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

protected:
	/** This function will be called when the level is playing and this actor has been instanced. */
	virtual void BeginPlay() override;


private:
	/**
	 *	@param InSystemIndex	The integer representative of a system enumerator in ESoundManagementSystem.
	 *	@param bInEnableSystem	Whether the system is to be enabled or disabled.
	 */
	UFUNCTION()
		void EnableSystemByIndex(uint8 InSystemIndex, const bool bInEnableSystem);


protected:
	/** Switch between all or individual sound management systems being active. */
	UFUNCTION(BlueprintCallable, Category = "DebuggingTools")
		void SwitchActiveSystem();
	
private:
	/**  */
	UPROPERTY()
		FOnActiveSystemToggleSignature BreathingSystemToggleDelegate;
//...AreaLocalisationSystemToggleDelegate;...

	/**
	 *	The Breathing system is a component of the first-person character, which provides a reference to the component.
	 */
	UPROPERTY()
		class UBreathingComponent* BreathingSystem = nullptr;

	/**  */
	UPROPERTY()
		TMap<ESoundManagementSystem, FOnActiveSystemToggleSignature> ActiveSystemMap;
	
	/** By default, all sound management systems are enabled. */
	UPROPERTY()
		ESoundManagementSystem ActiveSystem = ESoundManagementSystem::All;


protected:
	/**
	 *	A reusable, abstract (A component that does not require any physical representation) behaviour that includes
	 *	calculation of distance attenuation in volume and frequency, and occlusion detection, e.g.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "SpawnableActors")
		TSubclassOf<AAreaLocalisation> BPAreaLocalisation;
	UPROPERTY()
		AAreaLocalisation* DrummingEffect = nullptr;

	/**  */
	UPROPERTY(EditDefaultsOnly, Category = "DrummingEffect")
		FVector DrummingInitialPosition = FVector::Zero();
};
