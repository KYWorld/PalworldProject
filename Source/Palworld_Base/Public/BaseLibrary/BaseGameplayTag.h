// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"

namespace BaseGamePlayTag
{
	//Input Tags
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Run);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Jump);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Roll);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Attack);
<<<<<<< Updated upstream
=======



	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Interact);


>>>>>>> Stashed changes
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Equip);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Unequip);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_MeleeAttack);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_ReadyToThrow);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_ThrowAction);

	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Run);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Jump);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Roll);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unquip_Axe);

	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_PalSphere);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unquip_PalSphere);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_ReadyToThrow_PalSphere);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_ThrowAction_PalSphere);

	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_MeleeAttack);



	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_PalSphere);

	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equipment_Equip);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equipment_Unquip);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equipment_Throw);

}
