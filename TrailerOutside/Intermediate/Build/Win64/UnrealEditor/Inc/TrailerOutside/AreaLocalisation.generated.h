// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFirstPersonCharacter;
#ifdef TRAILEROUTSIDE_AreaLocalisation_generated_h
#error "AreaLocalisation.generated.h already included, missing '#pragma once' in AreaLocalisation.h"
#endif
#define TRAILEROUTSIDE_AreaLocalisation_generated_h

#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_SPARSE_DATA
#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleAbsorption); \
	DECLARE_FUNCTION(execAssignListener);


#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAbsorption); \
	DECLARE_FUNCTION(execAssignListener);


#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAreaLocalisation(); \
	friend struct Z_Construct_UClass_AAreaLocalisation_Statics; \
public: \
	DECLARE_CLASS(AAreaLocalisation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrailerOutside"), NO_API) \
	DECLARE_SERIALIZER(AAreaLocalisation)


#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_INCLASS \
private: \
	static void StaticRegisterNativesAAreaLocalisation(); \
	friend struct Z_Construct_UClass_AAreaLocalisation_Statics; \
public: \
	DECLARE_CLASS(AAreaLocalisation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrailerOutside"), NO_API) \
	DECLARE_SERIALIZER(AAreaLocalisation)


#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAreaLocalisation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAreaLocalisation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAreaLocalisation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAreaLocalisation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAreaLocalisation(AAreaLocalisation&&); \
	NO_API AAreaLocalisation(const AAreaLocalisation&); \
public:


#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAreaLocalisation(AAreaLocalisation&&); \
	NO_API AAreaLocalisation(const AAreaLocalisation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAreaLocalisation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAreaLocalisation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAreaLocalisation)


#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_29_PROLOG
#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_SPARSE_DATA \
	FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_RPC_WRAPPERS \
	FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_INCLASS \
	FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_SPARSE_DATA \
	FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_INCLASS_NO_PURE_DECLS \
	FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRAILEROUTSIDE_API UClass* StaticClass<class AAreaLocalisation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TrailerOutside_Source_TrailerOutside_Public_AreaLocalisation_h


#define FOREACH_ENUM_EOCCLUSION(op) \
	op(EOcclusion::Occluded) \
	op(EOcclusion::Free) 

enum class EOcclusion : uint8;
template<> TRAILEROUTSIDE_API UEnum* StaticEnum<EOcclusion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
