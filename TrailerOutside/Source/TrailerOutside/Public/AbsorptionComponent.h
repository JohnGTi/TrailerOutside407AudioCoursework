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
	/**  */
	UFUNCTION()
		AActor* TraceToListener(const FVector SourceWorldPosition, const FVector ListenerWorldPosition) const; // Change CalculateAbsorption name to UpdateParameters ?
};
