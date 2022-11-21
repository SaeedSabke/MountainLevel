// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Human.generated.h"

UCLASS()
class CODEING2_API AHuman : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHuman();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FString PlayerName = "Ted";
	
	UPROPERTY(EditAnywhere)
	float Health = 10;

	UPROPERTY(EditAnywhere)
	float Damage = 4;

	UPROPERTY(EditAnywhere)
	float Speed = 10;

	UPROPERTY(EditAnywhere)
	int32 ElementalType = 0; // 0 = fire, 1 = ice, 2 = candy, 3 = lime

	//UPROPERTY(EditAnywhere)
	//FString Elements[3];

	UFUNCTION(BlueprintCallable)
		void RandomizeHuman();

		UFUNCTION(BlueprintCallable)
		void TakeDamage(AHuman *attacker);

		UFUNCTION(BlueprintCallable)
		float DamageMultiplier(int32 GivenElemType);

//UFUNCTION(BlueprintCallable)
		//void OnOverlapBegin(UPrimitiveComponent* OverlapComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult, AHuman* attacker);

};
