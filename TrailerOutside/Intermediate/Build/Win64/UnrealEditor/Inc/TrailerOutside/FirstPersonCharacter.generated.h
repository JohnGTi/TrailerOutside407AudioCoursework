// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPressure : uint8;
enum class ECharacterMovement : uint8;
#ifdef TRAILEROUTSIDE_FirstPersonCharacter_generated_h
#error "FirstPersonCharacter.generated.h already included, missing '#pragma once' in FirstPersonCharacter.h"
#endif
#define TRAILEROUTSIDE_FirstPersonCharacter_generated_h

#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_SPARSE_DATA
#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssessMovementInput); \
	DECLARE_FUNCTION(execUpdateCharacterMovement);


#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssessMovementInput); \
	DECLARE_FUNCTION(execUpdateCharacterMovement);


#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrailerOutside"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrailerOutside"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public:


#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonCharacter)


#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_39_PROLOG
#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_SPARSE_DATA \
	FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_RPC_WRAPPERS \
	FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_INCLASS \
	FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_SPARSE_DATA \
	FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_INCLASS_NO_PURE_DECLS \
	FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRAILEROUTSIDE_API UClass* StaticClass<class AFirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TrailerOutside_Source_TrailerOutside_Public_FirstPersonCharacter_h


#define FOREACH_ENUM_EPRESSURE(op) \
	op(EPressure::Easy) \
	op(EPressure::Hard) 

enum class EPressure : uint8;
template<> TRAILEROUTSIDE_API UEnum* StaticEnum<EPressure>();

#define FOREACH_ENUM_ECHARACTERMOVEMENT(op) \
	op(ECharacterMovement::Walking) \
	op(ECharacterMovement::Sprinting) 

enum class ECharacterMovement : uint8;
template<> TRAILEROUTSIDE_API UEnum* StaticEnum<ECharacterMovement>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
