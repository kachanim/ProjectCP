// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomGameInstance.h"
#include "ProjectCP.h"
#include "HAL/PlatformApplicationMisc.h"


DECLARE_CYCLE_STAT(TEXT("CustomGameInstance"), STAT_UpdateCustomGameInstance, STATGROUP_ProjectCP);


UCustomGameInstance::UCustomGameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UCustomGameInstance::Init()
{
	Super::Init();

	if (FPlatformProperties::RequiresCookedData())
	{
		GShouldVerifyGCAssumptions = false;
	}
	
	// Register delegate for ticker callback
	TickDelegate = FTickerDelegate::CreateUObject(this, &UCustomGameInstance::Tick);
	TickDelegateHandle = FTicker::GetCoreTicker().AddTicker(TickDelegate);
}

void UCustomGameInstance::OnStart()
{
	FTimerHandle TimerHandle;
	GetTimerManager().SetTimer(TimerHandle, this, &UCustomGameInstance::DisableScreensaver, 1.f, false);
}

void UCustomGameInstance::Shutdown()
{
    Super::Shutdown();

	FTicker::GetCoreTicker().RemoveTicker(TickDelegateHandle);
}

bool UCustomGameInstance::Tick(float DeltaSeconds)
{
	SCOPE_CYCLE_COUNTER(STAT_UpdateCustomGameInstance);

	return true;
}

void UCustomGameInstance::DisableScreensaver()
{
	FPlatformApplicationMisc::ControlScreensaver(FPlatformApplicationMisc::EScreenSaverAction::Disable);
}
