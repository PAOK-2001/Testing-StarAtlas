// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestingStarAtlasGameModeBase.h"

#include "WalletAccount.h"
#include "SolanaUtils/Wallet.h"
#include "Network/UFRequestManager_WB.h"
#include "Network/SubscriptionUtils.h"

UWalletAccount* demoWallet = NewObject<UWalletAccount>();

void ATestingStarAtlasGameModeBase::testSub(const FString& pubKey)
{
	UFRequestManager_WB* SocketManager = Cast<UFRequestManager_WB>(GetGameInstance());
	demoWallet->Sub2AccountInfo(pubKey, SocketManager);
}

void ATestingStarAtlasGameModeBase::testUnsub(const int ID)
{
	UFRequestManager_WB* SocketManager = Cast<UFRequestManager_WB>(GetGameInstance());
	demoWallet->UnSub2AccountInfo(ID,SocketManager);
}

void ATestingStarAtlasGameModeBase::getAccountBalance(const int ID)
{
	UFRequestManager_WB* SocketManager = Cast<UFRequestManager_WB>(GetGameInstance());
	double accountVal = demoWallet->ReadSub(ID,SocketManager );
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Turquoise, FString::SanitizeFloat(accountVal));
	
}

