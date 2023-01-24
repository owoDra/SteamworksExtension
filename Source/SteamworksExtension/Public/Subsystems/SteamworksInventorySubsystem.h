// Copyright 2022 RutenStudio

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Kismet/BlueprintAsyncActionBase.h"

#include "SteamworksExtension.h"
#include "SteamworksAPI.h"

#include "SteamworksInventorySubsystem.generated.h"

// #==============================================#
// ** Unimplemented Features 
//
// # StartUpdateProperties();
// # SubmitUpdateProperties();
// # RemoveProperty();
// # SetProperty();
//
// #==============================================#

// ================================================
//   Steamworks Inventory Extension Subsystem
// ================================================

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSteamInventoryDefinitionUpdateDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryFullUpdateDelegate, FSteamInventoryResult, ResultHandle);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSteamInventoryResultReadyDelegate, FSteamInventoryResult, ResultHandle, ESteamResult, Result);

UCLASS(BlueprintType)
class STEAMWORKSEXTENSION_API USteamworksInventorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	// ============================================
	//   Variables
	// ============================================

	// ===== Delegate =====

	//
	// This callback is triggered whenever item definitions have been updated, 
	// which could be in response to LoadItemDefinitions or any time new item definitions are available
	// (eg, from the dynamic addition of new item types while players are still in-game).
	//
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Inventory|Delegates", meta = (DisplayName = "OnSteamInventoryDefinitionUpdate"))
		FOnSteamInventoryDefinitionUpdateDelegate m_OnSteamInventoryDefinitionUpdate;

	//
	// Triggered when GetAllItems successfully returns a result which is newer / fresher than the last known result.
	// It will not trigger if the inventory hasn't changed, or if results from two overlapping calls are
	// reversed in flight and the earlier result is already known to be stale/out-of-date.
	// The regular SteamInventoryResultReady_t callback will still be triggered immediately afterwards; this is an additional notification for your convenience.
	//
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Inventory|Delegates", meta = (DisplayName = "OnSteamInventoryFullUpdate"))
		FOnSteamInventoryFullUpdateDelegate m_OnSteamInventoryFullUpdate;

	//
	// This is fired whenever an inventory result transitions from k_EResultPending to any other completed state,
	// see GetResultStatus for the complete list of states. There will always be exactly one callback per handle.
	//
	UPROPERTY(BlueprintAssignable, Category = "Steamworks|Inventory|Delegates", meta = (DisplayName = "OnSteamInventoryResultReady"))
		FOnSteamInventoryResultReadyDelegate m_OnSteamInventoryResultReady;


	// ===== Cached Values =====
private:

	TSet<FSteamItemDef> CachedOwnedItemDefs;
	TArray<FSteamItemDetails> CachedOwnedItemDetails;
	FSteamItemDetails CachedISC;
	FSteamItemDetails CachedBET;


	// ============================================
	//   Functions
	// ============================================
