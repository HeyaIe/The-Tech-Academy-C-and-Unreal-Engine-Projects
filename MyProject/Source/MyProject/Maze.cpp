// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "Maze.h"

// Sets default values
AMaze::AMaze()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMaze::BeginPlay()
{
	Super::BeginPlay();

	Maze = this->FindComponentByClass<UStaticMeshComponent>();
	
}

// Called every frame
void AMaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMaze::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("TiltForward"), this, &AMaze::TiltForward);
	PlayerInputComponent->BindAxis(TEXT("TiltRight"), this, &AMaze::TiltRight);
}

void AMaze::TiltForward(float Value)
{
	FRotator Rotation(0);
	Rotation.Pitch = Value * TurnSpeed * UGameplayStatics::GetWorldDeltaSeconds(this);

	if (Maze)
	{
		Maze->AddWorldRotation(Rotation, true);
	}

}

void AMaze::TiltRight(float Value)
{
	FRotator Rotation(0);
	Rotation.Roll = Value * TurnSpeed * UGameplayStatics::GetWorldDeltaSeconds(this);

	if (Maze)
	{
		Maze->AddLocalRotation(Rotation, true);
	}
}

