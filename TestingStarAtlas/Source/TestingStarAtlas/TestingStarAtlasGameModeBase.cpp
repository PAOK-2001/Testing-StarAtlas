// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestingStarAtlasGameModeBase.h"

#include "WalletAccount.h"
#include "SolanaUtils/Wallet.h"
#include "Network/UFRequestManager_WB.h"
#include "Network/SubscriptionUtils.h"
void ATestingStarAtlasGameModeBase::testWebSocket(const FString& pubKey)
{
	UWalletAccount* demoWallet = NewObject<UWalletAccount>();
	UFRequestManager_WB* SocketManager = Cast<UFRequestManager_WB>(GetGameInstance());
	demoWallet->Sub2AccountInfo(pubKey, SocketManager);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Subcription Confirmed");
	//double result = FSubscriptionUtils::GetAccountSubInfo();
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(result));

}
