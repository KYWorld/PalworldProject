// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/Equipment/PawnEquipmentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEquipmentBase;
enum class EToggleDamageType : uint8;
struct FGameplayTag;
#ifdef PALWORLD_BASE_PawnEquipmentComponent_generated_h
#error "PawnEquipmentComponent.generated.h already included, missing '#pragma once' in PawnEquipmentComponent.h"
#endif
#define PALWORLD_BASE_PawnEquipmentComponent_generated_h

#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleEquipmentCollsion); \
	DECLARE_FUNCTION(execGetCharacterCurrentEquippedEquipment); \
	DECLARE_FUNCTION(execGetCharacterCarriedEquipmentByTag); \
	DECLARE_FUNCTION(execRegisterSpawnedEquipment);


#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnEquipmentComponent(); \
	friend struct Z_Construct_UClass_UPawnEquipmentComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnEquipmentComponent, UPawnExtensionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Palworld_Base"), NO_API) \
	DECLARE_SERIALIZER(UPawnEquipmentComponent)


#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnEquipmentComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnEquipmentComponent(UPawnEquipmentComponent&&); \
	UPawnEquipmentComponent(const UPawnEquipmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnEquipmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnEquipmentComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnEquipmentComponent) \
	NO_API virtual ~UPawnEquipmentComponent();


#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_22_PROLOG
#define FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PALWORLD_BASE_API UClass* StaticClass<class UPawnEquipmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h


#define FOREACH_ENUM_ETOGGLEDAMAGETYPE(op) \
	op(EToggleDamageType::CurrentEquippedEquipment) \
	op(EToggleDamageType::LeftHand) \
	op(EToggleDamageType::RightHand) 

enum class EToggleDamageType : uint8;
template<> struct TIsUEnumClass<EToggleDamageType> { enum { Value = true }; };
template<> PALWORLD_BASE_API UEnum* StaticEnum<EToggleDamageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
