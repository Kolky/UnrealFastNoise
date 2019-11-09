#include "UFNInvertModule.h"
#include "UFNNoiseGenerator.h"


UUFNInvertModule::UUFNInvertModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

float UUFNInvertModule::GetNoise3D(float aX, float aY, float aZ)
{
	return -(inputModule->GetNoise3D(aX, aY, aZ));

}

float UUFNInvertModule::GetNoise2D(float aX, float aY)
{
	return GetNoise3D(aX, aY, 0.0f);
}

