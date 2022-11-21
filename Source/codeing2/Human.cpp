// Fill out your copyright notice in the Description page of Project Settings.


#include "Human.h"

// Sets default values
AHuman::AHuman()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHuman::BeginPlay()
{
	Super::BeginPlay();

	//Elements[0] = "fire";
	//Elements[1] = "ice";
	//Elements[2] = "candy";
	//Elements[3] = "lime";

	PlayerName = "Bob";

	RandomizeHuman();

	//attacker->OnOverlapBegin(this, &AHuman::OnOverlapBegin);
	
}

// Called every frame
void AHuman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//return type is void
void AHuman::RandomizeHuman() {
	UE_LOG(LogTemp, Display, TEXT ("Randomizing Human!"));

	float randomNumber = FMath::RandRange(0, 10);
	UE_LOG(LogTemp, Display, TEXT("Random: %f"), randomNumber);

	int randElement = FMath::RandRange(0, 3);

	Speed = FMath::RandRange(5.0, 25.0);

		ElementalType = randElement;

}

//void AHuman::OnOverlapBegin(UPrimitiveComponent* OverlapComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult, AHuman* attacker){
	//UE_LOG(LogTemp, Display, TEXT("My attacker's name is %s"), *attacker->PlayerName);

//float DmgMultiplier = DamageMultiplier(attacker->ElementalType);

//Health -= attacker->Damage * DmgMultiplier;

//UE_LOG(LogTemp, Display, TEXT("I now have %f health."), Health);

//float Multiplier = 1;

//Multiplier =  FMath::RandRange(0.5, 2.0);
	//if(GivenElemType == ElementalType) {
	//	Multiplier = 0.5;
	//}
	// if attacker is fire and i am ice
	//else if(GivenElemType == 0 && ElementalType == 1) {
	//	Multiplier = 2.0; // if this a float or double?
	//}
	// if attacker is ice and i am fire
	//else if(GivenElemType == 1 && ElementalType == 0) {
	//	Multiplier = 2.0; // if this a float or double?
	//}
	//else {
	//	Multiplier = 1;
	//}

	//return Multiplier;
//}

void AHuman::TakeDamage(AHuman* attacker){
UE_LOG(LogTemp, Display, TEXT("My attacker's name is %s"), *attacker->PlayerName);

float DmgMultiplier = DamageMultiplier(attacker->ElementalType);

Health -= attacker->Damage * DmgMultiplier;

UE_LOG(LogTemp, Display, TEXT("I now have %f health."), Health);
}

float AHuman::DamageMultiplier(int32 GivenElemType){
	float Multiplier = 1;

Multiplier =  FMath::RandRange(0.5, 2.0);
	//if(GivenElemType == ElementalType) {
	//	Multiplier = 0.5;
	//}
	// if attacker is fire and i am ice
	//else if(GivenElemType == 0 && ElementalType == 1) {
	//	Multiplier = 2.0; // if this a float or double?
	//}
	// if attacker is ice and i am fire
	//else if(GivenElemType == 1 && ElementalType == 0) {
	//	Multiplier = 2.0; // if this a float or double?
	//}
	//else {
	//	Multiplier = 1;
	//}

	return Multiplier;

}

/* 
comment block
*/