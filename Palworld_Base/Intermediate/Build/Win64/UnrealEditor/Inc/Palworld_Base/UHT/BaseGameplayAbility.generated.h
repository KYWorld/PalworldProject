// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Ability/BaseGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBaseAbilitySystemComponent;
class UPawnEquipmentComponent;
enum class EBaseSuccessType : uint8;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
#ifdef PALWORLD_BASE_BaseGameplayAbility_generated_h
#error "BaseGameplayAbility.generated.h already included, missing '#pragma once' in BaseGameplayAbility.h"
#endif
#define PALWORLD_BASE_BaseGameplayAbility_generated_h

#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_ApplyEffectSpecHandleToTarget); \
	DECLARE_FUNCTION(execGetBaseAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetPawnEquipmentComponentFromActorInfo);


#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGameplayAbility(); \
	friend struct Z_Construct_UClass_UBaseGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UBaseGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Palworld_Base"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameplayAbility)


#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseGameplayAbility(UBaseGameplayAbility&&); \
	UBaseGameplayAbility(const UBaseGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameplayAbility) \
	NO_API virtual ~UBaseGameplayAbility();


#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_23_PROLOG
#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PALWORLD_BASE_API UClass* StaticClass<class UBaseGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h


#define FOREACH_ENUM_EBASEABILITYACTIVATIONPOLCY(op) \
	op(EBaseAbilityActivationPolcy::OnTriggered) \
	op(EBaseAbilityActivationPolcy::OnGiven) 

enum class EBaseAbilityActivationPolcy : uint8;
template<> struct TIsUEnumClass<EBaseAbilityActivationPolcy> { enum { Value = true }; };
template<> PALWORLD_BASE_API UEnum* StaticEnum<EBaseAbilityActivationPolcy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
