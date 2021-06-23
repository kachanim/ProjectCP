// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CustomTickable.h"
#include "SingletonObject.generated.h"

UCLASS()
class PROJECTCP_API USingletonObject : public UCustomTickableObject
{
	GENERATED_BODY()

public:
	USingletonObject();

	virtual void InitSingletonObject();
};