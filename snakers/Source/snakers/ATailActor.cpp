// Fill out your copyright notice in the Description page of Project Settings.


#include "ATailActor.h"


// Sets default values
ATailActor::ATailActor()
{
	PrimaryActorTick.bCanEverTick = false;

	ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Engine/BasicShapes/Sphere.Sphere"));

	SphereComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereComponent"));
	RootComponent = SphereComponent;

	SphereComponent->RegisterComponent();
	SphereComponent->SetStaticMesh(SphereMesh.Object);

	SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SphereComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	SphereComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	SphereComponent->SetGenerateOverlapEvents(false);

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ATailActor::OnTriggerEnter);

	SetActorScale3D(FVector(0.9, 0.9, 0.9));
}

void ATailActor::OnTriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
								UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
								bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor && OtherActor != this)
	{
		
	}
}

