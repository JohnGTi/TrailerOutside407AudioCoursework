// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).

#pragma once

#include "GameFramework/Actor.h"
#include "AreaLocalisation.generated.h"


/** Forward declaration. */
class UAbsorptionComponent;
class AFirstPersonCharacter;


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
	/** A local helper function resolves a failure in the line of sight between this actor and the listener. */
	UFUNCTION()
		void OccludeAudio();

	
public:
	/** Called every frame. */
	virtual void Tick(float DeltaTime) override;


	
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


private:bool flip = false;float prevt = 0.f;
	/**
	 *	The Blueprint interface of this actor is to assign soft references to the looping MetaSound, "DrummingRainLoop".
	 */
	UPROPERTY(EditDefaultsOnly, Category = "SoundManagement")
		USoundBase* AudioLoopBase = nullptr;
	
	/**  */
	UPROPERTY()
		UAudioComponent* AudioComponent = nullptr;

	/**  */
	UPROPERTY()
		AFirstPersonCharacter* Listener = nullptr;

	/**  */
	bool bIsAudioOccluded = false;
};
