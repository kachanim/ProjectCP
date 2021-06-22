// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectCPGameMode.h"
#include "ProjectCPPlayerController.h"
#include "ProjectCPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectCPGameMode::AProjectCPGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectCPPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}