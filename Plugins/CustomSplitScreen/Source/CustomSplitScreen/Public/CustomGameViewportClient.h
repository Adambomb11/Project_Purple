// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "Engine/ViewportSplitScreen.h"
#include "GameFramework/Actor.h"
#include "CustomGameViewportClient.generated.h"


UENUM(BlueprintType)
namespace ECustomSplitScreenType
{
     enum Type
     {
          // 0 value required by UE
          None,
          // Custom Splitscreen, next value after last built-in splitscreen type
          TwoPlayer = ESplitScreenType::SplitTypeCount,
          SplitTypeCount
     };
}

/**
 * 
 */
UCLASS(Blueprintable)
class CUSTOMSPLITSCREEN_API UCustomGameViewportClient : public UGameViewportClient
{
     GENERATED_BODY()

public:
     
     UCustomGameViewportClient();
     
     UFUNCTION(BlueprintCallable, Category="SplitScreenViewportSize")
     virtual void UpdateActiveSplitscreenType() override;

     UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SplitScreenViewportSize|Player 1")
     float Player1_NewSizeX = .66f;
     UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SplitScreenViewportSize|Player 1")
     float Player1_NewSizeY = 1.0f;
     
     UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SplitScreenViewportSize|Player 2")
     float Player2_NewSizeX = .33f;
     UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SplitScreenViewportSize|Player 2")
     float Player2_NewSizeY = 1.0f;
};
