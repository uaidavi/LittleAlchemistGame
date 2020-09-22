// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "CanoSplineComponent.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FValvulasData
{
	GENERATED_BODY()
			   		 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float posRatio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float rotation;	

	FValvulasData() {
		posRatio = 0.0;
		rotation = 0.0;
	}	

};

USTRUCT(BlueprintType)
struct FEntradaData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool doAdd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float rotation;
	   
	FEntradaData() {
		doAdd = 0.0;
		rotation = 0.0;
	}

};

USTRUCT(BlueprintType)
struct FSaidaData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool doAdd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float rotation;

	FSaidaData() {
		doAdd = 0.0;
		rotation = 0.0;
	}

};

UCLASS(ClassGroup = Utility, ShowCategories = (Mobility), HideCategories = (Physics, Collision, Lighting, Rendering, Mobile), meta = (BlueprintSpawnableComponent))
class LITTLEALCHEMIST_UE4_API UCanoSplineComponent : public USplineComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FValvulasData> Valvulas;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FEntradaData Entrada;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FSaidaData Saida;

	
};
