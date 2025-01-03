// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseLibrary/BaseGameplayTag.h"


namespace BaseGamePlayTag
{
	//Input Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Run, "InputTag.Run");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Jump, "InputTag.Jump");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Roll, "InputTag.Roll");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Attack, "InputTag.Attack");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Crouch, "InputTag.Crouch");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_WeaponSwap_Up, "InputTag.WeaponSwap.Up");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_WeaponSwap_Down, "InputTag.WeaponSwap.Down");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Flying_Up, "InputTag.Flying.Up");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Flying_Down, "InputTag.Flying.Down");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Flying_Move, "InputTag.Flying.Move");


    // Input Build Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Build, "InputTag.Build");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_BuildMenu, "InputTag.BuildMenu");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PlaceBuild, "InputTag.PlaceBuild");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_ContinuousBuild, "InputTag.ContinuousBuild");

	// Input Craft Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Craft, "InputTag.Craft");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PlaceCraft, "InputTag.PlaceCraft");

	//Inventory Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Interact, "InputTag.Interact");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Inventory, "InputTag.Inventory");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_RotateMesh, "InputTag.RotateMesh");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_OppositeRotateMesh, "InputTag.OppositeRotateMesh");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Destroy, "InputTag.Destroy");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PalInteract, "InputTag.PalInteract");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PalInOut, "InputTag.PalInOut");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PalSwapUp, "InputTag.PalSwapUp");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PalSwapDown, "InputTag.PalSwapDown");
	
	
	UE_DEFINE_GAMEPLAY_TAG(InputTag_MeleeAttack, "InputTag.MeleeAttack");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_ReadyToThrow, "InputTag.ReadyToThrow");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_ThrowAction, "InputTag.ThrowAction");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Aim, "InputTag.Aim");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_ShootingArrow, "InputTag.ShootingArrow");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Gliding, "InputTag.Gliding");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_ShootingHandgun, "InputTag.ShootingHandgun");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Aim_Shooting, "InputTag.Aim.Shooting");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Test, "InputTag.Test");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Reload, "InputTag.Reload");




	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Run, "Player.Ability.Run");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Jump, "Player.Ability.Jump");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Roll, "Player.Ability.Roll");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack, "Player.Ability.Attack");


	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_PalSphere, "Player.Ability.Equip.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unquip_PalSphere, "Player.Ability.Unquip.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_ReadyToThrow_PalSphere, "Player.Ability.ReadyToThrow.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_ThrowAction_PalSphere, "Player.Ability.ThrowAction.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Aim, "Player.Ability.Aim");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_ShootingHandgun, "Player.Ability.ShootingHandgun");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_ReadyToFlying, "Player.Ability.ReadyToFlying");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_AttachToFlying, "Player.Ability.AttachToFlying");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_DettachToFlying, "Player.Ability.DettachToFlying");

	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_MeleeAttack, "Player.Ability.MeleeAttack");


	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe, "Player.Weapon.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_PalSphere, "Player.Weapon.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Bow, "Player.Weapon.Bow");

	UE_DEFINE_GAMEPLAY_TAG(Player_Event_ShootingTime, "Player.Event.ShootingTime");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Death, "Player.Event.Death");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equipment_Throw, "Player.Event.Equipment.Throw");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_CoolTime_ShootingBow, "Player.Event.CoolTime.ShootingBow");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_CoolTime_Gliding, "Player.Event.CoolTime.Gliding");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_PalSpawn, "Player.Event.PalSpawn");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_StaminaEmpty, "Player.Event.StaminaEmpty");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_WeightOver, "Player.Event.WeightOver");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Event_HitReact, "Shared.Event.HitReact");


	//	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_ShootingTime);

	//Pal Tags
	UE_DEFINE_GAMEPLAY_TAG(Pal_Ability_Attack, "Pal.Ability.Attack");
	UE_DEFINE_GAMEPLAY_TAG(Pal_Ability_Skill, "Pal.Ability.Skill");

	UE_DEFINE_GAMEPLAY_TAG(Pal_Event_Tracking, "Pal.Event.Tracking");
	UE_DEFINE_GAMEPLAY_TAG(Pal_Event_Encount, "Pal.Event.Encount");
	UE_DEFINE_GAMEPLAY_TAG(Pal_Event_Death, "Pal.Event.Death");
	UE_DEFINE_GAMEPLAY_TAG(Pal_Event_Rest, "Pal.Event.Rest");
	UE_DEFINE_GAMEPLAY_TAG(Pal_Event_Sleep, "Pal.Event.Sleep");
	UE_DEFINE_GAMEPLAY_TAG(Pal_Event_Awake, "Pal.Event.Awake");
}
