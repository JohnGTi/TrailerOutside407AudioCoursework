// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrailerOutside/Public/FirstPersonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}
// Cross Module References
	TRAILEROUTSIDE_API UEnum* Z_Construct_UEnum_TrailerOutside_EPressure();
	UPackage* Z_Construct_UPackage__Script_TrailerOutside();
	TRAILEROUTSIDE_API UEnum* Z_Construct_UEnum_TrailerOutside_ECharacterMovement();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TRAILEROUTSIDE_API UClass* Z_Construct_UClass_UBreathingComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPressure;
	static UEnum* EPressure_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPressure.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPressure.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TrailerOutside_EPressure, Z_Construct_UPackage__Script_TrailerOutside(), TEXT("EPressure"));
		}
		return Z_Registration_Info_UEnum_EPressure.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UEnum* StaticEnum<EPressure>()
	{
		return EPressure_StaticEnum();
	}
	struct Z_Construct_UEnum_TrailerOutside_EPressure_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TrailerOutside_EPressure_Statics::Enumerators[] = {
		{ "EPressure::Easy", (int64)EPressure::Easy },
		{ "EPressure::Hard", (int64)EPressure::Hard },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TrailerOutside_EPressure_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""A semantic representation of the scale of player input along an axis (A key press is binary and so is always \"Hard\";\n *\x09""a gamepad analogue stick provides more granular control. Such input is analogous to a key press where the stick \n *\x09travels far enough; unlike the binary key press, a stick may ease the scale of its input as opposed to stopping it).\n */" },
		{ "Easy.Name", "EPressure::Easy" },
		{ "Hard.Name", "EPressure::Hard" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "A semantic representation of the scale of player input along an axis (A key press is binary and so is always \"Hard\";\na gamepad analogue stick provides more granular control. Such input is analogous to a key press where the stick\ntravels far enough; unlike the binary key press, a stick may ease the scale of its input as opposed to stopping it)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TrailerOutside_EPressure_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TrailerOutside,
		nullptr,
		"EPressure",
		"EPressure",
		Z_Construct_UEnum_TrailerOutside_EPressure_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_EPressure_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TrailerOutside_EPressure_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_EPressure_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TrailerOutside_EPressure()
	{
		if (!Z_Registration_Info_UEnum_EPressure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPressure.InnerSingleton, Z_Construct_UEnum_TrailerOutside_EPressure_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPressure.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterMovement;
	static UEnum* ECharacterMovement_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovement.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterMovement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TrailerOutside_ECharacterMovement, Z_Construct_UPackage__Script_TrailerOutside(), TEXT("ECharacterMovement"));
		}
		return Z_Registration_Info_UEnum_ECharacterMovement.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UEnum* StaticEnum<ECharacterMovement>()
	{
		return ECharacterMovement_StaticEnum();
	}
	struct Z_Construct_UEnum_TrailerOutside_ECharacterMovement_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TrailerOutside_ECharacterMovement_Statics::Enumerators[] = {
		{ "ECharacterMovement::Walking", (int64)ECharacterMovement::Walking },
		{ "ECharacterMovement::Sprinting", (int64)ECharacterMovement::Sprinting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TrailerOutside_ECharacterMovement_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09State representation of character movement does not currently extend past what information is useful for a playback\n *\x09system that is to control loops of breathing sounds (As the report should justify, the decision to not implement a\n *\x09similar system for footprints was made prior to any programming was done).\n */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "Sprinting.Name", "ECharacterMovement::Sprinting" },
		{ "ToolTip", "State representation of character movement does not currently extend past what information is useful for a playback\nsystem that is to control loops of breathing sounds (As the report should justify, the decision to not implement a\nsimilar system for footprints was made prior to any programming was done)." },
		{ "Walking.Name", "ECharacterMovement::Walking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TrailerOutside_ECharacterMovement_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TrailerOutside,
		nullptr,
		"ECharacterMovement",
		"ECharacterMovement",
		Z_Construct_UEnum_TrailerOutside_ECharacterMovement_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_ECharacterMovement_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TrailerOutside_ECharacterMovement_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TrailerOutside_ECharacterMovement_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TrailerOutside_ECharacterMovement()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterMovement.InnerSingleton, Z_Construct_UEnum_TrailerOutside_ECharacterMovement_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterMovement.InnerSingleton;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter::execMoveAlongLateralAxis)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveAlongLateralAxis(Z_Param_InAxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter::execMoveAlongForwardAxis)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveAlongForwardAxis(Z_Param_InAxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter::execAssessMovementInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAxisValue);
		P_GET_ENUM_REF(EPressure,Z_Param_Out_OutInputPressure);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPressTimeStamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssessMovementInput(Z_Param_InAxisValue,(EPressure&)(Z_Param_Out_OutInputPressure),Z_Param_Out_OutPressTimeStamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter::execGetBreathingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBreathingComponent**)Z_Param__Result=P_THIS->GetBreathingComponent();
		P_NATIVE_END;
	}
	void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
	{
		UClass* Class = AFirstPersonCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssessMovementInput", &AFirstPersonCharacter::execAssessMovementInput },
			{ "GetBreathingComponent", &AFirstPersonCharacter::execGetBreathingComponent },
			{ "MoveAlongForwardAxis", &AFirstPersonCharacter::execMoveAlongForwardAxis },
			{ "MoveAlongLateralAxis", &AFirstPersonCharacter::execMoveAlongLateralAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics
	{
		struct FirstPersonCharacter_eventAssessMovementInput_Parms
		{
			float InAxisValue;
			EPressure OutInputPressure;
			float OutPressTimeStamp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAxisValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutInputPressure_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutInputPressure;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPressTimeStamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_InAxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_InAxisValue = { "InAxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventAssessMovementInput_Parms, InAxisValue), METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_InAxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_InAxisValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_OutInputPressure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_OutInputPressure = { "OutInputPressure", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventAssessMovementInput_Parms, OutInputPressure), Z_Construct_UEnum_TrailerOutside_EPressure, METADATA_PARAMS(nullptr, 0) }; // 1853391808
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_OutPressTimeStamp = { "OutPressTimeStamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventAssessMovementInput_Parms, OutPressTimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_InAxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_OutInputPressure_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_OutInputPressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::NewProp_OutPressTimeStamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09Input along some axis may one in a sequence of two identical (In their axis along a direction) commands. Process\n\x09 *\x09the input, accordingly (Timestamp the ease of a \"Hard\" input, or update the character movement mode upon a\n\x09 *\x09""double \"tap\").\n\x09 *\n\x09 *\x09@param InAxisValue\x09\x09\x09Indicative of the speed and direction at which the player is to move along an axis.\n\x09 *\x09@param OutInputPressure\x09\x09""A binary interpretation of the previous tick's axis scale; key down (\"Hard\") or up\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09(\"Easy\")/analogue stick closer to the boundary (\"Hard\") or rest (\"Easy\").\n\x09 *\x09@param OutPressTimeStamp\x09The game time, in seconds, that a \"Hard\" press was made.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "Input along some axis may one in a sequence of two identical (In their axis along a direction) commands. Process\nthe input, accordingly (Timestamp the ease of a \"Hard\" input, or update the character movement mode upon a\ndouble \"tap\").\n\n@param InAxisValue                      Indicative of the speed and direction at which the player is to move along an axis.\n@param OutInputPressure         A binary interpretation of the previous tick's axis scale; key down (\"Hard\") or up\n                                                        (\"Easy\")/analogue stick closer to the boundary (\"Hard\") or rest (\"Easy\").\n@param OutPressTimeStamp        The game time, in seconds, that a \"Hard\" press was made." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "AssessMovementInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::FirstPersonCharacter_eventAssessMovementInput_Parms), Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics
	{
		struct FirstPersonCharacter_eventGetBreathingComponent_Parms
		{
			UBreathingComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventGetBreathingComponent_Parms, ReturnValue), Z_Construct_UClass_UBreathingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09""A debugging/demonstration tool requires knowledge of the active Breathing system so as to subscribe one of its\n\x09 *\x09methods.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "A debugging/demonstration tool requires knowledge of the active Breathing system so as to subscribe one of its\nmethods." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "GetBreathingComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::FirstPersonCharacter_eventGetBreathingComponent_Parms), Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics
	{
		struct FirstPersonCharacter_eventMoveAlongForwardAxis_Parms
		{
			float InAxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::NewProp_InAxisValue = { "InAxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventMoveAlongForwardAxis_Parms, InAxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::NewProp_InAxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09@param\x09InAxisValue\x09The speed at which the player is to move along the forward axis is scaled according to\n\x09 *\x09\x09\x09\x09\x09\x09""controller input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "@param  InAxisValue     The speed at which the player is to move along the forward axis is scaled according to\n                                        controller input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "MoveAlongForwardAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::FirstPersonCharacter_eventMoveAlongForwardAxis_Parms), Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics
	{
		struct FirstPersonCharacter_eventMoveAlongLateralAxis_Parms
		{
			float InAxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::NewProp_InAxisValue = { "InAxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventMoveAlongLateralAxis_Parms, InAxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::NewProp_InAxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09@param\x09InAxisValue\x09The speed at which the player is to move along the right/lateral axis is scaled according to\n\x09 *\x09\x09\x09\x09\x09\x09""controller input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "@param  InAxisValue     The speed at which the player is to move along the right/lateral axis is scaled according to\n                                        controller input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "MoveAlongLateralAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::FirstPersonCharacter_eventMoveAlongLateralAxis_Parms), Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonCharacter);
	UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPBreathingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BPBreathingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreathingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BreathingComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardPressure_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardPressure_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ForwardPressure;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LateralPressure_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LateralPressure_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LateralPressure;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterMovementMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterMovementMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleTapWindow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DoubleTapWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TrailerOutside,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstPersonCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonCharacter_AssessMovementInput, "AssessMovementInput" }, // 3112691335
		{ &Z_Construct_UFunction_AFirstPersonCharacter_GetBreathingComponent, "GetBreathingComponent" }, // 522408314
		{ &Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongForwardAxis, "MoveAlongForwardAxis" }, // 2647273091
		{ &Z_Construct_UFunction_AFirstPersonCharacter_MoveAlongLateralAxis, "MoveAlongLateralAxis" }, // 2548438137
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09The change of state of player movement is resolved according to axis mappings (Keyboard input, for example).\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "The change of state of player movement is resolved according to axis mappings (Keyboard input, for example)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BPBreathingComponent_MetaData[] = {
		{ "Category", "BlueprintComponents" },
		{ "Comment", "/**\n\x09 *\x09""A reusable, abstract (A component that does not require any physical representation) behaviour that is an\n\x09 *\x09""essential component of character movement (Interprets movement mode changes through the state of its \"Breathing\"\n\x09 *\x09system of audio loops).\n\x09 */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "A reusable, abstract (A component that does not require any physical representation) behaviour that is an\nessential component of character movement (Interprets movement mode changes through the state of its \"Breathing\"\nsystem of audio loops)." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BPBreathingComponent = { "BPBreathingComponent", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, BPBreathingComponent), Z_Construct_UClass_UBreathingComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BPBreathingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BPBreathingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BreathingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BreathingComponent = { "BreathingComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, BreathingComponent), Z_Construct_UClass_UBreathingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BreathingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BreathingComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ForwardPressure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ForwardPressure_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09""For input to qualify as \"Hard\" (For it to register as a complete input) its scale must escape the default,\n\x09 *\x09\"Easy.\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "For input to qualify as \"Hard\" (For it to register as a complete input) its scale must escape the default,\n\"Easy.\"" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ForwardPressure = { "ForwardPressure", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, ForwardPressure), Z_Construct_UEnum_TrailerOutside_EPressure, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ForwardPressure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ForwardPressure_MetaData)) }; // 1853391808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LateralPressure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LateralPressure_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LateralPressure = { "LateralPressure", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, LateralPressure), Z_Construct_UEnum_TrailerOutside_EPressure, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LateralPressure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LateralPressure_MetaData)) }; // 1853391808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_CharacterMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_CharacterMovementMode_MetaData[] = {
		{ "Comment", "/** The character movement mode defaults to \"Walking.\" */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "The character movement mode defaults to \"Walking.\"" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_CharacterMovementMode = { "CharacterMovementMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, CharacterMovementMode), Z_Construct_UEnum_TrailerOutside_ECharacterMovement, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_CharacterMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_CharacterMovementMode_MetaData)) }; // 3212392268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DoubleTapWindow_MetaData[] = {
		{ "Category", "InputResponsiveness" },
		{ "Comment", "/**\n\x09 *\x09The period of time in which a player must follow up an initial movement of the character with a second,\n\x09 *\x09identical movement command, for their input to be considered a double \"tap\" (The tapping of the physical\n\x09 *\x09""boundary of a key down, or a gamepad analogue stick's pivot).\n\x09 */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "The period of time in which a player must follow up an initial movement of the character with a second,\nidentical movement command, for their input to be considered a double \"tap\" (The tapping of the physical\nboundary of a key down, or a gamepad analogue stick's pivot)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DoubleTapWindow = { "DoubleTapWindow", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, DoubleTapWindow), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DoubleTapWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DoubleTapWindow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "/**\n\x09 *\x09The value that the character movement component's maximum walk speed is to be changed in the case that the\n\x09 *\x09""character is sprinting.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "The value that the character movement component's maximum walk speed is to be changed in the case that the\ncharacter is sprinting." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "/**\n\x09 *\x09The value that the character movement component's maximum walk speed is to be set to by default, and in the case\n\x09 *\x09that the character stops sprinting.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "The value that the character movement component's maximum walk speed is to be set to by default, and in the case\nthat the character stops sprinting." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BPBreathingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_BreathingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ForwardPressure_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ForwardPressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LateralPressure_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LateralPressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_CharacterMovementMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_CharacterMovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DoubleTapWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams = {
		&AFirstPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonCharacter()
	{
		if (!Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton, Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton;
	}
	template<> TRAILEROUTSIDE_API UClass* StaticClass<AFirstPersonCharacter>()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter);
	struct Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_Statics::EnumInfo[] = {
		{ EPressure_StaticEnum, TEXT("EPressure"), &Z_Registration_Info_UEnum_EPressure, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1853391808U) },
		{ ECharacterMovement_StaticEnum, TEXT("ECharacterMovement"), &Z_Registration_Info_UEnum_ECharacterMovement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3212392268U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonCharacter, AFirstPersonCharacter::StaticClass, TEXT("AFirstPersonCharacter"), &Z_Registration_Info_UClass_AFirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonCharacter), 68472824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_1241720292(TEXT("/Script/TrailerOutside"),
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
