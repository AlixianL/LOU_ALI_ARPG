// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpellAction.h"
#include "SpellDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class LOU_ALI_ARPG_API USpellDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Instanced)
	TArray<USpellAction*>Actions;
	
};
