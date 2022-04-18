// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerTankController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API APlayerTankController : public APlayerController
{
	GENERATED_BODY()
		
private:
	ATank* GetControlledTank() const;

	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	// Start Prisel
	void AimTowardsCrosshair();

	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = 0.3333;

	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreeLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};
