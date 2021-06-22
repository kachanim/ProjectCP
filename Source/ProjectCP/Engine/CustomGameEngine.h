// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine/GameEngine.h"
#include "CustomGameEngine.generated.h"

UCLASS(config = Engine, transient)
class PROJECTCP_API UCustomGameEngine : public UGameEngine
{
public:
	GENERATED_BODY()

	virtual void Init(IEngineLoop* InEngineLoop) override;
	virtual void PreExit() override;
};
