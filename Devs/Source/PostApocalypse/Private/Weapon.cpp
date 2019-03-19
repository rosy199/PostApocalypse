// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon.h"
#include "DrawDebugHelpers.h"
#include "kismet/GameplayStatics.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	meshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = meshComp;

	muzzleSocketName = "MuzzleSocket";
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeapon::Fire()
{
	AActor* myOwner = GetOwner();
	if (myOwner)
	{
		FVector eyeLocation;
		FRotator eyeRotation;

		myOwner->GetActorEyesViewPoint(eyeLocation, eyeRotation);
		
		FVector shortDirection = eyeRotation.Vector();

		FVector traceEnd = eyeLocation + shortDirection * 10000;
		
		FCollisionQueryParams queryParams;
		queryParams.AddIgnoredActor(myOwner);
		queryParams.AddIgnoredActor(this);
		queryParams.bTraceComplex = true;

		FHitResult hit;
		if (GetWorld()->LineTraceSingleByChannel(hit, eyeLocation, traceEnd, ECC_Visibility, queryParams))
		{
			AActor* hitActor = hit.GetActor();

			UGameplayStatics::ApplyPointDamage(hitActor, 20.0f, shortDirection, hit, myOwner->GetInstigatorController(), this, damageType);

			if (impactEffect)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), impactEffect, hit.ImpactPoint, hit.ImpactNormal.Rotation());
			}
		}

		DrawDebugLine(GetWorld(), eyeLocation, traceEnd, FColor::White, false, 1.0f, 0, 1.0f);
		
		if (muzzleEffect)
		{
			UGameplayStatics::SpawnEmitterAttached(muzzleEffect, meshComp, muzzleSocketName);
		}
	}

}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

