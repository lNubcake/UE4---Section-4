// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "BattleTanks.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if(!ControlledTank){
		UE_LOG(LogTemp,Error,TEXT("Not possesing a tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s is posessed"), *(GetControlledTank()->GetName()));
	}
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


