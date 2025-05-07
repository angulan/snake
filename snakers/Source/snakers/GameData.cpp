// Fill out your copyright notice in the Description page of Project Settings.


#include "GameData.h"

#include "MeshPaintVisualize.h"
#include "Kismet/GameplayStatics.h"
#include "snakers/ATailActor.h"
#include "snakers/Snake.h"

// Sets default values for this component's properties
UGameData::UGameData(): Apple(nullptr)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGameData::BeginPlay()
{
	Super::BeginPlay();

	snakes.Add(Cast<ASnake>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)));
	
	OnEatApple.AddDynamic(this, &UGameData::MoveApple);
	
	if (Apple != nullptr)
	{
		Apple->Destroy();
		Apple = nullptr;
	}

	Apple = GetWorld()->SpawnActor<ATailActor>(ATailActor::StaticClass(), GetRandomPosition(false),
											   FRotator::ZeroRotator);
	Apple->SetActorScale3D(FVector(0.8, 0.8, 0.8));
	if (UMaterialInterface* AppleMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Apple.Apple")))
	{
		Apple->SphereComponent->SetMaterial(0, AppleMaterial);
	}
}

void UGameData::MoveApple()
{
	Apple->SetActorLocation(GetRandomPosition(false));
}

void UGameData::DestroyPlayer2()
{
	while (snakes.Num() > 1)
	{
		while (snakes[1]->Tail.Num() > 0)
		{
			snakes[1]->Tail[0]->Destroy();
			snakes[1]->Tail[0] = nullptr;
			snakes[1]->Tail.RemoveAt(0);
		}
		
		snakes[1]->Destroy();
		snakes[1] = nullptr;
		snakes.RemoveAt(1);
	}

	snakes[0]->SetActorLocation(FVector(0.f, 0.f, 50.f));
}

void UGameData::DataSetup()
{
	GenerateMap();
	IsGameOver = false;
	for (FVector occPos : OccupiedWalls)
	{
		OccupiedPositions.Add(occPos);
	}
	
	for (ASnake* snake : snakes)
	{
		snake->SnakeSetup();
	}

	snakes[0]->HeadMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/PlayerHead.PlayerHead"));
	snakes[0]->TailMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/PlayerTail.PlayerTail"));
	
	if (snakes.Num() == 2)
	{
		snakes[0]->SecondSnake = snakes[1];

		snakes[1]->HeadMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Player2Head.Player2Head"));
		snakes[1]->TailMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Player2Tail.Player2Tail"));
	}
	else
	{
		snakes[0]->SecondSnake = nullptr;
	}
	
	Apple->SetActorLocation(GetRandomPosition(false));
	t = 0;

	switch (SelectedGameMode)
	{
	case 0: // P
		snakes[0]->ControlSelf = true;
		snakes[0]->ControlSecond = false;
		break;
	case 1: // AI
		snakes[0]->ControlSelf = false;
		snakes[0]->ControlSecond = false;
		break;
	case 2: // PvP
		snakes[0]->ControlSelf = true;
		snakes[0]->ControlSecond = true;
		break;
	case 3: // PvAI
		snakes[0]->ControlSelf = true;
		snakes[0]->ControlSecond = false;
		break;
	case 4: // AIvAI
		snakes[0]->ControlSelf = false;
		snakes[0]->ControlSecond = false;
		break;
	default:
		snakes[0]->ControlSelf = true;
		snakes[0]->ControlSecond = true;
		break;
	}
}

FVector UGameData::GetRandomPosition(bool includeOccupied)
{
	FVector returnValue = FVector(FMath::RandRange(-7, 7), FMath::RandRange(-7, 7), 0.5) * 100;

	if (!includeOccupied)
	{
		bool isFree = false;

		while (isFree == false)
		{
			returnValue = FVector(FMath::RandRange(-7, 7), FMath::RandRange(-7, 7), 0.5) * 100;
			
			isFree = true;
			for (FVector pos : OccupiedPositions)
			{
				if (pos.X == returnValue.X && pos.Y == returnValue.Y )
				{
					isFree = false;
					break;
				}
			}
		}
	}
	return returnValue;
}


// Called every frame
void UGameData::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (CurrentState != 1) return;
	
	t += DeltaTime * SnakeSpeed;
	
	for (ASnake* snake : snakes)
	{
		snake->NewTick(t);
	}

	if (t >= 1)
	{
		t = 0;
		
		OccupiedPositions.Empty();
		
		for (FVector pos : OccupiedWalls)
		{
			OccupiedPositions.Add(pos);
		}

		for (ASnake* snake : snakes)
		{
			for (ATailActor* tail : snake->Tail)
			{
				FVector tpos = tail->GetActorLocation();
				tpos = FVector(FMath::RoundToFloat(tpos.X / 100) * 100, FMath::RoundToFloat(tpos.Y / 100) * 100, 50.f);
				OccupiedPositions.Add(tpos);
			}

			FVector pos = snake->GetActorLocation();
			pos = FVector(FMath::RoundToFloat(pos.X / 100) * 100, FMath::RoundToFloat(pos.Y / 100) * 100, pos.Z);

			if (pos.X == Apple->GetActorLocation().X && pos.Y == Apple->GetActorLocation().Y)
			{
				snake->Length += 1;
				OnEatApple.Broadcast();
			}
		}

		for (ASnake* snake : snakes)
		{
			CheckIfCollision(snake->GetActorLocation());
			OccupiedPositions.Add(snake->GetActorLocation());
		}
		
		if (!snakes[0]->ControlSelf) snakes[0]->AiInput(Apple->GetActorLocation(), OccupiedPositions);
		if (snakes.Num() == 2 && !snakes[0]->ControlSecond) snakes[1]->AiInput(Apple->GetActorLocation(), OccupiedPositions);
		
		for (ASnake* snake : snakes)
		{
			snake->PositionSnap();
		}
	}

	for (ASnake* snake : snakes)
	{
		if (snake->collision)
		{
			GameOver();
		}
	}

	//for (ATailActor* sphere : debugspheres)
	//{
	//	sphere->Destroy();
	//}
//
	//debugspheres.Empty();
//
	//for (FVector pos : OccupiedPositions)
	//{
	//	ATailActor* newdebugsphere = GetWorld()->SpawnActor<ATailActor>();
	//	newdebugsphere->SetActorLocation(pos);
	//	newdebugsphere->SetActorScale3D(FVector(0.1, 0.1, 0.1));
	//	
	//	debugspheres.Add(newdebugsphere);
	//}
	
}

void UGameData::GameOver()
{
	for (ASnake* snake : snakes)
	{
		snake->collision = false;
	}
	
	if (snakes[0]->InitialInput || CurrentState != 1)
	{
		return;
	}

	CurrentState = true;
	IsGameOver = true;
}

void UGameData::CheckIfCollision(FVector pos)
{
	for (FVector occpos : OccupiedPositions)
	{
		if (FMath::RoundToFloat(occpos.X / 100) == FMath::RoundToFloat(pos.X / 100) && FMath::RoundToFloat(occpos.Y / 100) == FMath::RoundToFloat(pos.Y / 100))
		{
			GameOver();
		}
	}	
}


