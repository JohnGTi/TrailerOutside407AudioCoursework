// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrailerOutside/Public/AreaLocalisation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAreaLocalisation() {}
// Cross Module References
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AAreaLocalisation_NoRegister();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AAreaLocalisation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TrailerOutside();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UAbsorptionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAreaLocalisation::execOccludeAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OccludeAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAreaLocalisation::execAssignListener)
	{
		P_GET_OBJECT(AFirstPersonCharacter,Z_Param_InListenerActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignListener(Z_Param_InListenerActor);
		P_NATIVE_END;
	}
	void AAreaLocalisation::StaticRegisterNativesAAreaLocalisation()
	{
		UClass* Class = AAreaLocalisation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignListener", &AAreaLocalisation::execAssignListener },
			{ "OccludeAudio", &AAreaLocalisation::execOccludeAudio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics
	{
		struct AreaLocalisation_eventAssignListener_Parms
		{
			AFirstPersonCharacter* InListenerActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InListenerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::NewProp_InListenerActor = { "InListenerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AreaLocalisation_eventAssignListener_Parms, InListenerActor), Z_Construct_UClass_AFirstPersonCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::NewProp_InListenerActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAreaLocalisation, nullptr, "AssignListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::AreaLocalisation_eventAssignListener_Parms), Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAreaLocalisation_AssignListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAreaLocalisation_AssignListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAreaLocalisation_OccludeAudio_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAreaLocalisation_OccludeAudio_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A local helper function resolves a failure in the line of sight between this actor and the listener. */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "A local helper function resolves a failure in the line of sight between this actor and the listener." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAreaLocalisation_OccludeAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAreaLocalisation, nullptr, "OccludeAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAreaLocalisation_OccludeAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAreaLocalisation_OccludeAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAreaLocalisation_OccludeAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAreaLocalisation_OccludeAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAreaLocalisation);
	UClass* Z_Construct_UClass_AAreaLocalisation_NoRegister()
	{
		return AAreaLocalisation::StaticClass();
	}
	struct Z_Construct_UClass_AAreaLocalisation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPAbsorptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BPAbsorptionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbsorptionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioLoopBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioLoopBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Listener_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAreaLocalisation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TrailerOutside,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAreaLocalisation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAreaLocalisation_AssignListener, "AssignListener" }, // 1842844140
		{ &Z_Construct_UFunction_AAreaLocalisation_OccludeAudio, "OccludeAudio" }, // 4188293891
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09This actor, from which a playing sound is attached, will move relative to a listener within an area defined by line\n *\x09trace.\n */" },
		{ "IncludePath", "AreaLocalisation.h" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "This actor, from which a playing sound is attached, will move relative to a listener within an area defined by line\ntrace." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "AreaLocalisation" },
		{ "Comment", "/**  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_BPAbsorptionComponent_MetaData[] = {
		{ "Category", "BlueprintComponents" },
		{ "Comment", "/**\n\x09 *\x09""A reusable, abstract (A component that does not require any physical representation) behaviour that includes\n\x09 *\x09""calculation of distance attenuation in volume and frequency, and occlusion detection, e.g.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "A reusable, abstract (A component that does not require any physical representation) behaviour that includes\ncalculation of distance attenuation in volume and frequency, and occlusion detection, e.g." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_BPAbsorptionComponent = { "BPAbsorptionComponent", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, BPAbsorptionComponent), Z_Construct_UClass_UAbsorptionComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_BPAbsorptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_BPAbsorptionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AbsorptionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AbsorptionComponent = { "AbsorptionComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, AbsorptionComponent), Z_Construct_UClass_UAbsorptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AbsorptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AbsorptionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase_MetaData[] = {
		{ "Category", "SoundManagement" },
		{ "Comment", "/**\n\x09 *\x09The Blueprint interface of this actor is to assign soft references to the looping MetaSound, \"DrummingRainLoop\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "The Blueprint interface of this actor is to assign soft references to the looping MetaSound, \"DrummingRainLoop\"." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase = { "AudioLoopBase", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, AudioLoopBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, Listener), Z_Construct_UClass_AFirstPersonCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAreaLocalisation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_BPAbsorptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AbsorptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAreaLocalisation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAreaLocalisation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAreaLocalisation_Statics::ClassParams = {
		&AAreaLocalisation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAreaLocalisation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAreaLocalisation()
	{
		if (!Z_Registration_Info_UClass_AAreaLocalisation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAreaLocalisation.OuterSingleton, Z_Construct_UClass_AAreaLocalisation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAreaLocalisation.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UClass* StaticClass<AAreaLocalisation>()
	{
		return AAreaLocalisation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAreaLocalisation);
	struct Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAreaLocalisation, AAreaLocalisation::StaticClass, TEXT("AAreaLocalisation"), &Z_Registration_Info_UClass_AAreaLocalisation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAreaLocalisation), 1517216868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_1622834485(TEXT("/Script/TrailerOutside"),
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
