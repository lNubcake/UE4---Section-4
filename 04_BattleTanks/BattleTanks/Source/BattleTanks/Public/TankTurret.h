// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANKS_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
public:

	void Rotate(float YawRotationSpeed);

private:
	UPROPERTY(EditAnywhere, Category = "Setup")
		float MaxDegreesPerSecond = 20; // TODO find sensible default	
};
