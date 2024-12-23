// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/BasePlayerController.h"

ABasePlayerController::ABasePlayerController()
{
    PlayerTeamId = FGenericTeamId(0);
}

FGenericTeamId ABasePlayerController::GetGenericTeamId() const
{
    return PlayerTeamId;
}
