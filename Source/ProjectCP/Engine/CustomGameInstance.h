// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine/GameInstance.h"
#include "Containers/Ticker.h"
#include "CustomGameInstance.generated.h"


UCLASS(config = Game)
class PROJECTCP_API UCustomGameInstance : public UGameInstance
{
	GENERATED_UCLASS_BODY()

public:
	virtual void Init() override;
	virtual void Shutdown() override;
	virtual void OnStart() override;

public:
	bool Tick(float DeltaSeconds);

private:
	void DisableScreensaver();

private:
	FTickerDelegate TickDelegate;
	FDelegateHandle TickDelegateHandle;
};
