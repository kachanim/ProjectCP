// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/HUD.h"
#include "CustomHUD.generated.h"

UCLASS()
class ACustomHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void DrawHUD() override;
};
