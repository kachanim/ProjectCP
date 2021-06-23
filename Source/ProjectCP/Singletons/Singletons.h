// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Singletons.generated.h"

UCLASS()
class PROJECTCP_API USingletons : public UObject
{
	GENERATED_BODY()

public:
	void InitSingletons();

private:
	static TWeakObjectPtr<USingletons> Inst;
};
