// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpellAction.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class LOU_ALI_ARPG_API USpellAction : public UObject
{
	GENERATED_BODY()

public: 
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	void Launch(APlayerController* PlayerRef);
	
};
