// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrailerOutside/Public/OutsideLevelScriptActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutsideLevelScriptActor() {}
// Cross Module References
	TRAILEROUTSIDE_API UFunction* Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TrailerOutside();
	TRAILEROUTSIDE_API UEnum* Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AOutsideLevelScriptActor_NoRegister();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AOutsideLevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UBreathingComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics
	{
		struct _Script_TrailerOutside_eventOnActiveSystemToggleSignature_Parms
		{
			bool bInEnableSystem;
		};
		static void NewProp_bInEnableSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::NewProp_bInEnableSystem_SetBit(void* Obj)
	{
		((_Script_TrailerOutside_eventOnActiveSystemToggleSignature_Parms*)Obj)->bInEnableSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::NewProp_bInEnableSystem = { "bInEnableSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TrailerOutside_eventOnActiveSystemToggleSignature_Parms), &Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::NewProp_bInEnableSystem_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::NewProp_bInEnableSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A single-cast delegate broadcasts to the relevant system that it should enable or disable its activity/output. */" },
		{ "ModuleRelativePath", "Public/OutsideLevelScriptActor.h" },
		{ "ToolTip", "A single-cast delegate broadcasts to the relevant system that it should enable or disable its activity/output." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TrailerOutside, nullptr, "OnActiveSystemToggleSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::_Script_TrailerOutside_eventOnActiveSystemToggleSignature_Parms), Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundManagementSystem;
	static UEnum* ESoundManagementSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESoundManagementSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESoundManagementSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem, Z_Construct_UPackage__Script_TrailerOutside(), TEXT("ESoundManagementSystem"));
		}
		return Z_Registration_Info_UEnum_ESoundManagementSystem.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UEnum* StaticEnum<ESoundManagementSystem>()
	{
		return ESoundManagementSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem_Statics::Enumerators[] = {
		{ "ESoundManagementSystem::All", (int64)ESoundManagementSystem::All },
		{ "ESoundManagementSystem::Breathing", (int64)ESoundManagementSystem::Breathing },
		{ "ESoundManagementSystem::AreaLocalisation", (int64)ESoundManagementSystem::AreaLocalisation },
		{ "ESoundManagementSystem::Count", (int64)ESoundManagementSystem::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ESoundManagementSystem::All" },
		{ "AreaLocalisation.Name", "ESoundManagementSystem::AreaLocalisation" },
		{ "BlueprintType", "true" },
		{ "Breathing.Name", "ESoundManagementSystem::Breathing" },
		{ "Comment", "/**\n *\x09State representation of the sound management systems that may have their output enabled/disabled according to\n *\x09""debugging or demonstration needs.\n */" },
		{ "Count.Comment", "// Facilitate the definition of these enum as iterable by ENUM_RANGE_BY_COUNT.\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESoundManagementSystem::Count" },
		{ "Count.ToolTip", "Facilitate the definition of these enum as iterable by ENUM_RANGE_BY_COUNT." },
		{ "ModuleRelativePath", "Public/OutsideLevelScriptActor.h" },
		{ "ToolTip", "State representation of the sound management systems that may have their output enabled/disabled according to\ndebugging or demonstration needs." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TrailerOutside,
		nullptr,
		"ESoundManagementSystem",
		"ESoundManagementSystem",
		Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem()
	{
		if (!Z_Registration_Info_UEnum_ESoundManagementSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundManagementSystem.InnerSingleton, Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESoundManagementSystem.InnerSingleton;
	}
	DEFINE_FUNCTION(AOutsideLevelScriptActor::execSwitchActiveSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchActiveSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutsideLevelScriptActor::execEnableSystemByIndex)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InSystemIndex);
		P_GET_UBOOL(Z_Param_bInEnableSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSystemByIndex(Z_Param_InSystemIndex,Z_Param_bInEnableSystem);
		P_NATIVE_END;
	}
	void AOutsideLevelScriptActor::StaticRegisterNativesAOutsideLevelScriptActor()
	{
		UClass* Class = AOutsideLevelScriptActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableSystemByIndex", &AOutsideLevelScriptActor::execEnableSystemByIndex },
			{ "SwitchActiveSystem", &AOutsideLevelScriptActor::execSwitchActiveSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics
	{
		struct OutsideLevelScriptActor_eventEnableSystemByIndex_Parms
		{
			uint8 InSystemIndex;
			bool bInEnableSystem;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSystemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInEnableSystem_MetaData[];
#endif
		static void NewProp_bInEnableSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::NewProp_InSystemIndex = { "InSystemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OutsideLevelScriptActor_eventEnableSystemByIndex_Parms, InSystemIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::NewProp_bInEnableSystem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::NewProp_bInEnableSystem_SetBit(void* Obj)
	{
		((OutsideLevelScriptActor_eventEnableSystemByIndex_Parms*)Obj)->bInEnableSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::NewProp_bInEnableSystem = { "bInEnableSystem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OutsideLevelScriptActor_eventEnableSystemByIndex_Parms), &Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::NewProp_bInEnableSystem_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::NewProp_bInEnableSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::NewProp_bInEnableSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::NewProp_InSystemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::NewProp_bInEnableSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09@param InSystemIndex\x09The integer representative of a system enumerator in ESoundManagementSystem.\n\x09 *\x09@param bInEnableSystem\x09Whether the system is to be enabled or disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OutsideLevelScriptActor.h" },
		{ "ToolTip", "@param InSystemIndex    The integer representative of a system enumerator in ESoundManagementSystem.\n@param bInEnableSystem  Whether the system is to be enabled or disabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutsideLevelScriptActor, nullptr, "EnableSystemByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::OutsideLevelScriptActor_eventEnableSystemByIndex_Parms), Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutsideLevelScriptActor_SwitchActiveSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutsideLevelScriptActor_SwitchActiveSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "DebuggingTools" },
		{ "Comment", "/** Switch between all or individual sound management systems being active. */" },
		{ "ModuleRelativePath", "Public/OutsideLevelScriptActor.h" },
		{ "ToolTip", "Switch between all or individual sound management systems being active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutsideLevelScriptActor_SwitchActiveSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutsideLevelScriptActor, nullptr, "SwitchActiveSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOutsideLevelScriptActor_SwitchActiveSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOutsideLevelScriptActor_SwitchActiveSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOutsideLevelScriptActor_SwitchActiveSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutsideLevelScriptActor_SwitchActiveSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOutsideLevelScriptActor);
	UClass* Z_Construct_UClass_AOutsideLevelScriptActor_NoRegister()
	{
		return AOutsideLevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_AOutsideLevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreathingSystemToggleDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_BreathingSystemToggleDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreathingSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BreathingSystem;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ActiveSystemMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveSystemMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveSystemMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSystemMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveSystemMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOutsideLevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TrailerOutside,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOutsideLevelScriptActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOutsideLevelScriptActor_EnableSystemByIndex, "EnableSystemByIndex" }, // 2163328689
		{ &Z_Construct_UFunction_AOutsideLevelScriptActor_SwitchActiveSystem, "SwitchActiveSystem" }, // 3845291360
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutsideLevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09This LevelScriptActor sees a hidden instance in the FirstPersonMap level and features level-wide/specific logic.\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "OutsideLevelScriptActor.h" },
		{ "ModuleRelativePath", "Public/OutsideLevelScriptActor.h" },
		{ "ToolTip", "This LevelScriptActor sees a hidden instance in the FirstPersonMap level and features level-wide/specific logic." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystemToggleDelegate_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/OutsideLevelScriptActor.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystemToggleDelegate = { "BreathingSystemToggleDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOutsideLevelScriptActor, BreathingSystemToggleDelegate), Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystemToggleDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystemToggleDelegate_MetaData)) }; // 1625819762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystem_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The Breathing system is a component of the first-person character, which provides a reference to the component.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OutsideLevelScriptActor.h" },
		{ "ToolTip", "The Breathing system is a component of the first-person character, which provides a reference to the component." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystem = { "BreathingSystem", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOutsideLevelScriptActor, BreathingSystem), Z_Construct_UClass_UBreathingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystem_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap_ValueProp = { "ActiveSystemMap", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UDelegateFunction_TrailerOutside_OnActiveSystemToggleSignature__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1625819762
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap_Key_KeyProp = { "ActiveSystemMap_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem, METADATA_PARAMS(nullptr, 0) }; // 122499432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/OutsideLevelScriptActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap = { "ActiveSystemMap", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOutsideLevelScriptActor, ActiveSystemMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap_MetaData)) }; // 122499432 1625819762
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystem_MetaData[] = {
		{ "Comment", "/** By default, all sound management systems are enabled. */" },
		{ "ModuleRelativePath", "Public/OutsideLevelScriptActor.h" },
		{ "ToolTip", "By default, all sound management systems are enabled." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystem = { "ActiveSystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOutsideLevelScriptActor, ActiveSystem), Z_Construct_UEnum_TrailerOutside_ESoundManagementSystem, METADATA_PARAMS(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystem_MetaData)) }; // 122499432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOutsideLevelScriptActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystemToggleDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_BreathingSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystemMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutsideLevelScriptActor_Statics::NewProp_ActiveSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOutsideLevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOutsideLevelScriptActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOutsideLevelScriptActor_Statics::ClassParams = {
		&AOutsideLevelScriptActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOutsideLevelScriptActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOutsideLevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOutsideLevelScriptActor()
	{
		if (!Z_Registration_Info_UClass_AOutsideLevelScriptActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOutsideLevelScriptActor.OuterSingleton, Z_Construct_UClass_AOutsideLevelScriptActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOutsideLevelScriptActor.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UClass* StaticClass<AOutsideLevelScriptActor>()
	{
		return AOutsideLevelScriptActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOutsideLevelScriptActor);
	struct Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_Statics::EnumInfo[] = {
		{ ESoundManagementSystem_StaticEnum, TEXT("ESoundManagementSystem"), &Z_Registration_Info_UEnum_ESoundManagementSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 122499432U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOutsideLevelScriptActor, AOutsideLevelScriptActor::StaticClass, TEXT("AOutsideLevelScriptActor"), &Z_Registration_Info_UClass_AOutsideLevelScriptActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOutsideLevelScriptActor), 4082925005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_2182525858(TEXT("/Script/TrailerOutside"),
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
