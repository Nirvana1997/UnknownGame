// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameCamera.generated.h"

class UCameraComponent;

UCLASS()
class UNKNOWN_API AGameCamera : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGameCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, Category = "Component")
		UCameraComponent* CameraComp;

	APlayerController* PC;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
