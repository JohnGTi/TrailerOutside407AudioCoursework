// Work done for the Abertay University Computer Games Application Development module, "Audio Programming" (CMP407).


#include "OutsideLevelScriptActor.h"
#include "Kismet/GameplayStatics.h"
#include "BreathingComponent.h"
#include "FirstPersonCharacter.h"


void AOutsideLevelScriptActor::BeginPlay()
{
	Super::BeginPlay();

	// Build the map of pairs of system keys and activation/deactivation functions (/Single-cast delegates).
	
	ActiveSystemMap.Emplace(ESoundManagementSystem::Breathing, BreathingSystemToggleDelegate);


	// Cache a reference to the Breathing system - a component of the player character - by way of the player character.
	
	if (const auto FirstPersonCharacter = Cast<AFirstPersonCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld()
		, 0)))
	{
		BreathingSystem = FirstPersonCharacter->GetBreathingComponent();
	}

	// Subscribe a function of the Breathing system to the corresponding 'active sophisticated sound system toggle'
	// delegate - the Breathing component can, therefore, enable or disable itself according to this class' broadcast.

	if (BreathingSystem)
	{
		ActiveSystemMap.Find(ESoundManagementSystem::Breathing)->BindDynamic(BreathingSystem
        		, &UBreathingComponent::BreathingSystemToggle);
	}
}


void AOutsideLevelScriptActor::EnableSystemByIndex(uint8 InSystemIndex, const bool bInEnableSystem)
{
	// The relevant delegate is obtained in a map keyed by the system enumerator, and broadcasts to a system that they
	// should be enabled or disabled.
			
	const ESoundManagementSystem System = static_cast<ESoundManagementSystem>(InSystemIndex);

	if (const FOnActiveSystemToggleSignature* Delegate = ActiveSystemMap.Find(System))
	{
		(void)Delegate->ExecuteIfBound(bInEnableSystem);
	}
}


void AOutsideLevelScriptActor::SwitchActiveSystem()
{
	// The subsequent ESoundManagementSystem enumeration indicates the active sound management system(s) to enable.
	
	uint8 SubsequentSystemIndex =  static_cast<uint8>(ActiveSystem) + 1;
	constexpr uint8 EnumerationCount = static_cast<uint8>(ESoundManagementSystem::Count);

	if (SubsequentSystemIndex >= EnumerationCount)
	{
		// The subsequent index is greater than the number of active system enumerations. Wrap the index to the be
		// equivalent to the first enumeration.
		
		SubsequentSystemIndex = 0;
	}

	ActiveSystem = static_cast<ESoundManagementSystem>(SubsequentSystemIndex);

	// Handle cases for the activity of all systems, the sole activity of the first system described in
	// ESoundManagementSystem, and the sole activation of subsequent systems.

	switch (ActiveSystem)
	{
	case ESoundManagementSystem::All:
		
		// Enable all systems bar the last one (EnumerationCount - 1).

		for (int i = 1; i < EnumerationCount - 1; ++i)
		{
			EnableSystemByIndex(i, true);
		}
		break;

	case 1:
		
		// Disable future systems.

		for (int i = 2; i <= EnumerationCount - 1; ++i)
		{
			EnableSystemByIndex(i, false);
		}
		break;
		
	default:

		// Disable the previous system.

		if (SubsequentSystemIndex > 1)
		{
			EnableSystemByIndex(SubsequentSystemIndex - 1, false);
		}

		// Enable me.
		
		EnableSystemByIndex(SubsequentSystemIndex, true);
		break;
	}
}
