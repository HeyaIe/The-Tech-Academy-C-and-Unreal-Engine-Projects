// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Maze.generated.h"

UCLASS()
class MYPROJECT_API AMaze : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMaze();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UStaticMeshComponent* Maze;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float TurnSpeed = 1.5f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MaxRotation = 10.f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MinRotation = -10.f;

	void TiltRight(float Value);
	void TiltForward(float Value);
	

};
