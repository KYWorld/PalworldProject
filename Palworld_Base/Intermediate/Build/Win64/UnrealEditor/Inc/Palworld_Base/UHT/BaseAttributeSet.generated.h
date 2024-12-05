// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/BaseAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PALWORLD_BASE_BaseAttributeSet_generated_h
#error "BaseAttributeSet.generated.h already included, missing '#pragma once' in BaseAttributeSet.h"
#endif
#define PALWORLD_BASE_BaseAttributeSet_generated_h

#define FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAttributeSet(); \
	friend struct Z_Construct_UClass_UBaseAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UBaseAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Palworld_Base"), NO_API) \
	DECLARE_SERIALIZER(UBaseAttributeSet)


#define FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseAttributeSet(UBaseAttributeSet&&); \
	UBaseAttributeSet(const UBaseAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAttributeSet) \
	NO_API virtual ~UBaseAttributeSet();


#define FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_12_PROLOG
#define FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PALWORLD_BASE_API UClass* StaticClass<class UBaseAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
