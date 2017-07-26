// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"

void UTankTurret::Rotate(float YawRotationSpeed)
{
	YawRotationSpeed = FMath::Clamp<float>(YawRotationSpeed, -1, +1);

	auto YawChange = YawRotationSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto Yaw = RelativeRotation.Yaw + YawChange;

	SetRelativeRotation(FRotator(0, Yaw, 0));
}