public:
    // ===== Initialization =====

    USteamworksInventorySubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void BeginDestroy() override;


	// ===== Items =====

	/**
	 * Grant a specific one-time promotional item to the current user.
	 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own -
	 * a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.
	 * Any items that can be granted MUST have a "promo" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -
	 * have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the -
	 * item to be granted if the user owns either TF2 or SpaceWar.
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @param FSteamItemDef ItemDef - The ItemDef to grant the player.
	 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.
	 * On success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.
	 * Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool AddPromoItem(FSteamInventoryResult& ResultHandle, FSteamItemDef ItemDef) const;

	/**
	 * Grant a specific one-time promotional items to the current user.
	 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -
	 * specific other game. If you want to grant a single promotional item then use AddPromoItem. If you want to grant all possible promo items then use GrantPromoItems.
	 * Any items that can be granted MUST have a "promo" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -
	 * have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -
	 * to be granted if the user owns either TF2 or SpaceWar.
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @param const TArray<FSteamItemDef> & ItemDefs - The list of items to grant the user.
	 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.
	 * On success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.
	 * Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool AddPromoItems(FSteamInventoryResult& ResultHandle, const TArray<FSteamItemDef>& ItemDefs) const;

	/**
	 * Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.
	 * Once an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.
	 * ConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic "my brother borrowed my laptop and deleted all of my rare items".
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @param FSteamItemInstanceID ItemID - The item instance id to consume.
	 * @param int32 Quantity - The number of items in that stack to consume.
	 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool ConsumeItem(FSteamInventoryResult& ResultHandle, FSteamItemInstanceID ItemID, int32 Quantity) const;

	/**
	 * Grant one item in exchange for a set of other items.
	 * This can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).
	 * The caller of this API passes in the requested item and an array of existing items and quantities to exchange for it. The API currently takes an array of items to generate but at this time the size of that array -
	 * must be 1 and the quantity of the new item must be 1.
	 * Any items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item. Exchange recipes are evaluated atomically -
	 * by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.
	 * For example: exchange: 101x1,102x1;103x5;104x3,105x3
	 * Will allow the item to be exchanged for either one 101 and one 102, five 103s or three 104s and three 105s. See the Steam Inventory Schema documentation for more details.
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @param const TMap<FSteamItemDef, int32> & ItemsGenerated - The list of items that will be created by this call. Currently can only be 1 item!
	 * @param const TMap<FSteamItemInstanceID, int32> & ItemsDestroyed  - The list of items that will be destroyed by this call.
	 * @return bool - This function returns true indicating success, and returns false when called from SteamGameServer or when unArrayGenerateLength or punArrayGenerateQuantity is not set to 1.
	 * Exchanges that do not match a recipe, or do not provide the required amounts, will fail.
	 * Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool ExchangeItems(FSteamInventoryResult& ResultHandle, const TMap<FSteamItemDef, int32>& ItemsGenerated, const TMap<FSteamItemInstanceID, int32>& ItemsDestroyed) const;

	/**
	 * Grants specific items to the current user, for developers only.
	 * This API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.
	 * You can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @param const TMap<FSteamItemDef, int32> & Items - The list of items to grant the user.
	 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.
	 * Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GenerateItems(FSteamInventoryResult& ResultHandle, const TMap<FSteamItemDef, int32>& Items) const;

	/**
	 * Grant all potential one-time promotional items to the current user.
	 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -
	 * specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.
	 * Any items that can be granted MUST have a "promo" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that have -
	 * promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -
	 * to be granted if the user owns either TF2 or SpaceWar.
	 * promo: owns:440;owns:480
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.
	 * On success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.
	 * Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GrantPromoItems(FSteamInventoryResult& ResultHandle) const;

	/**
	 * Transfer items between stacks within a user's inventory.
	 * This can be used to stack, split, and moving items. The source and destination items must have the same itemdef id. To move items onto a destination stack specify the source, the quantity to move, and the -
	 * destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.
	 * NOTE: Tradability/marketability restrictions are copied along with transferred items. The destination stack receives the latest tradability/marketability date of any item in its composition.
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @param FSteamItemInstanceID ItemIdSource - 	The source item to transfer.
	 * @param int32 Quantity - The quantity of the item that will be transfered from itemIdSource to itemIdDest.
	 * @param FSteamItemInstanceID ItemIdDest - The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.
	 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.
	 * Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool TransferItemQuantity(FSteamInventoryResult& ResultHandle, FSteamItemInstanceID ItemIdSource, int32 Quantity, FSteamItemInstanceID ItemIdDest) const;

	/**
	 * Trigger an item drop if the user has played a long enough period of time.
	 * This period can be customized in two places:
	 * At the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all "playtimegenerator" items that do not specify any overrides.
	 * In an individual "playtimegenerator" item definition. The settings would take precedence over any application-level settings.
	 * Only item definitions which are marked as "playtime item generators" can be spawned.
	 * Typically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur. The granularity of the playtime generator settings is -
	 * in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client. The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers -
	 * will also manage adding the item to the players inventory.
	 *
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @param FSteamItemDef DropListDefinition - This must refer to an itemdefid of the type "playtimegenerator". See the inventory schema for more details.
	 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.
	 * Returns a new result handle via pResultHandle.
	 * The inventory result returned by this function will be the new item granted if the player is eligible. If the user is not eligible then it will return an empty result ('[]').
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool TriggerItemDrop(FSteamInventoryResult& ResultHandle, FSteamItemDef DropListDefinition) const;


	// ===== Items|Info =====

	/**
	 * Triggers an asynchronous load and refresh of item definitions.
	 * Item definitions are a mapping of "definition IDs" (integers between 1 and 999999999) to a set of string properties. Some of these properties are required to display items on the Steam community web site.
	 * Other properties can be defined by applications. There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for -
	 * adding new item types without a client patch.
	 * Triggers a SteamInventoryDefinitionUpdate_t callback.
	 *
	 * @return bool - This call will always return true.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool LoadItemDefinitions() const;

	/**
	 * Start retrieving all items in the current users inventory.
	 *
	 * NOTE: Calls to this function are subject to rate limits and may return cached results if called too frequently. It is suggested that you call this function only when you are about to display the user's full inventory, -
	 * or if you expect that the inventory may have changed.
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.
	 * Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GetAllItems(FSteamInventoryResult& ResultHandle) const;

	/**
	 * Get the list of item definition ids that a user can be granted.
	 * You should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.
	 *
	 * @param FUniqueNetIdRepl UserId - The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.
	 * @param TArray<FSteamItemDef> & Items - 	Returns the item definition ids by copying them into this array.
	 * @return bool
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GetEligiblePromoItemDefinitionIDs(FUniqueNetIdRepl UserId, TArray<FSteamItemDef>& Items) const;

	/**
	 * Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.
	 * These item definitions may not necessarily be contiguous integers.
	 * This should be called in response to a SteamInventoryDefinitionUpdate_t callback. There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55)
	 * and does not allow for adding new item types without a client patch.
	 *
	 * @param TArray<FSteamItemDef> & Items - Returns the item definitions by copying them into this array.
	 * @return bool - This call returns true upon success. It only returns false if item definitions have not been loaded from the server, or no item defintions exist for the current application.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GetItemDefinitionIDs(TArray<FSteamItemDef>& Items) const;

	/**
	 * Gets a string property from the specified item definition.
	 * Gets a property value for a specific item definition.
	 * Note that some properties (for example, "name") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.
	 * Pass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.
	 *
	 * @param FSteamItemDef Definition - The item definition to get the properties for.
	 * @param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.
	 * @param FString & Value - Returns the value associated with pchPropertyName.
	 * @return bool - This returns true upon success; otherwise, false indicating that the item definitions have not been loaded from the server, or no item definitions exist for the current application, or the property name was not found in the item definition.
	 * The associated value is returned via pchValueBuffer, and the total number of bytes required to hold the value is available from punValueBufferSizeOut. It's recommended to call this function twice, the first time with pchValueBuffer
	 * set to NULL and punValueBufferSizeOut set to zero to get the size required for the buffer for the subsequent call.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GetItemDefinitionProperty(FSteamItemDef Definition, const FString& PropertyName, FString& Value) const;

	/**
	 * Gets the state of a subset of the current user's inventory.
	 * The subset is specified by an array of item instance IDs.
	 * The results from this call can be serialized using SerializeResult and passed to other players to "prove" that the current user owns specific items, without exposing the user's entire inventory.
	 * For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @param const TArray<FSteamItemInstanceID> & InstanceIDs - A list of the item instance ids to update the state of.
	 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GetItemsByID(FSteamInventoryResult& ResultHandle, const TArray<FSteamItemInstanceID>& InstanceIDs) const;

	/**
	 * After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.
	 *
	 * @param FSteamItemDef ItemDef - The item definition id to retrieve the price for
	 * @param int64 & CurrentPrice - The price pointer to populate. Prices are rendered in the user's local currency.
	 * @param int64 & BasePrice
	 * @return bool - true upon success, indicating that pPrice has been successfully filled with the price for the given item definition id.
	 * false if the parameters are invalid or if there is no price for the given item definition id.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GetItemPrice(FSteamItemDef ItemDef, int64& CurrentPrice, int64& BasePrice) const;

	/**
	 * After a successful call to RequestPrices, you can call this method to get all the pricing for applicable item definitions. Use the result of GetNumItemsWithPrices as the the size of the arrays that you pass in.
	 *
	 * @param TArray<FSteamItemPriceData> & ItemData - The array of item definition ids to populate
	 * @return bool - true upon success, indicating that pArrayItemDefs and pPrices have been successfully filled with the item definition ids and prices of items that are for sale. false if the parameters are invalid
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GetItemsWithPrices(TArray<FSteamItemPriceData>& ItemData) const;

	/**
	 * After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.
	 *
	 * @return int32
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		int32 GetNumItemsWithPrices() const;

	/**
	 * Gets the dynamic properties from an item in an inventory result set.
	 * Property names are always composed of ASCII letters, numbers, and/or underscores.
	 * If the results do not fit in the given buffer, partial results may be copied.
	 *
	 * @param FSteamInventoryResult ResultHandle - The result handle containing the item to get the properties of.
	 * @param int32 ItemIndex
	 * @param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.
	 * @param FString & Value - Returns the value associated with pchPropertyName.
	 * @return bool - This returns true upon success; otherwise, false indicating that the inventory result handle was invalid or the provided index does not contain an item.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GetResultItemProperty(FSteamInventoryResult ResultHandle, int32 ItemIndex, const FString& PropertyName, FString& Value) const;

	/**
	 * Get the items associated with an inventory result handle.
	 *
	 * @param FSteamInventoryResult ResultHandle - The inventory result handle to get the items for.
	 * @param TArray<FSteamItemDetails> & ItemsArray - The details are returned by copying them into this array.
	 * @return bool - true if the call was successful, otherwise false.
	 * Potential failure reasons include:
	 * resultHandle is invalid or the inventory result handle is not ready.
	 * pOutItemsArray is not large enough to hold the array.
	 * The user has no items.
	 * If the call is successful then punItemDefIDsArraySize will contain the number of item definitions available.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool GetResultItems(FSteamInventoryResult ResultHandle, TArray<FSteamItemDetails>& ItemsArray) const;


	// ===== Utilities =====

	/**
	 * Checks whether an inventory result handle belongs to the specified Steam ID.
	 * This is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.
	 *
	 * @param FSteamInventoryResult ResultHandle - 	The inventory result handle to check the Steam ID on.
	 * @param FSteamID SteamIDExpected - The Steam ID to verify.
	 * @return bool - true if the result belongs to the target steam ID; otherwise, false.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool CheckResultSteamID(FSteamInventoryResult ResultHandle, FUniqueNetIdRepl UserId) const;

	/**
	 * Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.
	 * A result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players. This is a secure way of preventing hackers from lying about -
	 * posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer. The size of a serialized result depends on the number items which are being serialized. When securely -
	 * transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.
	 * Results have a built-in timestamp which will be considered "expired" after an hour has elapsed. See DeserializeResult for expiration handling.
	 * If this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.
	 *
	 * @param FSteamInventoryResult ResultHandle - The inventory result handle to serialize.
	 * @param TArray<uint8> & Buffer - The buffer that the serialized result will be copied into.
	 * @return bool - true upon success, indicating that punOutBufferSize has been successfully filled with the size of the buffer, and if pOutBuffer points to a buffer of sufficient size then it is filled out as well.
	 * false under the following conditions:
	 * The function was not called by a regular user. This call is not supported on GameServers.
	 * resultHandle is invalid or the inventory result handle is not ready.
	 * The value passed into punOutBufferSize was smaller then expected and pOutBuffer was not NULL.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool SerializeResult(FSteamInventoryResult ResultHandle, TArray<uint8>& Buffer) const;

	/**
	 * Deserializes a result set and verifies the signature bytes.
	 * This call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode. The "expired" result could indicate that the data may be out of date
	 * not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated. You could compare the timestamp from -
	 * GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the "expired" result code and continue as normal, or you could request the player with expired data to send an updated result set.
	 * You should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.
	 * NOTE: The bRESERVED_MUST_BE_FALSE parameter is reserved for future use and should never be set to true.
	 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.
	 *
	 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.
	 * @param TArray<uint8> Buffer - The buffer to deserialize.
	 * @return bool - Always returns true and then delivers error codes via GetResultStatus.
	 * Returns a new result handle via pResultHandle.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Steamworks|Inventory")
		bool DeserializeResult(FSteamInventoryResult& ResultHandle, TArray<uint8> Buffer) const;

	/**
	 * Destroys a result handle and frees all associated memory.
	 *
	 * @param FSteamInventoryResult ResultHandle - The inventory result handle to destroy.
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Inventory")
		void DestroyResult(FSteamInventoryResult ResultHandle);
	
	/**
	 * Find out the status of an asynchronous inventory result handle.
	 * This is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.
	 *
	 * @param FSteamInventoryResult ResultHandle - 	The inventory result handle to get the status for.
	 * @return ESteamResult - Whether the call was successful or not.
	 * Possible values:
	 *  k_EResultPending - Still in progress.
	 *  k_EResultOK - Done, the request has completed successfully and the result is ready.
	 *  k_EResultExpired - Done, result ready, maybe out of date (see DeserializeResult)
	 *  k_EResultInvalidParam - ERROR: Invalid API call parameters.
	 *  k_EResultServiceUnavailable - ERROR: Service temporarily down, you may retry later.
	 *  k_EResultLimitExceeded - ERROR: Operation would exceed per-user inventory limits.
	 *  k_EResultFail - ERROR: Generic error.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steamworks|Inventory")
		ESteamResult GetResultStatus(FSteamInventoryResult ResultHandle) const;

	/**
	 * Gets the server time at which the result was generated.
	 *
	 * @param FSteamInventoryResult ResultHandle - 	The inventory result handle to get the timestamp for.
	 * @return int32 - The timestamp is provided as Unix epoch time (Time since Jan 1st, 1970)
	 * You can compare this value against ISteamUtils::GetServerRealTime to determine the age of the result.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steamworks|Inventory")
		int32 GetResultTimestamp(FSteamInventoryResult ResultHandle) const;


	// ===== Cached Values =====

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steamworks|Inventory|Cache")
		FSteamItemDetails GetCachedISC() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steamworks|Inventory|Cache")
		FSteamItemDetails GetCachedBET() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steamworks|Inventory|Cache")
		TArray<FSteamItemDetails> GetCachedItems() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steamworks|Inventory|Cache")
		FSteamItemDetails GetCachedItem(FSteamItemDef ItemDef) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steamworks|Inventory|Cache")
		TSet<FSteamItemDef> GetCachedOwningItems() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steamworks|Inventory|Cache")
		bool CheckHasOwnedViaCache(FSteamItemDef ItemDef) const;

	UFUNCTION(BlueprintCallable, Category = "Steamworks|Inventory|Cache")
		void CacheInventoryValues(FSteamInventoryResult ResultHandle);


	// ===== Delegate =====
private:
	STEAM_CALLBACK_MANUAL(USteamworksInventorySubsystem, OnSteamInventoryDefinitionUpdate, SteamInventoryDefinitionUpdate_t, OnSteamInventoryDefinitionUpdateCallback);
	STEAM_CALLBACK_MANUAL(USteamworksInventorySubsystem, OnSteamInventoryFullUpdate, SteamInventoryFullUpdate_t, OnSteamInventoryFullUpdateCallback);
	STEAM_CALLBACK_MANUAL(USteamworksInventorySubsystem, OnSteamInventoryResultReady, SteamInventoryResultReady_t, OnSteamInventoryResultReadyCallback);
};


// ================================================
//   Steamworks Inventory Async Request Prices
// ================================================

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSteamInventoryRequestPricesCallbackPin, ESteamResult, Result, FString, Currency);

UCLASS(BlueprintType)
class STEAMWORKSEXTENSION_API USteamworksInventoryRequestPrices : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
		FSteamInventoryRequestPricesCallbackPin OnCallFailed;
	UPROPERTY(BlueprintAssignable)
		FSteamInventoryRequestPricesCallbackPin OnRequestComplete;

	//
	// Request prices for all item definitions that can be purchased in the user's local currency. 
	// A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code. After that,
	// you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.
	//
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Inventory", meta = (BlueprintInternalUseOnly = "true"))
		static USteamworksInventoryRequestPrices* RequestItemsWithPrices(USteamworksInventorySubsystem* Subsystem);

	virtual void Activate() override;

private:
	UPROPERTY()
		TObjectPtr<USteamworksInventorySubsystem> OwningSubsystem;

	void OnSteamInventoryRequestPricesResult(SteamInventoryRequestPricesResult_t* pParam, bool bFailure);

	CCallResult<USteamworksInventoryRequestPrices, SteamInventoryRequestPricesResult_t> m_OnSteamInventoryRequestPricesResult;
};


// ================================================
//   Steamworks Inventory Async Request Promo
// ================================================

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSteamInventoryEligiblePromoItemDefIDsCallbackPin, ESteamResult, Result, const TArray<FSteamItemDef>&, Items, int32, NumEligiblePromoItemDefs, bool, bCachedData);

UCLASS(BlueprintType)
class STEAMWORKSEXTENSION_API USteamworksInventoryEligiblePromoItemDefIDs : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
		FSteamInventoryEligiblePromoItemDefIDsCallbackPin OnCallFailed;
	UPROPERTY(BlueprintAssignable)
		FSteamInventoryEligiblePromoItemDefIDsCallbackPin OnRequestComplete;

	//
	// Request the list of "eligible" promo items that can be manually granted to the given user.
	// These are promo items of type "manual" that won't be granted automatically. An example usage of this is an item that becomes available every week.
	// After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.
	//
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Inventory", meta = (BlueprintInternalUseOnly = "true"))
		static USteamworksInventoryEligiblePromoItemDefIDs* RequestEligiblePromoItemDefinitionsIDs(USteamworksInventorySubsystem* Subsystem, FUniqueNetIdRepl UserId);

	virtual void Activate() override;

private:
	UPROPERTY()
		TObjectPtr<USteamworksInventorySubsystem> OwningSubsystem;

	UPROPERTY()
		FUniqueNetIdRepl UserUniqueNetId;

	void OnSteamInventoryRequestEligiblePromoItem(SteamInventoryEligiblePromoItemDefIDs_t* pParam, bool bFailure);

	CCallResult<USteamworksInventoryEligiblePromoItemDefIDs, SteamInventoryEligiblePromoItemDefIDs_t> m_OnSteamInventoryEligiblePromoItemDefIDs;
};


// ================================================
//   Steamworks Inventory Async Start Purchase
// ================================================

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSteamInventoryStartPurchaseCallbackPin, ESteamResult, Result, int64, OrderID, int64, TransID);

UCLASS(BlueprintType)
class STEAMWORKSEXTENSION_API USteamworksInventoryStartPurchase : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
		FSteamInventoryStartPurchaseCallbackPin OnCallFailed;
	UPROPERTY(BlueprintAssignable)
		FSteamInventoryStartPurchaseCallbackPin OnComplete;

	//
	// Starts the purchase process for the user, given a "shopping cart" of item definitions that the user would like to buy. 
	// The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.
	//
	UFUNCTION(BlueprintCallable, Category = "Steamworks|Inventory", meta = (BlueprintInternalUseOnly = "true"))
		static USteamworksInventoryStartPurchase* StartPurchase(USteamworksInventorySubsystem* Subsystem, const TMap<FSteamItemDef, int32>& Items);

	virtual void Activate() override;

private:
	UPROPERTY()
		TObjectPtr<USteamworksInventorySubsystem> OwningSubsystem;

	UPROPERTY()
		TMap<FSteamItemDef, int32> ItemsToPurchase;

	void OnSteamInventoryStartPurchase(SteamInventoryStartPurchaseResult_t* pParam, bool bFailure);

	CCallResult<USteamworksInventoryStartPurchase, SteamInventoryStartPurchaseResult_t> m_OnSteamInventoryStartPurchaseResult;
};