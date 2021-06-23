#include "CustomTickable.h"

void FCustomTickable::Tick(float DeltaTime)
{
}

ETickableTickType FCustomTickable::GetTickableTickType() const
{
	return ETickableTickType::Conditional;
}

TStatId FCustomTickable::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(FCustomTickable, STATGROUP_Tickables);
}

bool FCustomTickable::IsTickableInEditor() const
{
	return bIsTickable;
}

bool FCustomTickable::IsTickable() const
{
	return bIsTickable;
}

void FCustomTickable::SetTickable(bool bTickable)
{
	bIsTickable = bTickable;
}

ETickableTickType UCustomTickableObject::GetTickableTickType() const
{
	return HasAnyFlags(RF_ClassDefaultObject) ? ETickableTickType::Never : ETickableTickType::Conditional;
}
