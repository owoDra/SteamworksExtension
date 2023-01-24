// Copyright 2022 RutenStudio

#include "Subsystems/SteamworksInventorySubsystem.h"


// ================================================
//   Steamworks Inventory Extension Subsystem
// ================================================

// ===== Initialization =====

USteamworksInventorySubsystem::USteamworksInventorySubsystem()
{
	if (this->HasAnyFlags(RF_ClassDefaultObject))
	{
		return;
	}

	auto GameInstance = this->GetGameInstance();
	check(IsValid(GameInstance));

	auto World = GameInstance->GetWorld();
	check(IsValid(World));

	OnSteamInventoryDefinitionUpdateCallback.Register(this, &USteamworksInventorySubsystem::OnSteamInventoryDefinitionUpdate);
	OnSteamInventoryFullUpdateCallback.Register(this, &USteamworksInventorySubsystem::OnSteamInventoryFullUpdate);
	OnSteamInventoryResultReadyCallback.Register(this, &USteamworksInventorySubsystem::OnSteamInventoryResultReady);
}

void USteamworksInventorySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (SteamAPI_Init())
	{
		LoadItemDefinitions();
	}
}

void USteamworksInventorySubsystem::BeginDestroy()
{
	if (this->HasAnyFlags(RF_ClassDefaultObject))
	{
		Super::BeginDestroy();
		return;
	}

	OnSteamInventoryDefinitionUpdateCallback.Unregister();
	OnSteamInventoryFullUpdateCallback.Unregister();
	OnSteamInventoryResultReadyCallback.Unregister();

	Super::BeginDestroy();
}


// ===== Items =====

bool USteamworksInventorySubsystem::AddPromoItem(FSteamInventoryResult& ResultHandle, FSteamItemDef ItemDef) const
{
	return SteamInventory()->AddPromoItem(&ResultHandle.Value, ItemDef.Value);
}

bool USteamworksInventorySubsystem::AddPromoItems(FSteamInventoryResult& ResultHandle, const TArray<FSteamItemDef>& ItemDefs) const
{
	TArray<int32> Tmp;
	for (int32 i = 0; i < ItemDefs.Num(); i++)
	{
		Tmp.Add(ItemDefs[i]);
	}

	return SteamInventory()->AddPromoItems(&ResultHandle.Value, Tmp.GetData(), Tmp.Num());
}

bool USteamworksInventorySubsystem::ConsumeItem(FSteamInventoryResult& ResultHandle, FSteamItemInstanceID ItemID, int32 Quantity) const
{
	return SteamInventory()->ConsumeItem(&ResultHandle.Value, ItemID, Quantity);
}

bool USteamworksInventorySubsystem::ExchangeItems(FSteamInventoryResult& ResultHandle, const TMap<FSteamItemDef, int32>& ItemsGenerated, const TMap<FSteamItemInstanceID, int32>& ItemsDestroyed) const
{
	if (ItemsGenerated.Num() < 1 || ItemsDestroyed.Num() < 1) return false;

	TArray<SteamItemDef_t> TmpItemsGenerated;
	TArray<SteamItemInstanceID_t> TmpItemsDestroyed;
	TArray<uint32> TmpItemsGeneratedQuantity;
	TArray<uint32> TmpItemsDestroyedQuantity;

	for (const auto& pair : ItemsGenerated)
	{
		TmpItemsGenerated.Add(pair.Key);
	}
	for (const auto& pair : ItemsGenerated)
	{
		TmpItemsGeneratedQuantity.Add(pair.Value);
	}
	for (const auto& pair : ItemsDestroyed)
	{
		TmpItemsDestroyed.Add(pair.Key);
	}
	for (const auto& pair : ItemsDestroyed)
	{
		TmpItemsDestroyedQuantity.Add(pair.Value);
	}
	return SteamInventory()->ExchangeItems(&ResultHandle.Value, TmpItemsGenerated.GetData(), TmpItemsGeneratedQuantity.GetData(), ItemsGenerated.Num(), TmpItemsDestroyed.GetData(), TmpItemsDestroyedQuantity.GetData(), ItemsDestroyed.Num());

}

bool USteamworksInventorySubsystem::GenerateItems(FSteamInventoryResult& ResultHandle, const TMap<FSteamItemDef, int32>& Items) const
{
	TArray<SteamItemDef_t> TmpItems;
	TArray<int32> TmpQuantity;

	for (const auto& pair : Items)
	{
		TmpItems.Add(pair.Key);
		TmpQuantity.Add(pair.Value);
	}

	return SteamInventory()->GenerateItems(&ResultHandle.Value, TmpItems.GetData(), (uint32*)TmpQuantity.GetData(), TmpItems.Num());
}

