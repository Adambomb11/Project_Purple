// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameViewportClient.h"

UCustomGameViewportClient::UCustomGameViewportClient()
     : Super(FObjectInitializer::Get())
{
     // Resize SplitscreenInfo to fit our custom config
     SplitscreenInfo.SetNum(ECustomSplitScreenType::SplitTypeCount, false);

     // Fill the custom config
     SplitscreenInfo[ECustomSplitScreenType::TwoPlayer].PlayerData.Add(FPerPlayerSplitscreenData(Player1_NewSizeX, Player1_NewSizeY, 0.00f, 0.00f)); //Player #1
     SplitscreenInfo[ECustomSplitScreenType::TwoPlayer].PlayerData.Add(FPerPlayerSplitscreenData(Player2_NewSizeX, Player2_NewSizeY, 1.0 - Player1_NewSizeX, 0.00f)); //Player #2
}

void UCustomGameViewportClient::UpdateActiveSplitscreenType()
{
     ECustomSplitScreenType::Type SplitType = ECustomSplitScreenType::None;
     const int32 NumPlayers = GEngine->GetNumGamePlayers(GetWorld());

     if (NumPlayers == 2)
     {
         // If Player count is equal 2, select custom Splitscreen
         ActiveSplitscreenType = static_cast<ESplitScreenType::Type>(ECustomSplitScreenType::TwoPlayer);
     }
     else
     {
         // Otherwise fallback to default behaviour
         Super::UpdateActiveSplitscreenType();
     }
}
