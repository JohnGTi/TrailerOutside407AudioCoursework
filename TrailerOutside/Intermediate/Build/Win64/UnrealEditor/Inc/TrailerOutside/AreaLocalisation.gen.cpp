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
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void AAreaLocalisation::StaticRegisterNativesAAreaLocalisation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAreaLocalisation);
	UClass* Z_Construct_UClass_AAreaLocalisation_NoRegister()
	{
		return AAreaLocalisation::StaticClass();
	}
	struct Z_Construct_UClass_AAreaLocalisation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioLoopBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioLoopBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAreaLocalisation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TrailerOutside,
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAreaLocalisation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAreaLocalisation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAreaLocalisation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAreaLocalisation_Statics::ClassParams = {
		&AAreaLocalisation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAreaLocalisation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AAreaLocalisation, AAreaLocalisation::StaticClass, TEXT("AAreaLocalisation"), &Z_Registration_Info_UClass_AAreaLocalisation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAreaLocalisation), 1690302227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_3087904054(TEXT("/Script/TrailerOutside"),
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
