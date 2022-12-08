// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestingStarAtlasGameModeBase.h"

#include "WalletAccount.h"
#include "SolanaUtils/Wallet.h"
#include "Network/UGI_WebSocketManager.h"
#include "Network/TransactionTracking.h"

UWalletAccount* DemoWallet = NewObject<UWalletAccount>();


void ATestingStarAtlasGameModeBase::TestSub(const FString& pubKey)
{
	UGI_WebSocketManager* SocketManager = Cast<UGI_WebSocketManager>(GetGameInstance());
	DemoWallet->Sub2AccountInfo(pubKey, SocketManager);
}

void ATestingStarAtlasGameModeBase::TestUnsub(const int ID)
{
	UGI_WebSocketManager* SocketManager = Cast<UGI_WebSocketManager>(GetGameInstance());
	DemoWallet->UnSub2AccountInfo(ID,SocketManager);
}

void ATestingStarAtlasGameModeBase::GetAccountBalance(const int ID)
{
	UGI_WebSocketManager* SocketManager = Cast<UGI_WebSocketManager>(GetGameInstance());
	double AccountVal = DemoWallet->ReadSub(ID,SocketManager );
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Turquoise, FString::SanitizeFloat(AccountVal));
	
}

void ATestingStarAtlasGameModeBase::TrackTransaction(const FString& Signature)
{
	UGI_WebSocketManager* SocketManager = Cast<UGI_WebSocketManager>(GetGameInstance());
	FTransactionTracker::Sub2Transaction(Signature, SocketManager);
}

void ATestingStarAtlasGameModeBase::GetErr(int ID)
{
	UGI_WebSocketManager* SocketManager = Cast<UGI_WebSocketManager>(GetGameInstance());
	FTransactionTracker::GetTransactionErr(ID, SocketManager);
}