bool USteamworksInventorySubsystem::GrantPromoItems(FSteamInventoryResult& ResultHandle) const
{
	return SteamInventory()->GrantPromoItems(&ResultHandle.Value);
}

bool USteamworksInventorySubsystem::TransferItemQuantity(FSteamInventoryResult& ResultHandle, FSteamItemInstanceID ItemIdSource, int32 Quantity, FSteamItemInstanceID ItemIdDest) const
{
	return SteamInventory()->TransferItemQuantity(&ResultHandle.Value, ItemIdSource, Quantity, ItemIdDest);
}

bool USteamworksInventorySubsystem::TriggerItemDrop(FSteamInventoryResult& ResultHandle, FSteamItemDef DropListDefinition) const
{
	return SteamInventory()->TriggerItemDrop(&ResultHandle.Value, DropListDefinition);
}


// ===== Items|Info =====

bool USteamworksInventorySubsystem::LoadItemDefinitions() const
{
	return SteamInventory()->LoadItemDefinitions();
}

bool USteamworksInventorySubsystem::GetAllItems(FSteamInventoryResult& ResultHandle) const
{
	return SteamInventory()->GetAllItems(&ResultHandle.Value);
}

bool USteamworksInventorySubsystem::GetEligiblePromoItemDefinitionIDs(FUniqueNetIdRepl UserId, TArray<FSteamItemDef>& Items) const
{
	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	uint32 TmpCount = 0;
	if (SteamInventory()->GetEligiblePromoItemDefinitionIDs(SteamID, nullptr, &TmpCount))
	{
		TArray<SteamItemDef_t> TmpArray;
		TmpArray.SetNum(TmpCount);
		bool result = SteamInventory()->GetEligiblePromoItemDefinitionIDs(SteamID, TmpArray.GetData(), &TmpCount);

		for (int32 i = 0; i < (int32)TmpCount; i++)
		{
			Items.Add(TmpArray[i]);
		}

		return result;
	}
	return false;
}

bool USteamworksInventorySubsystem::GetItemDefinitionIDs(TArray<FSteamItemDef>& Items) const
{
	uint32 TmpCount = 0;
	if (SteamInventory()->GetItemDefinitionIDs(nullptr, &TmpCount))
	{
		TArray<SteamItemDef_t> TmpArray;
		TmpArray.SetNum(TmpCount);
		bool result = SteamInventory()->GetItemDefinitionIDs(TmpArray.GetData(), &TmpCount);

		for (int32 i = 0; i < (int32)TmpCount; i++)
		{
			Items.Add(TmpArray[i]);
		}

		return result;
	}
	return false;
}

bool USteamworksInventorySubsystem::GetItemDefinitionProperty(FSteamItemDef Definition, const FString& PropertyName, FString& Value) const
{
	uint32 Size = 0;
	if (SteamInventory()->GetItemDefinitionProperty(Definition, TCHAR_TO_UTF8(*PropertyName), nullptr, &Size))
	{
		TArray<char> TmpStr;
		TmpStr.SetNum(Size);
		bool bResult = SteamInventory()->GetItemDefinitionProperty(Definition, TCHAR_TO_UTF8(*PropertyName), TmpStr.GetData(), &Size);
		Value = UTF8_TO_TCHAR(TmpStr.GetData());
		return bResult;
	}
	return false;
}

bool USteamworksInventorySubsystem::GetItemsByID(FSteamInventoryResult& ResultHandle, const TArray<FSteamItemInstanceID>& InstanceIDs) const
{
	const int32 Size = InstanceIDs.Num();
	TArray<SteamItemInstanceID_t> TmpIDs;
	TmpIDs.SetNum(Size);

	for (int32 i = 0; i < Size; i++)
	{
		TmpIDs.Add(InstanceIDs[i]);
	}

	return SteamInventory()->GetItemsByID((SteamInventoryResult_t*)&ResultHandle, TmpIDs.GetData(), Size);
}

bool USteamworksInventorySubsystem::GetItemPrice(FSteamItemDef ItemDef, int64& CurrentPrice, int64& BasePrice) const
{
	return SteamInventory()->GetItemPrice(ItemDef, (uint64*)&CurrentPrice, (uint64*)&BasePrice);
}

