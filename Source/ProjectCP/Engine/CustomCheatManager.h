// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/CheatManager.h"
#include "CustomCheatManager.generated.h"


UCLASS(Blueprintable)
class PROJECTCP_API UCustomCheatManager : public UCheatManager
{
	GENERATED_BODY()

private:
	UFUNCTION(Exec, BlueprintCallable)
	void CheatTest();
};

