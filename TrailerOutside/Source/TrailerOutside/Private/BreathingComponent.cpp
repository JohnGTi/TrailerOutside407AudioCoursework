// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "BreathingComponent.h"
#include "FirstPersonCharacter.h"
#include "Components/AudioComponent.h"

#include "Kismet/GameplayStatics.h"


UBreathingComponent::UBreathingComponent()
{
	// This component does not tick.
	PrimaryComponentTick.bCanEverTick = false;
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


float UBreathingComponent::GetVolumeMultiplier() const
{
	// The output volume may be scaled by an internal representation of volume (BreathingVolume) or muted.
		
	if (bIsAuralOutputMute)
	{
		return 0.f;
	}
	
	return BreathingVolume;
}


void UBreathingComponent::InitialiseBreathingPattern()
{
	if (USoundBase* BreathCycleMetaSound = *BreathingPatternMap.Find(PhysicalEffort))
	{
		// Spawn an audio component that is to handle the MetaSound that newly represents the change in the first person
		// character's kind of breathing.
		
		BreathingAudioComponent = UGameplayStatics::SpawnSound2D(GetWorld(), BreathCycleMetaSound, GetVolumeMultiplier()
			, 1.f, 0.f, nullptr, true, true);

		if (BreathingAudioComponent == nullptr)
		{
			// This return sees no other path to restart audio. TODO: design some contingency or throw an error.
			return;
		}
        
		// Subscribe (To the dynamic delegate "OnAudioFinished") a class method that is to control the changing of audio
		// component (And with it, aural representation of the character's physical effort) upon the stopping of the new
		// audio component.
        
		BreathingAudioComponent->OnAudioFinished.AddUniqueDynamic(this
			, &UBreathingComponent::ControlCharacterBreathing);
	}
}


void UBreathingComponent::EnterRecovery()
{
	if (bIsExhausted)
    {
    	// If the character is exhausted having previously broken into a sprint before a full recovery, they are
    	// required to take a greater number of recovery breaths.
    	
    	RecoveryDuration = PenaltyRecoveryBreaths;
    }
    else
    {
    	RecoveryDuration = RecoveryBreaths;
    }

	// Index the first recovery breath cycle.
	RecoveryBreathCycle = 1;
    
    // Return the character to their regular walking pace.
    
    AActor* CharacterActor = GetOwner();
    
    if (AFirstPersonCharacter* Character = Cast<AFirstPersonCharacter>(CharacterActor))
    {
    	Character->EnterWalk({});
    }
}


void UBreathingComponent::SetPhysicalEffort(EPhysicalEffort InPhysicalEffort)
{
	// Set the state of physical effort of the first person character's movement according to the in argument and flag
	// that a change in physical effort has been made.
	
	PhysicalEffort = InPhysicalEffort;
	bChangeInPhysicalEffort = true;
}


void UBreathingComponent::ControlCharacterBreathing()
{
	// Note, that much of the work done to control the cycle of breathing patterns across changes in physical effort was
	// to be handled in MetaSounds*.

	// MetaSound Output cannot be accessed outside of MetaSounds (Epic Developer Community, 2022); programmatic control
	// of Breathing cycles was delegated to the C++ originally intended to receive MetaSound output (Such as the number
	// of Wave Player iterations).

	
	switch(PhysicalEffort)
	{
	case EPhysicalEffort::Heavy:

		// There are three cases in which the state of physical effort is "Heavy" upon completion/end of playback of
		// some breathing pattern:
		
		// *	the state is being initially entered as a consequence of player control, or
		// *	a single breathing pattern has completed playback and either another "Heavy" breath is to be taken, or
		// *	the maximum duration of a sprint has been met.
		
		if (HeavyBreathCycle == SprintDuration)
		{
			// The index of heavy breath cycles is equal to the number of breaths that measure the duration of the first
			// person character's maximum sprint duration; the character enters a state of "Recovery" and returns to a
			// walking pace.

			// Reset (Zero) the index of heavy breath cycles.
			HeavyBreathCycle = 0;

			SetPhysicalEffort(EPhysicalEffort::Recovery);
			EnterRecovery();
		}
		else
		{
			if (bChangeInPhysicalEffort)
			{
				// A change in physical effort signifies that the current state is being newly entered. Correctly index
				// this cycle as the first in a series.

				HeavyBreathCycle = 1;
				bChangeInPhysicalEffort = false;
			}
			else
			{
				// Index that a new cycle of heavy breathing is being entered.
				++HeavyBreathCycle;
			}
		}

		break;

	case EPhysicalEffort::Recovery:

		if (RecoveryBreathCycle >= RecoveryDuration)
		{
			// The number of recovery breath cycles is equal to the duration (In number of recovery breath cycles) of
			// this recovery period; the first person character has fully recovered and is not experiencing exhaustion.
			
			// Reset recovery state data and signify (For the sake of the coming initialisation of the "Breathing" audio
			// component) a change in physical effort to "Regular."

			bIsExhausted = false;
			RecoveryBreathCycle = 0;
			
			SetPhysicalEffort(EPhysicalEffort::Regular);
		}
		else
		{
			// A "zero" recovery breath cycle index indicates that the state was previously properly exited (Its index
			// was reset). An index that is non-zero suggests that the first-person character is continuing a recovery
			// period that was temporarily interrupted by a failed attempt to break into a sprint.
			
			if (bChangeInPhysicalEffort && RecoveryBreathCycle == 0)
			{
				// Initialise the recovery state (That can be entered either manually by the player's easing of
				// character movement, or automatically, with the duration of a maximum sprint being reached).

				EnterRecovery();

				// Reset, as the change in physical effort is being resolved.
				bChangeInPhysicalEffort = false;
			}
			else
			{
				// Another recovery breath is being taken; increment the relevant index.
				
				++RecoveryBreathCycle;
			}
		}
			
		break;

	case EPhysicalEffort::Faint:

		if (bChangeInPhysicalEffort)
		{
			// A "Faint" is done from the "Recovery" state, and so the completion of some playback that has invoked this
			// method was that of a recovery breath. Index, accordingly.
			
			++RecoveryBreathCycle;
			
			// The change in physical effort is recognised and reflected by the initialisation of a new audio component,
			// later in this function ("InitialiseBreathingPattern").
			
			// Reset, as the change in physical effort is being resolved.
			bChangeInPhysicalEffort = false;
		}
		else
		{
			// The completion of a faint (A single, sharp inhale) sees the representation of the physical effort of the
			// first person character return to the "Recovery" state.

			SetPhysicalEffort(EPhysicalEffort::Recovery);
		}

		break;

	default:
		break;
	}
	
	// Spawn an audio component according to the current state of physical effort.

	InitialiseBreathingPattern();

	
	// *This method, instead sees more work done for each case in state switching for cases that require work to be done
	// on ingress and egress. A (More suitable object-oriented paradigm) *Class-Based* Finite State Machine (Aleksandr
	// Hovhannisyan, 2020) would have modelled this behaviour with greater elegance.
}


void UBreathingComponent::Mute(const bool bInMuteAuralOutput)
{
	// Flag the state of future audio component spawns.
	bIsAuralOutputMute = bInMuteAuralOutput;
	
	if (BreathingAudioComponent)
	{
		BreathingAudioComponent->SetVolumeMultiplier(GetVolumeMultiplier());
	}
}


void UBreathingComponent::BreathingSystemToggle(bool bInEnableSystem)
{
	// An active Breathing system is not to be muted, and vice versa.
	
	Mute(!bInEnableSystem);
}


void UBreathingComponent::BeginPlay()
{
	Super::BeginPlay();

	// Build the map of pairs of state of physical effort that the first person character movement expresses, and
	// MetaSound (Pointer to USoundBase objects) representations of the kind of breathing patterns that aurally
	// communicate this effort to the player.

	BreathingPatternMap.Emplace(EPhysicalEffort::Regular, RegularBreathPattern);
	BreathingPatternMap.Emplace(EPhysicalEffort::Heavy, HeavyBreathPattern);
	BreathingPatternMap.Emplace(EPhysicalEffort::Recovery, FeverishBreathPattern);
	BreathingPatternMap.Emplace(EPhysicalEffort::Faint, FaintBreath);

	// Initialise (And set up) the default breathing pattern audio component ("InitialiseBreathingPattern," does this
	// according to the default state of physical effort).
	
	InitialiseBreathingPattern();
}


void UBreathingComponent::UpdateCharacterMovement(AFirstPersonCharacter* InCharacter
	, const ECharacterMovement InCharacterMovementMode)
{
	if (InCharacter == nullptr)
	{
		return;
	}
	
	if (InCharacterMovementMode == ECharacterMovement::Sprinting)
	{
		switch(PhysicalEffort)
		{
		case EPhysicalEffort::Regular:

			// The physical effort of a first person character breaking into a sprint is deemed "Heavy."
				
			SetPhysicalEffort(EPhysicalEffort::Heavy);

			if (BreathingAudioComponent)
			{
				// Playback of the regular breathing pattern is freely (i.e. without consideration of whether or not
				// the exhale or inhale is being heard) interrupted by the sharp inhale of a "Heavy" breath.
					
				BreathingAudioComponent->Stop();
			}

			InCharacter->EnterSprint({}); //*
				
			// *Control of the character movement mode (Use of the publicly accessible EnterSprint/Walk methods) is
			// protected by a Passkey access pattern; only friend classes of MovementPassKey (In
			// FirstPersonCharacter.h) can provide the necessary argument (The default construct "{}", of
			// MovementPassKey) to the public EnterSprint/Walk methods and so only friend classes of MovementPassKey
			// may call upon these AFirstPersonCharacter functions.

			break;
			
		case EPhysicalEffort::Heavy:

			// Player instruction to enter a sprint is interpreted in a redundant way as, in this case, the character is
			// already sprinting.
			
			break;

		case EPhysicalEffort::Recovery:

			if (!bIsExhausted)
			{
				// The physical effort of a first person character breaking into a sprint is deemed "Heavy." A character
				// who has not been allowed to completely recover from the physical effort of initially sprinting will
				// be exhausted by the effort of breaking into another sprint (The recovery duration is elongated and a
				// character cannot break into another sprint until a full recovery is made).
				
				SetPhysicalEffort(EPhysicalEffort::Heavy);

				bIsExhausted = true;
				RecoveryBreathCycle = 0;
				
				InCharacter->EnterSprint({});
			}
			else
			{
				// The character is forced to faint physical effort (The failed attempt to break into a sprint is to be
				// aurally represented).
				
				SetPhysicalEffort(EPhysicalEffort::Faint);

				if (BreathingAudioComponent)
				{
					// A quick gasp (Inhale) may freely interrupt a regular exhale or inhale.
					BreathingAudioComponent->Stop();
				}
			}
			
			break;

		default:
			break;
		}
	}
	else if (InCharacterMovementMode == ECharacterMovement::Walking)
	{
		// The first person character return to walking pace must be from heavy expenditure of physical effort
		// (Sprinting), otherwise, the character is already walking and there is no change in movement mode.
		
		if (PhysicalEffort == EPhysicalEffort::Heavy)
		{
			// The character is set to recover from the peak ("Heavy") intensity of sprinting and can return to walking
            // pace.

			RecoveryDuration = RecoveryBreaths;
			SetPhysicalEffort(EPhysicalEffort::Recovery);

			HeavyBreathCycle = 0;
            InCharacter->EnterWalk({});
		}
	}
}


/**
 *	Aleksandr Hovhannisyan
 *	(2020)
 *	Implementing a Finite State Machine in C++.
 *	Available at: https://www.aleksandrhovhannisyan.com/blog/implementing-a-finite-state-machine-in-cpp/
 *	(Accessed: 04 December 2023).
 */

/**
 *	Epic Developer Community
 *	(2022)
 *	Metasound outputs accessible via blueprint?.
 *	Available at: https://forums.unrealengine.com/t/metasound-outputs-accessible-via-blueprint/542873/5
 *	(Accessed: 04 December 2023).
 */
