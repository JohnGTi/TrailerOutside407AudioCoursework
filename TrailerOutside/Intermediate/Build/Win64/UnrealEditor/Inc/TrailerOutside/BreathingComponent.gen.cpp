// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrailerOutside/Public/BreathingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreathingComponent() {}
// Cross Module References
	TRAILEROUTSIDE_API UEnum* Z_Construct_UEnum_TrailerOutside_EPhysicalEffort();
	UPackage* Z_Construct_UPackage__Script_TrailerOutside();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UBreathingComponent_NoRegister();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UBreathingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	TRAILEROUTSIDE_API UEnum* Z_Construct_UEnum_TrailerOutside_ECharacterMovement();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicalEffort;
	static UEnum* EPhysicalEffort_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicalEffort.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicalEffort.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TrailerOutside_EPhysicalEffort, Z_Construct_UPackage__Script_TrailerOutside(), TEXT("EPhysicalEffort"));
		}
		return Z_Registration_Info_UEnum_EPhysicalEffort.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UEnum* StaticEnum<EPhysicalEffort>()
	{
		return EPhysicalEffort_StaticEnum();
	}
	struct Z_Construct_UEnum_TrailerOutside_EPhysicalEffort_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TrailerOutside_EPhysicalEffort_Statics::Enumerators[] = {
		{ "EPhysicalEffort::Regular", (int64)EPhysicalEffort::Regular },
		{ "EPhysicalEffort::Heavy", (int64)EPhysicalEffort::Heavy },
		{ "EPhysicalEffort::Recovery", (int64)EPhysicalEffort::Recovery },
		{ "EPhysicalEffort::Faint", (int64)EPhysicalEffort::Faint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TrailerOutside_EPhysicalEffort_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09State representation of the physical exertion of the first person character according to its movement history (These\n *\x09states are to influence the sounds of the character's breathing and \"Breathing\" the character's movement).\n */" },
		{ "Faint.Name", "EPhysicalEffort::Faint" },
		{ "Heavy.Name", "EPhysicalEffort::Heavy" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "Recovery.Name", "EPhysicalEffort::Recovery" },
		{ "Regular.Name", "EPhysicalEffort::Regular" },
		{ "ToolTip", "State representation of the physical exertion of the first person character according to its movement history (These\nstates are to influence the sounds of the character's breathing and \"Breathing\" the character's movement)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TrailerOutside_EPhysicalEffort_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TrailerOutside,
		nullptr,
		"EPhysicalEffort",
		"EPhysicalEffort",
		Z_Construct_UEnum_TrailerOutside_EPhysicalEffort_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_EPhysicalEffort_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TrailerOutside_EPhysicalEffort_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_EPhysicalEffort_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TrailerOutside_EPhysicalEffort()
	{
		if (!Z_Registration_Info_UEnum_EPhysicalEffort.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicalEffort.InnerSingleton, Z_Construct_UEnum_TrailerOutside_EPhysicalEffort_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicalEffort.InnerSingleton;
	}
	DEFINE_FUNCTION(UBreathingComponent::execUpdateCharacterMovement)
	{
		P_GET_OBJECT(AFirstPersonCharacter,Z_Param_InCharacter);
		P_GET_ENUM(ECharacterMovement,Z_Param_InCharacterMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCharacterMovement(Z_Param_InCharacter,ECharacterMovement(Z_Param_InCharacterMovementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBreathingComponent::execInitialiseBreathingPattern)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitialiseBreathingPattern();
		P_NATIVE_END;
	}
	void UBreathingComponent::StaticRegisterNativesUBreathingComponent()
	{
		UClass* Class = UBreathingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitialiseBreathingPattern", &UBreathingComponent::execInitialiseBreathingPattern },
			{ "UpdateCharacterMovement", &UBreathingComponent::execUpdateCharacterMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBreathingComponent_InitialiseBreathingPattern_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBreathingComponent_InitialiseBreathingPattern_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09""Create an audio component with default settings (Specifically, with zero spatialisation) that are suitable to\n\x09 *\x09the stereo (The sound is to envelope the player's head) breathing effect. Subscribe a class method that is to\n\x09 *\x09""control a change in the MetaSound to handle, to an audio component delegate that signals the end of playback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "Create an audio component with default settings (Specifically, with zero spatialisation) that are suitable to\nthe stereo (The sound is to envelope the player's head) breathing effect. Subscribe a class method that is to\ncontrol a change in the MetaSound to handle, to an audio component delegate that signals the end of playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBreathingComponent_InitialiseBreathingPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBreathingComponent, nullptr, "InitialiseBreathingPattern", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBreathingComponent_InitialiseBreathingPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreathingComponent_InitialiseBreathingPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBreathingComponent_InitialiseBreathingPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBreathingComponent_InitialiseBreathingPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics
	{
		struct BreathingComponent_eventUpdateCharacterMovement_Parms
		{
			AFirstPersonCharacter* InCharacter;
			ECharacterMovement InCharacterMovementMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCharacterMovementMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCharacterMovementMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCharacterMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreathingComponent_eventUpdateCharacterMovement_Parms, InCharacter), Z_Construct_UClass_AFirstPersonCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode = { "InCharacterMovementMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreathingComponent_eventUpdateCharacterMovement_Parms, InCharacterMovementMode), Z_Construct_UEnum_TrailerOutside_ECharacterMovement, METADATA_PARAMS(Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode_MetaData)) }; // 3212392268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09Protected first person character methods that directly change the mode of character movement are called upon\n\x09 *\x09""according to the Breathing system's reinterpretation of that which is offered as an argument.\n\x09 *\n\x09 *\x09@param InCharacterMovementMode\x09The character movement mode (An indicator of the speed at which the first person\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09""character is to move) that a caller wishes to change to.\n\x09 *\x09@param InCharacter\x09The first person \"Character.\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "Protected first person character methods that directly change the mode of character movement are called upon\naccording to the Breathing system's reinterpretation of that which is offered as an argument.\n\n@param InCharacterMovementMode  The character movement mode (An indicator of the speed at which the first person\n                                                                character is to move) that a caller wishes to change to.\n@param InCharacter      The first person \"Character.\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBreathingComponent, nullptr, "UpdateCharacterMovement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::BreathingComponent_eventUpdateCharacterMovement_Parms), Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBreathingComponent);
	UClass* Z_Construct_UClass_UBreathingComponent_NoRegister()
	{
		return UBreathingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBreathingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularBreathPattern_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RegularBreathPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeavyBreathPattern_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyBreathPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeverishBreathPattern_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FeverishBreathPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaintBreath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FaintBreath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BreathingPatternMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BreathingPatternMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BreathingPatternMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreathingPatternMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BreathingPatternMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreathingAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BreathingAudioComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicalEffort_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalEffort_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PhysicalEffort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryBreaths_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RecoveryBreaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenaltyRecoveryBreaths_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PenaltyRecoveryBreaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintDuration_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SprintDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBreathingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TrailerOutside,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBreathingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBreathingComponent_InitialiseBreathingPattern, "InitialiseBreathingPattern" }, // 2772811273
		{ &Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement, "UpdateCharacterMovement" }, // 1432813236
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n *\x09Playback of audio loops of breathing patterns respond to the character movement demands of the player. This system\n *\x09(For the purposes of the CMP407 coursework) was designed to motivate/stipulate the changes in the mode of the first\n *\x09person character's movement (The first person \"Character\" class calls upon this component to handle movement mode\n *\x09updates according to the player's input).\n */" },
		{ "IncludePath", "BreathingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "Playback of audio loops of breathing patterns respond to the character movement demands of the player. This system\n(For the purposes of the CMP407 coursework) was designed to motivate/stipulate the changes in the mode of the first\nperson character's movement (The first person \"Character\" class calls upon this component to handle movement mode\nupdates according to the player's input)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RegularBreathPattern_MetaData[] = {
		{ "Category", "BreathingPatternAssets" },
		{ "Comment", "/**\n\x09 *\x09The Blueprint interface of this actor component is to assign soft references to the MetaSound assets that are to\n\x09 *\x09""be assigned to the \"Breathing\" audio component for each kind of breathing pattern (Or, \"EPhysicalEffort\").\n\x09 */" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "The Blueprint interface of this actor component is to assign soft references to the MetaSound assets that are to\nbe assigned to the \"Breathing\" audio component for each kind of breathing pattern (Or, \"EPhysicalEffort\")." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RegularBreathPattern = { "RegularBreathPattern", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, RegularBreathPattern), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RegularBreathPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RegularBreathPattern_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_HeavyBreathPattern_MetaData[] = {
		{ "Category", "BreathingPatternAssets" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_HeavyBreathPattern = { "HeavyBreathPattern", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, HeavyBreathPattern), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_HeavyBreathPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_HeavyBreathPattern_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FeverishBreathPattern_MetaData[] = {
		{ "Category", "BreathingPatternAssets" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FeverishBreathPattern = { "FeverishBreathPattern", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, FeverishBreathPattern), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FeverishBreathPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FeverishBreathPattern_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FaintBreath_MetaData[] = {
		{ "Category", "BreathingPatternAssets" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FaintBreath = { "FaintBreath", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, FaintBreath), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FaintBreath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FaintBreath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap_ValueProp = { "BreathingPatternMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap_Key_KeyProp = { "BreathingPatternMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TrailerOutside_EPhysicalEffort, METADATA_PARAMS(nullptr, 0) }; // 425198537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The current state of physical effort will key the MetaSound representation of the associated breathing pattern.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "The current state of physical effort will key the MetaSound representation of the associated breathing pattern." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap = { "BreathingPatternMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, BreathingPatternMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap_MetaData)) }; // 425198537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingAudioComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The \"Breathing\" audio component handles a MetaSound, at a time, that will play a single or series of breathing\n\x09 *\x09pattern audio assets. Continuous playing of a series of breathing patterns may come to an end after a maximum\n\x09 *\x09number has been played, or having been interrupted by an input flag sent in response to movement of the first\n\x09 *\x09person character.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "The \"Breathing\" audio component handles a MetaSound, at a time, that will play a single or series of breathing\npattern audio assets. Continuous playing of a series of breathing patterns may come to an end after a maximum\nnumber has been played, or having been interrupted by an input flag sent in response to movement of the first\nperson character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingAudioComponent = { "BreathingAudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, BreathingAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingAudioComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PhysicalEffort_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PhysicalEffort_MetaData[] = {
		{ "Comment", "/** Motivated by the movement mode of the first person character that defaults to the \"Walking\" state. */" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "Motivated by the movement mode of the first person character that defaults to the \"Walking\" state." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PhysicalEffort = { "PhysicalEffort", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, PhysicalEffort), Z_Construct_UEnum_TrailerOutside_EPhysicalEffort, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PhysicalEffort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PhysicalEffort_MetaData)) }; // 425198537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RecoveryBreaths_MetaData[] = {
		{ "Category", "PhysicalHealth" },
		{ "Comment", "/**\n\x09 *\x09The number of cycles a character will be made to (Feverishly) breathe before they have recovered from physical\n\x09 *\x09""effort. The recovery duration\n\x09 */" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "The number of cycles a character will be made to (Feverishly) breathe before they have recovered from physical\neffort. The recovery duration" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RecoveryBreaths = { "RecoveryBreaths", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, RecoveryBreaths), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RecoveryBreaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RecoveryBreaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PenaltyRecoveryBreaths_MetaData[] = {
		{ "Category", "PhysicalHealth" },
		{ "Comment", "/**\n\x09 *\x09The number of cycles a character will be made to (Feverishly) breathe before they have recovered from exhausted\n\x09 *\x09physical effort.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "The number of cycles a character will be made to (Feverishly) breathe before they have recovered from exhausted\nphysical effort." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PenaltyRecoveryBreaths = { "PenaltyRecoveryBreaths", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, PenaltyRecoveryBreaths), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PenaltyRecoveryBreaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PenaltyRecoveryBreaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::NewProp_SprintDuration_MetaData[] = {
		{ "Category", "PhysicalHealth" },
		{ "Comment", "/** The duration, in number of cycles of breaths, that a character may sprint for. */" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "The duration, in number of cycles of breaths, that a character may sprint for." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBreathingComponent_Statics::NewProp_SprintDuration = { "SprintDuration", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingComponent, SprintDuration), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_SprintDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::NewProp_SprintDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBreathingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RegularBreathPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_HeavyBreathPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FeverishBreathPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_FaintBreath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingPatternMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_BreathingAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PhysicalEffort_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PhysicalEffort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_RecoveryBreaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_PenaltyRecoveryBreaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingComponent_Statics::NewProp_SprintDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBreathingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBreathingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBreathingComponent_Statics::ClassParams = {
		&UBreathingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBreathingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBreathingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBreathingComponent()
	{
		if (!Z_Registration_Info_UClass_UBreathingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBreathingComponent.OuterSingleton, Z_Construct_UClass_UBreathingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBreathingComponent.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UClass* StaticClass<UBreathingComponent>()
	{
		return UBreathingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBreathingComponent);
	struct Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics::EnumInfo[] = {
		{ EPhysicalEffort_StaticEnum, TEXT("EPhysicalEffort"), &Z_Registration_Info_UEnum_EPhysicalEffort, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 425198537U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBreathingComponent, UBreathingComponent::StaticClass, TEXT("UBreathingComponent"), &Z_Registration_Info_UClass_UBreathingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBreathingComponent), 894628514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_2024249186(TEXT("/Script/TrailerOutside"),
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
