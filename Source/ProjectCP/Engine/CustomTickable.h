#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"
#include "CustomTickable.generated.h"

class PROJECTCP_API FCustomTickable : public FTickableGameObject
{
public:
	void SetTickable(bool bTickable);

	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override;
	virtual TStatId GetStatId() const override;
	virtual bool IsTickableInEditor() const override;
	virtual bool IsTickable() const override;

private:
	bool bIsTickable = true;
};

UCLASS()
class PROJECTCP_API UCustomTickableObject : public UObject, public FCustomTickable
{
	GENERATED_BODY()

public:
	virtual ETickableTickType GetTickableTickType() const override;
};
