// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFirstPersonCharacter;
enum class ECharacterMovement : uint8;
enum class EPhysicalEffort : uint8;
#ifdef TRAILEROUTSIDE_BreathingComponent_generated_h
#error "BreathingComponent.generated.h already included, missing '#pragma once' in BreathingComponent.h"
#endif
#define TRAILEROUTSIDE_BreathingComponent_generated_h

#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_SPARSE_DATA
#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateCharacterMovement); \
	DECLARE_FUNCTION(execBreathingSystemToggle); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execControlCharacterBreathing); \
	DECLARE_FUNCTION(execSetPhysicalEffort); \
	DECLARE_FUNCTION(execEnterRecovery); \
	DECLARE_FUNCTION(execInitialiseBreathingPattern); \
	DECLARE_FUNCTION(execGetVolumeMultiplier);


#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateCharacterMovement); \
	DECLARE_FUNCTION(execBreathingSystemToggle); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execControlCharacterBreathing); \
	DECLARE_FUNCTION(execSetPhysicalEffort); \
	DECLARE_FUNCTION(execEnterRecovery); \
	DECLARE_FUNCTION(execInitialiseBreathingPattern); \
	DECLARE_FUNCTION(execGetVolumeMultiplier);


#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBreathingComponent(); \
	friend struct Z_Construct_UClass_UBreathingComponent_Statics; \
public: \
	DECLARE_CLASS(UBreathingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrailerOutside"), NO_API) \
	DECLARE_SERIALIZER(UBreathingComponent)


#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUBreathingComponent(); \
	friend struct Z_Construct_UClass_UBreathingComponent_Statics; \
public: \
	DECLARE_CLASS(UBreathingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrailerOutside"), NO_API) \
	DECLARE_SERIALIZER(UBreathingComponent)


#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBreathingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBreathingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBreathingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBreathingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBreathingComponent(UBreathingComponent&&); \
	NO_API UBreathingComponent(const UBreathingComponent&); \
public:


#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBreathingComponent(UBreathingComponent&&); \
	NO_API UBreathingComponent(const UBreathingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBreathingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBreathingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBreathingComponent)


#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_33_PROLOG
#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_SPARSE_DATA \
	FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_RPC_WRAPPERS \
	FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_INCLASS \
	FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_SPARSE_DATA \
	FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRAILEROUTSIDE_API UClass* StaticClass<class UBreathingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TrailerOutside_Source_TrailerOutside_Public_BreathingComponent_h


#define FOREACH_ENUM_EPHYSICALEFFORT(op) \
	op(EPhysicalEffort::Regular) \
	op(EPhysicalEffort::Heavy) \
	op(EPhysicalEffort::Recovery) \
	op(EPhysicalEffort::Faint) 

enum class EPhysicalEffort : uint8;
template<> TRAILEROUTSIDE_API UEnum* StaticEnum<EPhysicalEffort>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
