// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/BasePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PALWORLD_BASE_BasePlayerController_generated_h
#error "BasePlayerController.generated.h already included, missing '#pragma once' in BasePlayerController.h"
#endif
#define PALWORLD_BASE_BasePlayerController_generated_h

#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Controller_BasePlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerController(); \
	friend struct Z_Construct_UClass_ABasePlayerController_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Palworld_Base"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerController)


#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Controller_BasePlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABasePlayerController(ABasePlayerController&&); \
	ABasePlayerController(const ABasePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerController) \
	NO_API virtual ~ABasePlayerController();


#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Controller_BasePlayerController_h_12_PROLOG
#define FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Controller_BasePlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Controller_BasePlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Controller_BasePlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PALWORLD_BASE_API UClass* StaticClass<class ABasePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Controller_BasePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
