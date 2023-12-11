// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbsorptionComponent.generated.h"


UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRAILEROUTSIDE_API UAbsorptionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** Sets default values for this component's properties. */
	UAbsorptionComponent();

protected:
	/** Called when the game starts. */
	virtual void BeginPlay() override;

public:
	/**
	 *	@param SourceWorldPosition		The world location of the source of the sound which may be absorbed before reac-
	 *									hing the listener.
	 *	@param ListenerWorldPosition	The world location of the listener, relative to which absorption assessments are
	 *									made.
	 */
	UFUNCTION()
		AActor* TraceToListener(const FVector SourceWorldPosition, const FVector ListenerWorldPosition) const;
	
	/**  */
	UFUNCTION()
		void UpdateParameters(bool bInIsSourceOccluded, const FVector SourceWorldPosition
			, const FVector ListenerWorldPosition, float& OutVolumeMultiplier, bool bInChangeInOcclusion
			, float& OutLowPassCutOff, float InDeltaTime);

	/**
	 *	@return Whether or not a line drawn from the audio source and the listener is blocked.
	 */
	UFUNCTION()
		bool IsSourceOccluded() const
	{
		return bIsSourceOccluded;
	}


	/** Attributes. */

private:
	/** This flag is set according to a line trace done from the source and to the listener world location. */
	bool bIsSourceOccluded = false;

	/**  */
	float EaseTimeElapsed = 0.f;


protected:
	/** The default duration  is modelled after the time taken the first-person character to walk its diameter. */
	UPROPERTY()
		float EaseDuration = 1.0f;//0.34375f;
	
	/**
	 *	The default extent of attenuation - within the range [The audio source world location, the radius of the traver-
	 *	sable scene] - may be designed in-editor.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Attenuation")
		float DistanceAttenuationLinearScale = 0.9f;

	/** The low pass cut-off frequency at the maximum distance the listener may be separated from a source audio. */
	UPROPERTY(EditDefaultsOnly, Category = "Attenuation")
		float DistanceLowPassCutOff = 7611.3f;

	/** The low pass frequency cut-off perceived by a listener inside the trailer body. */
	UPROPERTY(EditDefaultsOnly, Category = "Attenuation")
		float InteriorLowPassCutOff = 3912.2f;

private:
	/**  */
	UPROPERTY()
		float PreviousInteriorCutOff = 0.f;
	UPROPERTY()
		float PreviousDistanceCutOff = 0.f;
};
