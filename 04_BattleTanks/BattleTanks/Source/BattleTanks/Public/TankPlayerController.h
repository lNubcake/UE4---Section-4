// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:

	virtual void Tick(float DeltaTime) override;

	ATank* GetControlledTank() const;

	// Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	// Start the tank moving the barrel so that a shot would hit where
	// the crosshair intesects the world
	void AimTowardsCrosshair();
	
	virtual void BeginPlay() override;
};
