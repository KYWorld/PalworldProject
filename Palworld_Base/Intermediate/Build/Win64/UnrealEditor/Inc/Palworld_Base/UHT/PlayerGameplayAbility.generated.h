// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Ability/PlayerGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABasePlayerController;
class APlayerCharacter;
#ifdef PALWORLD_BASE_PlayerGameplayAbility_generated_h
#error "PlayerGameplayAbility.generated.h already included, missing '#pragma once' in PlayerGameplayAbility.h"
#endif
#define PALWORLD_BASE_PlayerGameplayAbility_generated_h

#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetPlayerCharacterFromActorInfo);


#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerGameplayAbility(); \
	friend struct Z_Construct_UClass_UPlayerGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UPlayerGameplayAbility, UBaseGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Palworld_Base"), NO_API) \
	DECLARE_SERIALIZER(UPlayerGameplayAbility)


#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerGameplayAbility(UPlayerGameplayAbility&&); \
	UPlayerGameplayAbility(const UPlayerGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerGameplayAbility) \
	NO_API virtual ~UPlayerGameplayAbility();


#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_15_PROLOG
#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PALWORLD_BASE_API UClass* StaticClass<class UPlayerGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
