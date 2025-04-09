// Fill out your copyright notice in the Description page of Project Settings.


#include "Snake.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "SnakeController.h"

// Sets default values
ASnake::ASnake()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// This will automatically possess the ASnake class when the game starts
	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

void ASnake::SetMovement(FVector direction)
{
	SetActorRotation(FQuat(direction.Rotation()));
}

// Called when the game starts or when spawned
void ASnake::BeginPlay()
{
	Super::BeginPlay();

	if (ASnakeController* PC = Cast<ASnakeController>(Controller))
	{
		if (ULocalPlayer* LocalPlayer = PC->GetLocalPlayer())
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
	
}

// Called every frame
void ASnake::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorLocation(GetActorLocation() + GetActorForwardVector() * speed * DeltaTime);


}

// Called to bind functionality to input
void ASnake::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInput->BindAction(IA_Horizontal, ETriggerEvent::Triggered, this, &ASnake::MoveHorizontal);
		EnhancedInput->BindAction(IA_Vertical, ETriggerEvent::Triggered, this, &ASnake::MoveVertical);
	}
}

void ASnake::MoveHorizontal(const FInputActionValue& Value)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Horizontal move"));

	float AxisValue = Value.Get<float>();
	if (Controller && AxisValue != 0.f)
	{
		ASnake::SetMovement(FVector(0.f, AxisValue, 0.f));
	}
}

void ASnake::MoveVertical(const FInputActionValue& Value)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Vertical move"));

	float AxisValue = Value.Get<float>();
	if (Controller && AxisValue != 0.f)
	{
		ASnake::SetMovement(FVector(AxisValue, 0.f, 0.f));
	}
}

