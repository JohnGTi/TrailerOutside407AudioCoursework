// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).

#pragma once

#include "GameFramework/Actor.h"
#include "AreaLocalisation.generated.h"


/** Forward declaration. */
class UAbsorptionComponent;
class AFirstPersonCharacter;


/**
 *	A semantic representation of the state of propagation of audio from a source to the listener.
 */
UENUM(BlueprintType)
enum class EOcclusion : uint8
{
	Occluded,
	Free
};


/**
 *	This actor, from which a playing sound is attached, will move relative to a listener within an area defined by line
 *	trace.
 */
UCLASS()
class TRAILEROUTSIDE_API AAreaLocalisation : public AActor
{
	GENERATED_BODY()
	
public:	
	/** Sets default values for this actor's properties. */
	AAreaLocalisation();

	
protected:
	/**
	 *	Prior to the initialisation of any components, access Blueprint data available for the creation of a Blueprint
	 *	implemented component.
	 */
	virtual void PreInitializeComponents() override;
	
	/** Called when the game starts or when spawned. */
	virtual void BeginPlay() override;

	
public:
	/**  */
	UFUNCTION()
		void AssignListener(AFirstPersonCharacter* InListenerActor);

	
private:
	/**  */
	UFUNCTION()
		void HandleAbsorption(float InDeltaTime);

	
public:
	/** Called every frame. */
	virtual void Tick(const float DeltaTime) override;


	
	/** Attributes. */

	/**  */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		USceneComponent* SceneComponent;


protected:
	/**
	 *	A reusable, abstract (A component that does not require any physical representation) behaviour that includes
	 *	calculation of distance attenuation in volume and frequency, and occlusion detection, e.g.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "BlueprintComponents")
		TSubclassOf<UAbsorptionComponent> BPAbsorptionComponent;
	UPROPERTY()
		UAbsorptionComponent* AbsorptionComponent = nullptr;


protected:bool flip = false;float prevt = 0.f;
	/**
	 *	The Blueprint interface of this actor is to assign soft references to the looping MetaSound, "DrummingRainLoop".
	 */
	UPROPERTY(EditDefaultsOnly, Category = "SoundManagement")
		USoundBase* AudioLoopBase = nullptr;

	/** The initial, and normal scaled level of the audio source. */
	UPROPERTY(EditDefaultsOnly, Category = "SoundManagement")
		float AudioLevel = 1.f;


private:
	/** The handling of the "DrummingRainLoop" MetaSound requires persistent representation. */
	UPROPERTY()
		UAudioComponent* AudioComponent = nullptr;

	/** Knowledge of this project's player character (The actor which experiences the soundscape). */
	UPROPERTY()
		AFirstPersonCharacter* Listener = nullptr;

	/** The path which a sound travels to a listener has not been assessed as obstructed. */
	UPROPERTY()
		EOcclusion AudioPropagation = EOcclusion::Free;
};
