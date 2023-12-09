// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRAILEROUTSIDE_OutsideLevelScriptActor_generated_h
#error "OutsideLevelScriptActor.generated.h already included, missing '#pragma once' in OutsideLevelScriptActor.h"
#endif
#define TRAILEROUTSIDE_OutsideLevelScriptActor_generated_h

#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_13_DELEGATE \
struct _Script_TrailerOutside_eventOnActiveSystemToggleSignature_Parms \
{ \
	bool bInEnableSystem; \
}; \
static inline void FOnActiveSystemToggleSignature_DelegateWrapper(const FScriptDelegate& OnActiveSystemToggleSignature, bool bInEnableSystem) \
{ \
	_Script_TrailerOutside_eventOnActiveSystemToggleSignature_Parms Parms; \
	Parms.bInEnableSystem=bInEnableSystem ? true : false; \
	OnActiveSystemToggleSignature.ProcessDelegate<UObject>(&Parms); \
}


#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_SPARSE_DATA
#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchActiveSystem); \
	DECLARE_FUNCTION(execEnableSystemByIndex);


#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchActiveSystem); \
	DECLARE_FUNCTION(execEnableSystemByIndex);


#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOutsideLevelScriptActor(); \
	friend struct Z_Construct_UClass_AOutsideLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(AOutsideLevelScriptActor, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrailerOutside"), NO_API) \
	DECLARE_SERIALIZER(AOutsideLevelScriptActor)


#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAOutsideLevelScriptActor(); \
	friend struct Z_Construct_UClass_AOutsideLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(AOutsideLevelScriptActor, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrailerOutside"), NO_API) \
	DECLARE_SERIALIZER(AOutsideLevelScriptActor)


#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOutsideLevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOutsideLevelScriptActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOutsideLevelScriptActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOutsideLevelScriptActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOutsideLevelScriptActor(AOutsideLevelScriptActor&&); \
	NO_API AOutsideLevelScriptActor(const AOutsideLevelScriptActor&); \
public:


#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOutsideLevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOutsideLevelScriptActor(AOutsideLevelScriptActor&&); \
	NO_API AOutsideLevelScriptActor(const AOutsideLevelScriptActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOutsideLevelScriptActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOutsideLevelScriptActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOutsideLevelScriptActor)


#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_37_PROLOG
#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_SPARSE_DATA \
	FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_RPC_WRAPPERS \
	FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_INCLASS \
	FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_SPARSE_DATA \
	FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_INCLASS_NO_PURE_DECLS \
	FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRAILEROUTSIDE_API UClass* StaticClass<class AOutsideLevelScriptActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TrailerOutside_Source_TrailerOutside_Public_OutsideLevelScriptActor_h


#define FOREACH_ENUM_ESOUNDMANAGEMENTSYSTEM(op) \
	op(ESoundManagementSystem::All) \
	op(ESoundManagementSystem::Breathing) \
	op(ESoundManagementSystem::AreaLocalisation) \
	op(ESoundManagementSystem::Count) 

enum class ESoundManagementSystem : uint8;
template<> TRAILEROUTSIDE_API UEnum* StaticEnum<ESoundManagementSystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
