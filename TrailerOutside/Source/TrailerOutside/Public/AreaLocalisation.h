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
	/**
	 *	The Absorption component designs attenuated values for the low pass cut-off frequency and volume level, which v-
	 *	ary according to material obstruction in the audio's path to the listener.
	 */
	UFUNCTION()
		void HandleAbsorption(float InDeltaTime);

	/**
	 *	A single line trace is drawn per call; incrementally (And exponentially), the step size grows between the previ-
	 *	ous trace until the farthest viable displacement is determined at the current step-size granularity.
	 *
	 *	@param OutLocationInXY	The world location that the actor is to be displaced (An FVector2D, the actor does not
	 *							pursue a listener in the Z-axis).
	 *	@return Whether or not the movement is valid/the actor is to move.
	 */
	UFUNCTION()
		bool ValidateMovement(FVector2D& OutLocationInXY);

	
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


protected:
	/** The distance between the audio source and the surface area that it is bound to. */
	UPROPERTY(EditDefaultsOnly, Category = "ChaseBehaviour")
		float StaticHeightOffset = 8.f;

	/**  */
	UPROPERTY(EditDefaultsOnly, Category = "ChaseBehaviour")
		float ChaseRate = 1.f;

	/**
	 *	This component offers the bounds within which this actor chase the listener (A line trace down the Z-axis valid-
	 *	ates traversal if the hit component is the SurfaceArea).
	 */
	UPROPERTY()
		UPrimitiveComponent* SurfaceArea = nullptr;


private:
	/** Knowledge of this project's player character (The actor which experiences the soundscape). */
	UPROPERTY()
		AFirstPersonCharacter* Listener = nullptr;

	/** The path which a sound travels to a listener has not been assessed as obstructed. */
	UPROPERTY()
		EOcclusion AudioPropagation = EOcclusion::Free;

	/**  */
	UPROPERTY()
		bool Panning = true;
	
	/**
	 *	Where the difference in the audio source and listener world locations fall in this range, the stereo panning ef-
	 *	fect is bypassed.
	 */
	UPROPERTY()
		float ObfuscationRange = 213.f;

	/**  */
	UPROPERTY(EditDefaultsOnly, Category = "ChaseBehaviour")
    	int StepResolution = 1000;
	
	/** A positive sense of rotation effects a clockwise or counter direction, and vice versa. */
	UPROPERTY()
		float SearchSense = 1.f;

	/**
	 *	
	 */
	UPROPERTY()
		uint8 TraceStep = 1;
};
