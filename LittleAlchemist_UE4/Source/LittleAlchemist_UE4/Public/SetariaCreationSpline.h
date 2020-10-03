// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SetariaCreationSpline.generated.h"

/**
 * 
 */


UCLASS(ClassGroup = Utility, ShowCategories = (Mobility), HideCategories = (Physics, Collision, Lighting, Rendering, Mobile), meta = (BlueprintSpawnableComponent))

class LITTLEALCHEMIST_UE4_API USetariaCreationSpline : public USplineComponent
{

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int SetariaCount;

	GENERATED_BODY()
	
};
