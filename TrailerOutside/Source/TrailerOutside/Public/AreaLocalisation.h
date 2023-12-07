// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).

#pragma once

#include "GameFramework/Actor.h"
#include "AreaLocalisation.generated.h"


/** Forward declaration. */

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
	/** Called when the game starts or when spawned. */
	virtual void BeginPlay() override;

	
public:	
	/** Called every frame. */
	virtual void Tick(float DeltaTime) override;


	
	/** Attributes. */

	/**  */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		USceneComponent* SceneComponent;


private:bool flip = false;float prevt = 0.f;
	/**
	 *	The Blueprint interface of this actor is to assign soft references to the looping MetaSound, "DrummingRainLoop".
	 */
	UPROPERTY(EditDefaultsOnly, Category = "SoundManagement")
		USoundBase* AudioLoopBase = nullptr;
	
	/**  */
	UPROPERTY()
		UAudioComponent* AudioComponent = nullptr;
};
