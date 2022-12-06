// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestingStarAtlasGameModeBase.h"

#include "WalletAccount.h"
#include "SolanaUtils/Wallet.h"
#include "Network/UFRequestManager_WB.h"
#include "Network/SubscriptionUtils.h"
void ATestingStarAtlasGameModeBase::testSub(const FString& pubKey)
{
	UWalletAccount* demoWallet = NewObject<UWalletAccount>();
	UFRequestManager_WB* SocketManager = Cast<UFRequestManager_WB>(GetGameInstance());
	demoWallet->Sub2AccountInfo(pubKey, SocketManager);
	
}

void ATestingStarAtlasGameModeBase::testUnsub(const int ID)
{
	UWalletAccount* demoWallet = NewObject<UWalletAccount>();
	UFRequestManager_WB* SocketManager = Cast<UFRequestManager_WB>(GetGameInstance());
	demoWallet->UnSub2AccountInfo(ID,SocketManager);
}