bool USteamworksInventorySubsystem::GetItemsWithPrices(TArray<FSteamItemPriceData>& ItemData) const
{
	const int32 Size = SteamInventory()->GetNumItemsWithPrices();

	TArray<SteamItemDef_t> TmpItems;
	TArray<uint64> TmpCurrentPrices;
	TArray<uint64> TmpBasePrices;
	TmpItems.SetNum(Size);
	TmpCurrentPrices.SetNum(Size);
	TmpBasePrices.SetNum(Size);

	if (bool bResult = SteamInventory()->GetItemsWithPrices(TmpItems.GetData(), TmpCurrentPrices.GetData(), TmpBasePrices.GetData(), Size))
	{
		for (int32 i = 0; i < Size; i++)
		{
			ItemData.Add({ TmpItems[i], (int64)TmpCurrentPrices[i], (int64)TmpBasePrices[i] });
		}
		return bResult;
	}
	return false;
}

int32 USteamworksInventorySubsystem::GetNumItemsWithPrices() const
{
	return SteamInventory()->GetNumItemsWithPrices();
}

bool USteamworksInventorySubsystem::GetResultItemProperty(FSteamInventoryResult ResultHandle, int32 ItemIndex, const FString& PropertyName, FString& Value) const
{
	uint32 Size = 0;
	if (SteamInventory()->GetResultItemProperty(ResultHandle, ItemIndex, TCHAR_TO_UTF8(*PropertyName), nullptr, &Size))
	{
		TArray<char> TmpStr;
		TmpStr.SetNum(Size);
		bool bResult = SteamInventory()->GetResultItemProperty(ResultHandle, ItemIndex, TCHAR_TO_UTF8(*PropertyName), TmpStr.GetData(), &Size);
		Value = UTF8_TO_TCHAR(TmpStr.GetData());
		return bResult;
	}
	return false;
}

bool USteamworksInventorySubsystem::GetResultItems(FSteamInventoryResult ResultHandle, TArray<FSteamItemDetails>& ItemsArray) const
{
	uint32 TmpCount = 0;

	if (SteamInventory()->GetResultItems(ResultHandle, nullptr, &TmpCount))
	{
		TArray<SteamItemDetails_t> TmpArray;
		TmpArray.SetNum(TmpCount);
		bool result = SteamInventory()->GetResultItems(ResultHandle, TmpArray.GetData(), &TmpCount);

		for (int32 i = 0; i < (int32)TmpCount; i++)
		{
			ItemsArray.Add((FSteamItemDetails)TmpArray[i]);
		}

		return result;
	}

	return false;
}


// ===== Utilities =====

bool USteamworksInventorySubsystem::CheckResultSteamID(FSteamInventoryResult ResultHandle, FUniqueNetIdRepl UserId) const
{
	uint64 SteamID = *((uint64*)UserId.GetUniqueNetId()->GetBytes());
	return SteamInventory()->CheckResultSteamID(ResultHandle, SteamID);
}

bool USteamworksInventorySubsystem::SerializeResult(FSteamInventoryResult ResultHandle, TArray<uint8>& Buffer) const
{
	uint32 TmpCount = 0;
	if (SteamInventory()->SerializeResult(ResultHandle, nullptr, &TmpCount))
	{
		Buffer.SetNum(TmpCount);
		bool bResult = SteamInventory()->SerializeResult(ResultHandle, Buffer.GetData(), &TmpCount);
		return bResult;
	}

	return false;
}

bool USteamworksInventorySubsystem::DeserializeResult(FSteamInventoryResult& ResultHandle, TArray<uint8> Buffer) const
{
	return SteamInventory()->DeserializeResult(&ResultHandle.Value, Buffer.GetData(), Buffer.Num(), false);
}

void USteamworksInventorySubsystem::DestroyResult(FSteamInventoryResult ResultHandle)
{
	SteamInventory()->DestroyResult(ResultHandle);
}

ESteamResult USteamworksInventorySubsystem::GetResultStatus(FSteamInventoryResult ResultHandle) const
{
	return (ESteamResult)SteamInventory()->GetResultStatus(ResultHandle);
}

int32 USteamworksInventorySubsystem::GetResultTimestamp(FSteamInventoryResult ResultHandle) const
{
	return SteamInventory()->GetResultTimestamp(ResultHandle);
}


// ===== Cached Values =====

FSteamItemDetails USteamworksInventorySubsystem::GetCachedISC() const
{
	return CachedISC;
}

FSteamItemDetails USteamworksInventorySubsystem::GetCachedBET() const
{
	return CachedBET;
}

TArray<FSteamItemDetails> USteamworksInventorySubsystem::GetCachedItems() const
{
	return CachedOwnedItemDetails;
}

