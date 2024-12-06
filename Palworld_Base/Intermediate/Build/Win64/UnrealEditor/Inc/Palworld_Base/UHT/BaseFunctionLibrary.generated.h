// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseLibrary/BaseFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPawnEquipmentComponent;
enum class EBaseConfirmType : uint8;
enum class EBaseValidType : uint8;
struct FGameplayTag;
#ifdef PALWORLD_BASE_BaseFunctionLibrary_generated_h
#error "BaseFunctionLibrary.generated.h already included, missing '#pragma once' in BaseFunctionLibrary.h"
#endif
#define PALWORLD_BASE_BaseFunctionLibrary_generated_h

#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetUPawnEquipmentComponentFromActor); \
	DECLARE_FUNCTION(execBP_HasTag); \
	DECLARE_FUNCTION(execRemovePlaygameTagFromActor); \
	DECLARE_FUNCTION(execAddPlaygameTagToActor);


#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBaseFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBaseFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Palworld_Base"), NO_API) \
	DECLARE_SERIALIZER(UBaseFunctionLibrary)


#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseFunctionLibrary(UBaseFunctionLibrary&&); \
	UBaseFunctionLibrary(const UBaseFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseFunctionLibrary) \
	NO_API virtual ~UBaseFunctionLibrary();


#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_17_PROLOG
#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PALWORLD_BASE_API UClass* StaticClass<class UBaseFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
