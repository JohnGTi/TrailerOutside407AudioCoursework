// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrailerOutside/Public/AbsorptionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbsorptionComponent() {}
// Cross Module References
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UAbsorptionComponent_NoRegister();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UAbsorptionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TrailerOutside();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAbsorptionComponent::execTraceToListener)
	{
		P_GET_STRUCT(FVector,Z_Param_SourceWorldPosition);
		P_GET_STRUCT(FVector,Z_Param_ListenerWorldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->TraceToListener(Z_Param_SourceWorldPosition,Z_Param_ListenerWorldPosition);
		P_NATIVE_END;
	}
	void UAbsorptionComponent::StaticRegisterNativesUAbsorptionComponent()
	{
		UClass* Class = UAbsorptionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TraceToListener", &UAbsorptionComponent::execTraceToListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics
	{
		struct AbsorptionComponent_eventTraceToListener_Parms
		{
			FVector SourceWorldPosition;
			FVector ListenerWorldPosition;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ListenerWorldPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_SourceWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_SourceWorldPosition = { "SourceWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbsorptionComponent_eventTraceToListener_Parms, SourceWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_SourceWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_SourceWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_ListenerWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_ListenerWorldPosition = { "ListenerWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbsorptionComponent_eventTraceToListener_Parms, ListenerWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_ListenerWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_ListenerWorldPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbsorptionComponent_eventTraceToListener_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_SourceWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_ListenerWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbsorptionComponent, nullptr, "TraceToListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::AbsorptionComponent_eventTraceToListener_Parms), Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbsorptionComponent_TraceToListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbsorptionComponent_TraceToListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbsorptionComponent);
	UClass* Z_Construct_UClass_UAbsorptionComponent_NoRegister()
	{
		return UAbsorptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAbsorptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbsorptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TrailerOutside,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbsorptionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbsorptionComponent_TraceToListener, "TraceToListener" }, // 3263832702
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbsorptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbsorptionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbsorptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbsorptionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbsorptionComponent_Statics::ClassParams = {
		&UAbsorptionComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAbsorptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbsorptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbsorptionComponent()
	{
		if (!Z_Registration_Info_UClass_UAbsorptionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbsorptionComponent.OuterSingleton, Z_Construct_UClass_UAbsorptionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbsorptionComponent.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UClass* StaticClass<UAbsorptionComponent>()
	{
		return UAbsorptionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbsorptionComponent);
	struct Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AbsorptionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AbsorptionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbsorptionComponent, UAbsorptionComponent::StaticClass, TEXT("UAbsorptionComponent"), &Z_Registration_Info_UClass_UAbsorptionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbsorptionComponent), 695087992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AbsorptionComponent_h_781498057(TEXT("/Script/TrailerOutside"),
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AbsorptionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AbsorptionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