FSteamItemDetails USteamworksInventorySubsystem::GetCachedItem(FSteamItemDef ItemDef) const
{
	for (FSteamItemDetails Each : CachedOwnedItemDetails)
	{
		if (Each.Definition == ItemDef)
		{
			return Each;
		}
	}
	return FSteamItemDetails();
}

TSet<FSteamItemDef> USteamworksInventorySubsystem::GetCachedOwningItems() const
{
	return CachedOwnedItemDefs;
}

bool USteamworksInventorySubsystem::CheckHasOwnedViaCache(FSteamItemDef ItemDef) const
{
	return CachedOwnedItemDefs.Contains(ItemDef);
}

void USteamworksInventorySubsystem::CacheInventoryValues(FSteamInventoryResult ResultHandle)
{
	TArray<FSteamItemDetails> Details;
	GetResultItems(ResultHandle, Details);

	CachedOwnedItemDetails = Details;
	CachedOwnedItemDefs.Empty();

	for (FSteamItemDetails Each : Details)
	{
		CachedOwnedItemDefs.Add(Each.Definition);

		if (Each.Definition == 5)
		{
			CachedISC = Each;
		}
		if (Each.Definition == 10)
		{
			CachedBET = Each;
		}
	}
}


// ===== Delegate =====

void USteamworksInventorySubsystem::OnSteamInventoryDefinitionUpdate(SteamInventoryDefinitionUpdate_t* pParam)
{
	m_OnSteamInventoryDefinitionUpdate.Broadcast();
}

void USteamworksInventorySubsystem::OnSteamInventoryFullUpdate(SteamInventoryFullUpdate_t* pParam)
{
	m_OnSteamInventoryFullUpdate.Broadcast(pParam->m_handle);
}

void USteamworksInventorySubsystem::OnSteamInventoryResultReady(SteamInventoryResultReady_t* pParam)
{
	CacheInventoryValues(pParam->m_handle);
	m_OnSteamInventoryResultReady.Broadcast(pParam->m_handle, (ESteamResult)pParam->m_result);
}


// ================================================
//   Steamworks Inventory Async Request Prices
// ================================================

USteamworksInventoryRequestPrices* USteamworksInventoryRequestPrices::RequestItemsWithPrices(USteamworksInventorySubsystem* Subsystem)
{
	if (!IsValid(Subsystem))
	{
		UE_LOG(LogSteamworksExtension, Error, TEXT("SteamworksInventorySubsystem is not available."));
		return nullptr;
	}

	check(!Subsystem->HasAnyFlags(RF_ClassDefaultObject));

	USteamworksInventoryRequestPrices* Node = NewObject<USteamworksInventoryRequestPrices>();
	Node->OwningSubsystem = Subsystem;
	return Node;
}

void USteamworksInventoryRequestPrices::Activate()
{
	SteamAPICall_t hSteamAPICall = SteamInventory()->RequestPrices();

	m_OnSteamInventoryRequestPricesResult.Set(hSteamAPICall, this, &USteamworksInventoryRequestPrices::OnSteamInventoryRequestPricesResult);
	return;
}

void USteamworksInventoryRequestPrices::OnSteamInventoryRequestPricesResult(SteamInventoryRequestPricesResult_t* pParam, bool bFailure)
{
	if (bFailure)
	{
		OnCallFailed.Broadcast(ESteamResult(), FString());
		return;
	}

	if (!IsValid(OwningSubsystem))
	{
		UE_LOG(LogSteamworksExtension, Error, TEXT("SteamworksInventorySubsystem is not available."));
		OnCallFailed.Broadcast(ESteamResult(), FString());
		return;
	}

	OnRequestComplete.Broadcast((ESteamResult)pParam->m_result, UTF8_TO_TCHAR(pParam->m_rgchCurrency));
}

// ================================================
//   Steamworks Inventory Async Request Promo
// ================================================

USteamworksInventoryEligiblePromoItemDefIDs* USteamworksInventoryEligiblePromoItemDefIDs::RequestEligiblePromoItemDefinitionsIDs(USteamworksInventorySubsystem* Subsystem, FUniqueNetIdRepl UserId)
{
	if (!IsValid(Subsystem))
	{
		UE_LOG(LogSteamworksExtension, Error, TEXT("SteamworksInventorySubsystem is not available."));
		return nullptr;
	}

	check(!Subsystem->HasAnyFlags(RF_ClassDefaultObject));

	USteamworksInventoryEligiblePromoItemDefIDs* Node = NewObject<USteamworksInventoryEligiblePromoItemDefIDs>();
	Node->OwningSubsystem = Subsystem;
	Node->UserUniqueNetId = UserId;
	return Node;
}

