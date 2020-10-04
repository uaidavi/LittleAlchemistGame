// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "TreeFilledSpline.generated.h"

/**
 * 
 */

UCLASS(ClassGroup = Utility, ShowCategories = (Mobility), HideCategories = (Physics, Collision, Lighting, Rendering, Mobile), meta = (BlueprintSpawnableComponent))
class LITTLEALCHEMIST_UE4_API UTreeFilledSpline : public USplineComponent
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ArvoreCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BorderSpacing = 9000;
	
};
