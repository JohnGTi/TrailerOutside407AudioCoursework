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
	TRAILEROUTSIDE_API UEnum* Z_Construct_UEnum_TrailerOutside_EOcclusion();
	UPackage* Z_Construct_UPackage__Script_TrailerOutside();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AAreaLocalisation_NoRegister();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AAreaLocalisation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UAbsorptionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOcclusion;
	static UEnum* EOcclusion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOcclusion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOcclusion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TrailerOutside_EOcclusion, Z_Construct_UPackage__Script_TrailerOutside(), TEXT("EOcclusion"));
		}
		return Z_Registration_Info_UEnum_EOcclusion.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UEnum* StaticEnum<EOcclusion>()
	{
		return EOcclusion_StaticEnum();
	}
	struct Z_Construct_UEnum_TrailerOutside_EOcclusion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TrailerOutside_EOcclusion_Statics::Enumerators[] = {
		{ "EOcclusion::Occluded", (int64)EOcclusion::Occluded },
		{ "EOcclusion::Free", (int64)EOcclusion::Free },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TrailerOutside_EOcclusion_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""A semantic representation of the state of propagation of audio from a source to the listener.\n */" },
		{ "Free.Name", "EOcclusion::Free" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "Occluded.Name", "EOcclusion::Occluded" },
		{ "ToolTip", "A semantic representation of the state of propagation of audio from a source to the listener." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TrailerOutside_EOcclusion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TrailerOutside,
		nullptr,
		"EOcclusion",
		"EOcclusion",
		Z_Construct_UEnum_TrailerOutside_EOcclusion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_EOcclusion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TrailerOutside_EOcclusion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_EOcclusion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TrailerOutside_EOcclusion()
	{
		if (!Z_Registration_Info_UEnum_EOcclusion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOcclusion.InnerSingleton, Z_Construct_UEnum_TrailerOutside_EOcclusion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOcclusion.InnerSingleton;
	}
	DEFINE_FUNCTION(AAreaLocalisation::execValidateMovement)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutLocationInXY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateMovement(Z_Param_Out_OutLocationInXY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAreaLocalisation::execHandleAbsorption)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAbsorption(Z_Param_InDeltaTime);
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
			{ "HandleAbsorption", &AAreaLocalisation::execHandleAbsorption },
			{ "ValidateMovement", &AAreaLocalisation::execValidateMovement },
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
	struct Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics
	{
		struct AreaLocalisation_eventHandleAbsorption_Parms
		{
			float InDeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AreaLocalisation_eventHandleAbsorption_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09The Absorption component designs attenuated values for the low pass cut-off frequency and volume level, which v-\n\x09 *\x09""ary according to material obstruction in the audio's path to the listener.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "The Absorption component designs attenuated values for the low pass cut-off frequency and volume level, which v-\nary according to material obstruction in the audio's path to the listener." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAreaLocalisation, nullptr, "HandleAbsorption", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::AreaLocalisation_eventHandleAbsorption_Parms), Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics
	{
		struct AreaLocalisation_eventValidateMovement_Parms
		{
			FVector2D OutLocationInXY;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocationInXY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::NewProp_OutLocationInXY = { "OutLocationInXY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AreaLocalisation_eventValidateMovement_Parms, OutLocationInXY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AreaLocalisation_eventValidateMovement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AreaLocalisation_eventValidateMovement_Parms), &Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::NewProp_OutLocationInXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09""A single line trace is drawn per call; incrementally (And exponentially), the step size grows between the previ-\n\x09 *\x09ous trace until the farthest viable displacement is determined at the current step-size granularity.\n\x09 *\n\x09 *\x09@param OutLocationInXY\x09The world location that the actor is to be displaced (An FVector2D, the actor does not\n\x09 *\x09\x09\x09\x09\x09\x09\x09pursue a listener in the Z-axis).\n\x09 *\x09@return Whether or not the movement is valid/the actor is to move.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "A single line trace is drawn per call; incrementally (And exponentially), the step size grows between the previ-\nous trace until the farthest viable displacement is determined at the current step-size granularity.\n\n@param OutLocationInXY  The world location that the actor is to be displaced (An FVector2D, the actor does not\n                                                pursue a listener in the Z-axis).\n@return Whether or not the movement is valid/the actor is to move." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAreaLocalisation, nullptr, "ValidateMovement", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::AreaLocalisation_eventValidateMovement_Parms), Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAreaLocalisation_ValidateMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAreaLocalisation_ValidateMovement_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticHeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaseRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Listener_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioPropagation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioPropagation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioPropagation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Panning_MetaData[];
#endif
		static void NewProp_Panning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Panning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObfuscationRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObfuscationRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_StepResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchSense_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchSense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStep_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceStep;
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
		{ &Z_Construct_UFunction_AAreaLocalisation_HandleAbsorption, "HandleAbsorption" }, // 1810175623
		{ &Z_Construct_UFunction_AAreaLocalisation_ValidateMovement, "ValidateMovement" }, // 1200953532
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase = { "AudioLoopBase", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, AudioLoopBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLevel_MetaData[] = {
		{ "Category", "SoundManagement" },
		{ "Comment", "/** The initial, and normal scaled level of the audio source. */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "The initial, and normal scaled level of the audio source." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLevel = { "AudioLevel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, AudioLevel), METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Comment", "/** The handling of the \"DrummingRainLoop\" MetaSound requires persistent representation. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "The handling of the \"DrummingRainLoop\" MetaSound requires persistent representation." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StaticHeightOffset_MetaData[] = {
		{ "Category", "ChaseBehaviour" },
		{ "Comment", "/** The distance between the audio source and the surface area that it is bound to. */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "The distance between the audio source and the surface area that it is bound to." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StaticHeightOffset = { "StaticHeightOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, StaticHeightOffset), METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StaticHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StaticHeightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ChaseRate_MetaData[] = {
		{ "Category", "ChaseBehaviour" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ChaseRate = { "ChaseRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, ChaseRate), METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ChaseRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ChaseRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09This component offers the bounds within which this actor chase the listener (A line trace down the Z-axis valid-\n\x09 *\x09""ates traversal if the hit component is the SurfaceArea).\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "This component offers the bounds within which this actor chase the listener (A line trace down the Z-axis valid-\nates traversal if the hit component is the SurfaceArea)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, SurfaceArea), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SurfaceArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SurfaceArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener_MetaData[] = {
		{ "Comment", "/** Knowledge of this project's player character (The actor which experiences the soundscape). */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "Knowledge of this project's player character (The actor which experiences the soundscape)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, Listener), Z_Construct_UClass_AFirstPersonCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioPropagation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioPropagation_MetaData[] = {
		{ "Comment", "/** The path which a sound travels to a listener has not been assessed as obstructed. */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "The path which a sound travels to a listener has not been assessed as obstructed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioPropagation = { "AudioPropagation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, AudioPropagation), Z_Construct_UEnum_TrailerOutside_EOcclusion, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioPropagation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioPropagation_MetaData)) }; // 1898134833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Panning_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
	};
#endif
	void Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Panning_SetBit(void* Obj)
	{
		((AAreaLocalisation*)Obj)->Panning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Panning = { "Panning", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAreaLocalisation), &Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Panning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Panning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Panning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ObfuscationRange_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09Where the difference in the audio source and listener world locations fall in this range, the stereo panning ef-\n\x09 *\x09""fect is bypassed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "Where the difference in the audio source and listener world locations fall in this range, the stereo panning ef-\nfect is bypassed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ObfuscationRange = { "ObfuscationRange", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, ObfuscationRange), METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ObfuscationRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ObfuscationRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StepResolution_MetaData[] = {
		{ "Category", "ChaseBehaviour" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StepResolution = { "StepResolution", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, StepResolution), METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StepResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StepResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SearchSense_MetaData[] = {
		{ "Comment", "/** A positive sense of rotation effects a clockwise or counter direction, and vice versa. */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
		{ "ToolTip", "A positive sense of rotation effects a clockwise or counter direction, and vice versa." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SearchSense = { "SearchSense", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, SearchSense), METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SearchSense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SearchSense_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_TraceStep_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09\n\x09 */" },
		{ "ModuleRelativePath", "Public/AreaLocalisation.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_TraceStep = { "TraceStep", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaLocalisation, TraceStep), nullptr, METADATA_PARAMS(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_TraceStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_TraceStep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAreaLocalisation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_BPAbsorptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AbsorptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLoopBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StaticHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ChaseRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SurfaceArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Listener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioPropagation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_AudioPropagation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_Panning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_ObfuscationRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_StepResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_SearchSense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaLocalisation_Statics::NewProp_TraceStep,
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::EnumInfo[] = {
		{ EOcclusion_StaticEnum, TEXT("EOcclusion"), &Z_Registration_Info_UEnum_EOcclusion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1898134833U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAreaLocalisation, AAreaLocalisation::StaticClass, TEXT("AAreaLocalisation"), &Z_Registration_Info_UClass_AAreaLocalisation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAreaLocalisation), 4055762587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_1061509776(TEXT("/Script/TrailerOutside"),
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
