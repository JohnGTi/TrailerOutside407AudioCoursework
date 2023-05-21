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
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UBreathingComponent_NoRegister();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UBreathingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TrailerOutside();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	TRAILEROUTSIDE_API UEnum* Z_Construct_UEnum_TrailerOutside_ECharacterMovement();
// End Cross Module References
	DEFINE_FUNCTION(UBreathingComponent::execUpdateCharacterMovement)
	{
		P_GET_OBJECT(AFirstPersonCharacter,Z_Param_Character);
		P_GET_ENUM(ECharacterMovement,Z_Param_InCharacterMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCharacterMovement(Z_Param_Character,ECharacterMovement(Z_Param_InCharacterMovementMode));
		P_NATIVE_END;
	}
	void UBreathingComponent::StaticRegisterNativesUBreathingComponent()
	{
		UClass* Class = UBreathingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateCharacterMovement", &UBreathingComponent::execUpdateCharacterMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics
	{
		struct BreathingComponent_eventUpdateCharacterMovement_Parms
		{
			AFirstPersonCharacter* Character;
			ECharacterMovement InCharacterMovementMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCharacterMovementMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCharacterMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreathingComponent_eventUpdateCharacterMovement_Parms, Character), Z_Construct_UClass_AFirstPersonCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode = { "InCharacterMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreathingComponent_eventUpdateCharacterMovement_Parms, InCharacterMovementMode), Z_Construct_UEnum_TrailerOutside_ECharacterMovement, METADATA_PARAMS(nullptr, 0) }; // 3212392268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::NewProp_InCharacterMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09Protected first person character methods that directly change the mode of character movement are called upon\n\x09 *\x09""according to the Breathing system's reinterpretation of that which is offered as an argument.\n\x09 *\n\x09 *\x09@param InCharacterMovementMode\x09The character movement mode (An indicator of the speed at which the first person\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09""character is to move) that a caller wishes to change to.\n\x09 *\x09@param Character\x09The first person \"Character.\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "Protected first person character methods that directly change the mode of character movement are called upon\naccording to the Breathing system's reinterpretation of that which is offered as an argument.\n\n@param InCharacterMovementMode  The character movement mode (An indicator of the speed at which the first person\n                                                                character is to move) that a caller wishes to change to.\n@param Character        The first person \"Character.\"" },
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBreathingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TrailerOutside,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBreathingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBreathingComponent_UpdateCharacterMovement, "UpdateCharacterMovement" }, // 3320833537
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n *\x09Playback of audio loops of breathing patterns respond to the character movement demands of the player. This system\n *\x09(For the purposes of the CMP407 coursework) was designed to motivate/stipulate the changes in the mode of the first\n *\x09person character's movement (The first person \"Character\" class calls upon this component to handle movement mode\n *\x09updates according to the player's input).\n */" },
		{ "IncludePath", "BreathingComponent.h" },
		{ "ModuleRelativePath", "Public/BreathingComponent.h" },
		{ "ToolTip", "Playback of audio loops of breathing patterns respond to the character movement demands of the player. This system\n(For the purposes of the CMP407 coursework) was designed to motivate/stipulate the changes in the mode of the first\nperson character's movement (The first person \"Character\" class calls upon this component to handle movement mode\nupdates according to the player's input)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBreathingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBreathingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBreathingComponent_Statics::ClassParams = {
		&UBreathingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
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
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBreathingComponent, UBreathingComponent::StaticClass, TEXT("UBreathingComponent"), &Z_Registration_Info_UClass_UBreathingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBreathingComponent), 3279297454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_762862586(TEXT("/Script/TrailerOutside"),
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
