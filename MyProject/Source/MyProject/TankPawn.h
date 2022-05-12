// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "TankPawn.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ATankPawn : public ABasePawn
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float Speed = 200.0f;
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float TurnRate = 90.0f;

	APlayerController* TankPlayerController;

	void Move(float Value);
	void Turn(float Value);

protected:
	virtual void BeginPlay() override;

public:
	ATankPawn();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void HandleDestruction();

	bool bAlive = true;
	
};
