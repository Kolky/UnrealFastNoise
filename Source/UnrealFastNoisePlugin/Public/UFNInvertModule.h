#pragma once

#include "UFNNoiseGenerator.h"
#include "CoreMinimal.h"
#include "UFNInvertModule.generated.h"

UCLASS()
class UUFNInvertModule : public UUFNNoiseGenerator
{
	GENERATED_UCLASS_BODY()
public:

	float GetNoise3D(float aX, float aY, float aZ) override;
	float GetNoise2D(float aX, float aY) override;
	UPROPERTY()
	UUFNNoiseGenerator* inputModule;
};