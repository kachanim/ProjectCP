// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomHUD.h"
#include "Engine/Engine.h"
#include "Engine/Canvas.h"

ACustomHUD::ACustomHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void ACustomHUD::BeginPlay()
{
	Super::BeginPlay();

#if !UE_BUILD_SHIPPING
	bShowHUD = true;
#endif

}

void ACustomHUD::DrawHUD()
{
	if (GEngine == nullptr || GEngine->GameViewport == nullptr || Canvas == nullptr || Canvas->Canvas == nullptr || GetWorld() == nullptr)
	{
		return;
	}

	Super::DrawHUD();
}