void USteamworksInventoryEligiblePromoItemDefIDs::Activate()
{
	uint64 id = *((uint64*)UserUniqueNetId.GetUniqueNetId()->GetBytes());
	SteamAPICall_t hSteamAPICall = SteamInventory()->RequestEligiblePromoItemDefinitionsIDs(id);

	m_OnSteamInventoryEligiblePromoItemDefIDs.Set(hSteamAPICall, this, &USteamworksInventoryEligiblePromoItemDefIDs::OnSteamInventoryRequestEligiblePromoItem);
	return;
}

void USteamworksInventoryEligiblePromoItemDefIDs::OnSteamInventoryRequestEligiblePromoItem(SteamInventoryEligiblePromoItemDefIDs_t* pParam, bool bFailure)
{
	bool Success = false;
	TArray<FSteamItemDef> ItemDefs;
	uint32 TmpCount = 0;

	if (bFailure)
	{
		OnCallFailed.Broadcast(ESteamResult(), ItemDefs, 0, false);
		return;
	}

	if (!IsValid(OwningSubsystem))
	{
		UE_LOG(LogSteamworksExtension, Error, TEXT("SteamworksInventorySubsystem is not available."));
		OnCallFailed.Broadcast(ESteamResult(), ItemDefs, 0, false);
		return;
	}

	if (SteamInventory()->GetEligiblePromoItemDefinitionIDs(pParam->m_steamID, nullptr, &TmpCount))
	{
		TArray<SteamItemDef_t> TmpArray;
		TmpArray.SetNum(TmpCount);
		bool result = SteamInventory()->GetEligiblePromoItemDefinitionIDs(pParam->m_steamID, TmpArray.GetData(), &TmpCount);

		for (int32 i = 0; i < (int32)TmpCount; i++)
		{
			ItemDefs.Add(TmpArray[i]);
		}

		Success = result;
	}

	if (!Success)
	{
		OnCallFailed.Broadcast(ESteamResult(), ItemDefs, 0, false);
		return;
	}

	OnRequestComplete.Broadcast((ESteamResult)pParam->m_result, ItemDefs, pParam->m_numEligiblePromoItemDefs, pParam->m_bCachedData);
}


// ================================================
//   Steamworks Inventory Async Start Purchase
// ================================================

USteamworksInventoryStartPurchase* USteamworksInventoryStartPurchase::StartPurchase(USteamworksInventorySubsystem* Subsystem, const TMap<FSteamItemDef, int32>& Items)
{
	if (!IsValid(Subsystem))
	{
		UE_LOG(LogSteamworksExtension, Error, TEXT("SteamworksInventorySubsystem is not available."));
		return nullptr;
	}

	check(!Subsystem->HasAnyFlags(RF_ClassDefaultObject));

	USteamworksInventoryStartPurchase* Node = NewObject<USteamworksInventoryStartPurchase>();
	Node->OwningSubsystem = Subsystem;
	Node->ItemsToPurchase = Items;
	return Node;
}

void USteamworksInventoryStartPurchase::Activate()
{
	TArray<SteamItemDef_t> TmpItemsToPurchase;
	TArray<uint32> TmpQuantityToPurchase;
	
	for (const auto& pair : ItemsToPurchase)
	{
		TmpItemsToPurchase.Add(pair.Key);
	}
	for (const auto& pair : ItemsToPurchase)
	{
		TmpQuantityToPurchase.Add(pair.Value);
	}

	SteamAPICall_t hSteamAPICall = SteamInventory()->StartPurchase(TmpItemsToPurchase.GetData(), TmpQuantityToPurchase.GetData(), ItemsToPurchase.Num());

	m_OnSteamInventoryStartPurchaseResult.Set(hSteamAPICall, this, &USteamworksInventoryStartPurchase::OnSteamInventoryStartPurchase);
	return;
}

void USteamworksInventoryStartPurchase::OnSteamInventoryStartPurchase(SteamInventoryStartPurchaseResult_t* pParam, bool bFailure)
{
	if (bFailure)
	{
		OnCallFailed.Broadcast(ESteamResult(),0, 0);
		return;
	}

	if (!IsValid(OwningSubsystem))
	{
		UE_LOG(LogSteamworksExtension, Error, TEXT("SteamworksInventorySubsystem is not available."));
		OnCallFailed.Broadcast(ESteamResult(), 0, 0);
		return;
	}

	OnComplete.Broadcast((ESteamResult)pParam->m_result, pParam->m_ulOrderID, pParam->m_ulTransID);
}
