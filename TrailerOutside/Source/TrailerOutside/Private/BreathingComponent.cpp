// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "BreathingComponent.h"
#include "FirstPersonCharacter.h"
#include "Components/AudioComponent.h"

#include "Kismet/GameplayStatics.h"


UBreathingComponent::UBreathingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.
	PrimaryComponentTick.bCanEverTick = true;
}

#if WITH_EDITOR

void UBreathingComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// As in this override's declaration, "The number of breath cycles that are to repeat before a full recovery from
	// exhausted physical effort is made is to be no less than one cycle greater than a standard recovery duration."

	if (PenaltyRecoveryBreaths < (RecoveryBreaths + 1))
	{
		PenaltyRecoveryBreaths = RecoveryBreaths + 1;
	}
}
#endif


void UBreathingComponent::InitialiseBreathingPattern()
{
	if (USoundBase* BreathCycleMetaSound = *BreathingPatternMap.Find(PhysicalEffort))
	{
		// Spawn (Without spatialisation or distance-attenuation) an audio component that is to handle the MetaSound
		// that newly represents the change in the first person character's kind of breathing.
        
        BreathingAudioComponent = UGameplayStatics::SpawnSound2D(GetWorld(), BreathCycleMetaSound, 1.f
        		, 1.f, 0.f, nullptr, true, true);
        
        // Subscribe (To the dynamic delegate "OnAudioFinished") a class method that is to control the changing of audio
        // component (And with it, aural representation of the character's physical effort) upon the stopping of the new
        // audio component.
        
        BreathingAudioComponent->OnAudioFinished.AddUniqueDynamic(this
        	, &UBreathingComponent::InitialiseBreathingPattern);

		if (PhysicalEffort == EPhysicalEffort::Heavy)
		{
			BreathingAudioComponent->SetIntParameter(TEXT("NumberOfBreaths"), SprintDuration);
		}
		
        /**/
        FText SpecialInputValue = FText::GetEmpty();
        UEnum::GetDisplayValueAsText(PhysicalEffort, SpecialInputValue);
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Current Pattern: %s"), *SpecialInputValue.ToString()));
	}
}


void UBreathingComponent::BeginPlay()
{
	Super::BeginPlay();

	// Build the map of pairs of state of physical effort that the first person character movement expresses, and
	// MetaSound (Pointer to USoundBase objects) representations of the kind of breathing patterns/ that aurally
	// communicate this effort to the player.

	BreathingPatternMap.Emplace(EPhysicalEffort::Regular, RegularBreathPattern);
	BreathingPatternMap.Emplace(EPhysicalEffort::Heavy, HeavyBreathPattern);
	BreathingPatternMap.Emplace(EPhysicalEffort::Recovery, FeverishBreathPattern);
	BreathingPatternMap.Emplace(EPhysicalEffort::Faint, FaintBreath);

	
	// Initialise (And set up) the default breathing pattern audio component ("InitialiseBreathingPattern," does this
	// according to the default state of physical effort).
	
	InitialiseBreathingPattern();
}


void UBreathingComponent::TickComponent(float DeltaTime, ELevelTick TickType
	, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


void UBreathingComponent::UpdateCharacterMovement(AFirstPersonCharacter* InCharacter
	, const ECharacterMovement InCharacterMovementMode)
{
	if (InCharacter == nullptr)
	{
		return;
	}
	/**/
	if (InCharacterMovementMode == ECharacterMovement::Sprinting)
	{
		PhysicalEffort = EPhysicalEffort::Heavy;
		BreathingAudioComponent->SetBoolParameter(TEXT("bChangeInPattern"), true);
	}
	return;
	/**/
	// A change in physical effort is to be reflected aurally; the currently active MetaSound is to instructed to close.
	bool bChangeInPhysicalEffort = false;
	
	if (InCharacterMovementMode == ECharacterMovement::Sprinting)
	{
		switch(PhysicalEffort)
		{
		case EPhysicalEffort::Regular:

			if (!bIsExhausted)
			{
				// The physical effort of a first person character breaking into a sprint is deemed "Heavy."
				
				PhysicalEffort = EPhysicalEffort::Heavy;
				bChangeInPhysicalEffort = true;

				InCharacter->EnterSprint({}); //*
				
				// *Control of the character movement mode (Use of the publicly accessible EnterSprint/Walk methods) is
				// protected by a Passkey access pattern; only friend classes of MovementPassKey (In
				// FirstPersonCharacter.h) can provide the necessary argument (The default construct "{}", of
				// MovementPassKey) to the public EnterSprint/Walk methods and so only friend classes of MovementPassKey
				// may call upon these AFirstPersonCharacter functions.
			}
			else
			{
				// The character is forced to faint physical effort (The failed attempt to break into a sprint is to be
				// aurally resolved).
				
				PhysicalEffort = EPhysicalEffort::Faint;
				bChangeInPhysicalEffort = true;
			}

			break;
			
		case EPhysicalEffort::Heavy:

			// Player instruction to enter a sprint is interpreted in a redundant way as, in this case, the character is
			// already sprinting.
			
			break;

		case EPhysicalEffort::Recovery:

			// An exhausted character will not sprint.

			if (!bIsExhausted)
			{
				// The physical effort of a first person character breaking into a sprint is deemed "Heavy." A character
				// who has not been allowed to completely recover from the physical effort of initially sprinting will
				// be exhausted by the effort of breaking into another sprint (The recovery duration is elongated and a
				// character cannot break into another sprint until a full recovery is made).
				
				PhysicalEffort = EPhysicalEffort::Heavy;
				bChangeInPhysicalEffort = true;
				bIsExhausted = true;
				RecoveryDuration = PenaltyRecoveryBreaths;
				
				InCharacter->EnterSprint({});
			}
			
			break;

		default:
			break;
		}
	}
	else if (InCharacterMovementMode == ECharacterMovement::Walking)
	{
		// The first person character return to walking pace must be from peak expenditure of physical effort
		// (Sprinting), otherwise, the character is already walking and there is no change in movement mode.
		
		if (PhysicalEffort == EPhysicalEffort::Heavy)
		{
			// The character is set to recover from the peak ("Heavy") intensity of sprinting and can return to walking
            // pace.

            if (HeavyBreathCycles <= 1)
            {
            	// No recovery penalty is incurred where the duration of physical exertion at peak intensity was kept to
            	// no more than a single breath cycle.

            	RecoveryDuration = 0;
            }
            else
            {
            	PhysicalEffort = EPhysicalEffort::Recovery;
            	bChangeInPhysicalEffort = true;
            	RecoveryDuration = RecoveryBreaths;
            }
            
            InCharacter->EnterWalk({});
		}
	}

	if (bChangeInPhysicalEffort)
	{
		// The actively playing MetaSound is notified of the change in kind of breathing pattern; the actively playing
		// MetaSound will complete its playback of the currently playing audio asset and then finish.
		
		BreathingAudioComponent->SetBoolParameter(TEXT("bChangeInPattern"), true);
	}
}
