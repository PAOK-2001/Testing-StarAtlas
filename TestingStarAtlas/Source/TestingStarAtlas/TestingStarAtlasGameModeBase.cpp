// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestingStarAtlasGameModeBase.h"

#include "WalletAccount.h"
#include "SolanaUtils/Wallet.h"
#include "Network/UFRequestManager_WB.h"
void ATestingStarAtlasGameModeBase::testWebSocket(const FString& pubKey)
{
	UWalletAccount* demoWallet = NewObject<UWalletAccount>();
	UFRequestManager_WB* SocketManager = Cast<UFRequestManager_WB>(GetGameInstance());
	demoWallet->GetAcountBalance_WB(pubKey, SocketManager);
}
