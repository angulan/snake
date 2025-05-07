// Fill out your copyright notice in the Description page of Project Settings.


#include "Snake.h"

#include "ATailActor.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
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
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<
				UEnhancedInputLocalPlayerSubsystem>())
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
	
	if (RootComponent)
	{
		if (UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(RootComponent))
		{
			MeshComponent->SetSimulatePhysics(false);
			MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			MeshComponent->SetCollisionResponseToAllChannels(ECR_Block);
			
			if (HeadMaterial)
			{
				MeshComponent->SetMaterial(0, HeadMaterial);
			}
		}
	}
}

void ASnake::SnakeSetup()
{
	//SetActorLocation(FVector(0.f, 0.f, 50.f));
	InitialInput = true;
	for (ATailActor* tail : Tail)
	{
		tail->Destroy(false);
	}
	Direction = FVector(0.f, -1.f, 0.f);
	InitialLocation = GetActorLocation();
	StartTile = GetActorLocation();
	TargetTile = GetActorLocation();
	
	TailStarts.Empty();
	TailTargets.Empty();
	Tail.Empty();
	
	Length = 3;
}
// Called every frame
void ASnake::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASnake::NewTick(float t)
{
	while (Tail.Num() < Length)
	{
		FVector location = Tail.Num() == 0 ? GetActorLocation() : Tail[Tail.Num() - 1]->GetActorLocation();
		
		ATailActor* newTail = GetWorld()->SpawnActor<ATailActor>(ATailActor::StaticClass(), location,
																 FRotator::ZeroRotator);
		Tail.Add(newTail);
		TailStarts.Add(location);
		TailTargets.Add(location);

		if (TailMaterial)
		{
			newTail->SphereComponent->SetMaterial(0, TailMaterial);
		}
	}
	
	FVector CurrentTargetLocation = FMath::Lerp(StartTile, TargetTile, t);
	FVector CurrentLocation = GetActorLocation();
	FVector DeltaMovement = CurrentTargetLocation - CurrentLocation;
	FHitResult Hit;
	RootComponent->MoveComponent(DeltaMovement, GetActorRotation(), true, &Hit);
	
	if (Hit.IsValidBlockingHit())
	{
		collision = true;
	}

	for (int i = 0; i < Tail.Num(); i++)
	{
		Tail[i]->SetActorLocation(FMath::Lerp(TailStarts[i], TailTargets[i], t));
	}
}

void ASnake::PositionSnap()
{
	FVector pos = GetActorLocation();
	pos = FVector(FMath::RoundToFloat(pos.X / 100) * 100, FMath::RoundToFloat(pos.Y / 100) * 100, pos.Z);
	StartTile = pos;
		
	SetActorLocation(pos);
	TargetTile = pos + (Direction * 100);
	LastDirection = Direction;

	for (int i = 0; i < Tail.Num(); i++)
	{
		FVector tpos = Tail[i]->GetActorLocation();
		tpos = FVector(FMath::RoundToFloat(tpos.X / 100) * 100, FMath::RoundToFloat(tpos.Y / 100) * 100, pos.Z);

		Tail[i]->SetActorLocation(tpos);

		TailStarts[i] = Tail[i]->GetActorLocation();
		TailTargets[i] = i == 0 ? pos : Tail[i - 1]->GetActorLocation();
	}
	if (pos != InitialLocation) InitialInput = false;
}

// Called to bind functionality to input
void ASnake::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInput->BindAction(IA_Horizontal, ETriggerEvent::Triggered, this, &ASnake::MoveHorizontal);
		EnhancedInput->BindAction(IA_Vertical, ETriggerEvent::Triggered, this, &ASnake::MoveVertical);

		EnhancedInput->BindAction(IA_Secondary_Horizontal, ETriggerEvent::Triggered, this, &ASnake::MoveSecondaryHorizontal);
		EnhancedInput->BindAction(IA_Secondary_Vertical, ETriggerEvent::Triggered, this, &ASnake::MoveSecondaryVertical);
	}
}

void ASnake::MoveHorizontal(const FInputActionValue& Value)
{
	float AxisValue = Value.Get<float>();
	if (ControlSelf && Controller && AxisValue != 0.f && LastDirection.Y == 0.f)
	{
		Direction = FVector(0.f, -AxisValue, 0.f);
	}
}

void ASnake::MoveVertical(const FInputActionValue& Value)
{
	float AxisValue = Value.Get<float>();
	if (ControlSelf && Controller && AxisValue != 0.f && LastDirection.X == 0.f)
	{
		Direction = FVector(-AxisValue, 0.f, 0.f);
	}
}

void ASnake::MoveSecondaryHorizontal(const FInputActionValue& Value)
{
	float AxisValue = Value.Get<float>();
	if (ControlSecond && SecondSnake != nullptr && Controller && AxisValue != 0.f && SecondSnake->LastDirection.Y == 0.f)
	{
		SecondSnake->Direction = FVector(0.f, -AxisValue, 0.f);
	}
}

void ASnake::MoveSecondaryVertical(const FInputActionValue& Value)
{
	float AxisValue = Value.Get<float>();
	if (ControlSecond && SecondSnake != nullptr && Controller && AxisValue != 0.f && SecondSnake->LastDirection.X == 0.f)
	{
		SecondSnake->Direction = FVector(-AxisValue, 0.f, 0.f);
	}
}

void ASnake::AiInput(FVector AppleTile, TArray<FVector> OccupiedTiles)
{
	FVector BestDirection = Direction;
	FVector Unassigned = FVector(999.f, 999.f, 999.f);
	FVector BestPos = Unassigned;
	
	TArray<FVector> directions = {
		FVector(1.f, 0.f, 0.f),
		FVector(0.f, 1.f, 0.f),
		FVector(-1.f, 0.f, 0.f),
		FVector(0.f, -1.f, 0.f)
	};

	for (int i = 0; i < directions.Num(); i++)
	{
		bool res = true;

		FVector pos = GetActorLocation() + (directions[i] * 100);
		
		for (FVector occpos : OccupiedTiles)
		{
			if (FMath::RoundToFloat(occpos.X / 100) == FMath::RoundToFloat(pos.X / 100) && FMath::RoundToFloat(occpos.Y / 100) == FMath::RoundToFloat(pos.Y / 100))
			{
				res = false;
			}
		}

		if (FMath::Abs(pos.X) >= 800.f || FMath::Abs(pos.Y) >= 800.f)
		{
			res = false;
		}

		if (FMath::RoundToFloat(AppleTile.X / 100) == FMath::RoundToFloat(pos.X / 100) && FMath::RoundToFloat(AppleTile.Y / 100) == FMath::RoundToFloat(pos.Y / 100))
		{
			BestDirection = directions[i];
			Direction = BestDirection;
			break;
		}

		if (directions[i] == (Direction * -1))
		{
			res = false;
		}

		if (res && ((pos - AppleTile).Length() <= (BestPos - AppleTile).Length() || BestPos == Unassigned))
		{
			BestDirection = directions[i];
			BestPos = pos;
		}
	}

	Direction = BestDirection;
}


