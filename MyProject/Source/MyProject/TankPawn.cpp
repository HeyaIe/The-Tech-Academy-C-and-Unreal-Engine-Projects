// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"

ATankPawn::ATankPawn()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

void ATankPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATankPawn::Move);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATankPawn::Turn);
}

void ATankPawn::BeginPlay()
{
	Super::BeginPlay();

	TankPlayerController = Cast<APlayerController>(GetController());
}

void ATankPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (TankPlayerController)
	{
		FHitResult HitResult; // Out

		TankPlayerController->GetHitResultUnderCursor
		(
			ECollisionChannel::ECC_Visibility,
			false,
			HitResult
		);
		RotateTurret(HitResult.ImpactPoint);
	}
}

void ATankPawn::Move(float Value)
{
	FVector DeltaLocation(0);
	DeltaLocation.X = Value * Speed * UGameplayStatics::GetWorldDeltaSeconds(this);

	AddActorLocalOffset(DeltaLocation, true);
}

void ATankPawn::Turn(float Value)
{
	FRotator DeltaRotation = FRotator::ZeroRotator;
	DeltaRotation.Yaw = Value * TurnRate * UGameplayStatics::GetWorldDeltaSeconds(this);

	AddActorLocalRotation(DeltaRotation, true);
}