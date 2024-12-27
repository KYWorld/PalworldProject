// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/BasePlayerController.h"

#include "Kismet/GameplayStatics.h"

#include "Widget/MiniMapWidget.h"

ABasePlayerController::ABasePlayerController()
{
    PlayerTeamId = FGenericTeamId(0);
}

void ABasePlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (W_MiniMap != nullptr)
    {
        MiniMap = CreateWidget<UMiniMapWidget>(this, W_MiniMap);
        MiniMap->AddToViewport();
    }

}

FGenericTeamId ABasePlayerController::GetGenericTeamId() const
{
    return PlayerTeamId;
}
