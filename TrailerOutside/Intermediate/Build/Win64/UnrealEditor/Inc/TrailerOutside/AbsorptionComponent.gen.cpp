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
	DEFINE_FUNCTION(UAbsorptionComponent::execIsSourceOccluded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSourceOccluded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbsorptionComponent::execUpdateParameters)
	{
		P_GET_UBOOL(Z_Param_bInIsSourceOccluded);
		P_GET_STRUCT(FVector,Z_Param_SourceWorldPosition);
		P_GET_STRUCT(FVector,Z_Param_ListenerWorldPosition);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutVolumeMultiplier);
		P_GET_UBOOL(Z_Param_bInChangeInOcclusion);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLowPassCutOff);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateParameters(Z_Param_bInIsSourceOccluded,Z_Param_SourceWorldPosition,Z_Param_ListenerWorldPosition,Z_Param_Out_OutVolumeMultiplier,Z_Param_bInChangeInOcclusion,Z_Param_Out_OutLowPassCutOff,Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
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
			{ "IsSourceOccluded", &UAbsorptionComponent::execIsSourceOccluded },
			{ "TraceToListener", &UAbsorptionComponent::execTraceToListener },
			{ "UpdateParameters", &UAbsorptionComponent::execUpdateParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics
	{
		struct AbsorptionComponent_eventIsSourceOccluded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AbsorptionComponent_eventIsSourceOccluded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbsorptionComponent_eventIsSourceOccluded_Parms), &Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09@return Whether or not a line drawn from the audio source and the listener is blocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
		{ "ToolTip", "@return Whether or not a line drawn from the audio source and the listener is blocked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbsorptionComponent, nullptr, "IsSourceOccluded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::AbsorptionComponent_eventIsSourceOccluded_Parms), Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "Comment", "/**\n\x09 *\x09@param SourceWorldPosition\x09\x09The world location of the source of the sound which may be absorbed before reac-\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09hing the listener.\n\x09 *\x09@param ListenerWorldPosition\x09The world location of the listener, relative to which absorption assessments are\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09made.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
		{ "ToolTip", "@param SourceWorldPosition              The world location of the source of the sound which may be absorbed before reac-\n                                                                hing the listener.\n@param ListenerWorldPosition    The world location of the listener, relative to which absorption assessments are\n                                                                made." },
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
	struct Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics
	{
		struct AbsorptionComponent_eventUpdateParameters_Parms
		{
			bool bInIsSourceOccluded;
			FVector SourceWorldPosition;
			FVector ListenerWorldPosition;
			float OutVolumeMultiplier;
			bool bInChangeInOcclusion;
			float OutLowPassCutOff;
			float InDeltaTime;
		};
		static void NewProp_bInIsSourceOccluded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsSourceOccluded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ListenerWorldPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutVolumeMultiplier;
		static void NewProp_bInChangeInOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInChangeInOcclusion;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLowPassCutOff;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_bInIsSourceOccluded_SetBit(void* Obj)
	{
		((AbsorptionComponent_eventUpdateParameters_Parms*)Obj)->bInIsSourceOccluded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_bInIsSourceOccluded = { "bInIsSourceOccluded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbsorptionComponent_eventUpdateParameters_Parms), &Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_bInIsSourceOccluded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_SourceWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_SourceWorldPosition = { "SourceWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbsorptionComponent_eventUpdateParameters_Parms, SourceWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_SourceWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_SourceWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_ListenerWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_ListenerWorldPosition = { "ListenerWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbsorptionComponent_eventUpdateParameters_Parms, ListenerWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_ListenerWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_ListenerWorldPosition_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_OutVolumeMultiplier = { "OutVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbsorptionComponent_eventUpdateParameters_Parms, OutVolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_bInChangeInOcclusion_SetBit(void* Obj)
	{
		((AbsorptionComponent_eventUpdateParameters_Parms*)Obj)->bInChangeInOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_bInChangeInOcclusion = { "bInChangeInOcclusion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbsorptionComponent_eventUpdateParameters_Parms), &Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_bInChangeInOcclusion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_OutLowPassCutOff = { "OutLowPassCutOff", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbsorptionComponent_eventUpdateParameters_Parms, OutLowPassCutOff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbsorptionComponent_eventUpdateParameters_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_bInIsSourceOccluded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_SourceWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_ListenerWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_OutVolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_bInChangeInOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_OutLowPassCutOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbsorptionComponent, nullptr, "UpdateParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::AbsorptionComponent_eventUpdateParameters_Parms), Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EaseDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttenuationLinearScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAttenuationLinearScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceLowPassCutOff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceLowPassCutOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorLowPassCutOff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorLowPassCutOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousInteriorCutOff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousInteriorCutOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousDistanceCutOff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousDistanceCutOff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbsorptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TrailerOutside,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbsorptionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbsorptionComponent_IsSourceOccluded, "IsSourceOccluded" }, // 490187924
		{ &Z_Construct_UFunction_UAbsorptionComponent_TraceToListener, "TraceToListener" }, // 2633459244
		{ &Z_Construct_UFunction_UAbsorptionComponent_UpdateParameters, "UpdateParameters" }, // 4248617748
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_EaseDuration_MetaData[] = {
		{ "Comment", "/** The default duration  is modelled after the time taken the first-person character to walk its diameter. */" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
		{ "ToolTip", "The default duration  is modelled after the time taken the first-person character to walk its diameter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_EaseDuration = { "EaseDuration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbsorptionComponent, EaseDuration), METADATA_PARAMS(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_EaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_EaseDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceAttenuationLinearScale_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/**\n\x09 *\x09The default extent of attenuation - within the range [The audio source world location, the radius of the traver-\n\x09 *\x09sable scene] - may be designed in-editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
		{ "ToolTip", "The default extent of attenuation - within the range [The audio source world location, the radius of the traver-\nsable scene] - may be designed in-editor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceAttenuationLinearScale = { "DistanceAttenuationLinearScale", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbsorptionComponent, DistanceAttenuationLinearScale), METADATA_PARAMS(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceAttenuationLinearScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceAttenuationLinearScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceLowPassCutOff_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** The low pass cut-off frequency at the maximum distance the listener may be separated from a source audio. */" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
		{ "ToolTip", "The low pass cut-off frequency at the maximum distance the listener may be separated from a source audio." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceLowPassCutOff = { "DistanceLowPassCutOff", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbsorptionComponent, DistanceLowPassCutOff), METADATA_PARAMS(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceLowPassCutOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceLowPassCutOff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_InteriorLowPassCutOff_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** The low pass frequency cut-off perceived by a listener inside the trailer body. */" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
		{ "ToolTip", "The low pass frequency cut-off perceived by a listener inside the trailer body." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_InteriorLowPassCutOff = { "InteriorLowPassCutOff", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbsorptionComponent, InteriorLowPassCutOff), METADATA_PARAMS(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_InteriorLowPassCutOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_InteriorLowPassCutOff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousInteriorCutOff_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousInteriorCutOff = { "PreviousInteriorCutOff", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbsorptionComponent, PreviousInteriorCutOff), METADATA_PARAMS(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousInteriorCutOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousInteriorCutOff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousDistanceCutOff_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbsorptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousDistanceCutOff = { "PreviousDistanceCutOff", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbsorptionComponent, PreviousDistanceCutOff), METADATA_PARAMS(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousDistanceCutOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousDistanceCutOff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbsorptionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_EaseDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceAttenuationLinearScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_DistanceLowPassCutOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_InteriorLowPassCutOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousInteriorCutOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbsorptionComponent_Statics::NewProp_PreviousDistanceCutOff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbsorptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbsorptionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbsorptionComponent_Statics::ClassParams = {
		&UAbsorptionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbsorptionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbsorptionComponent_Statics::PropPointers),
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
		{ Z_Construct_UClass_UAbsorptionComponent, UAbsorptionComponent::StaticClass, TEXT("UAbsorptionComponent"), &Z_Registration_Info_UClass_UAbsorptionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbsorptionComponent), 3473794562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AbsorptionComponent_h_2793835550(TEXT("/Script/TrailerOutside"),
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AbsorptionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AbsorptionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
