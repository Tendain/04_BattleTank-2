// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "TankAIController.generated.h"
// forward declarations
class ATank;
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	

private:
	virtual void BeginPlay() override;
	//ATank* GetControlledTank() const;
	//ATank* GetPlayerTank() const;

	//how close the ai tank can get to player
	float AcceptanceRadius = 50;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
