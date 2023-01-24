// Copyright 2022 RutenStudio

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/OnlineReplStructs.h"

#include <steam/steam_api.h>

#include "SteamworksAPI.generated.h"


// ================================================
//   Steamworks API Enum Wrappers
// ================================================

// ===== Steam =====

UENUM(BlueprintType)
enum class ESteamResult : uint8
{
	None									= 0 UMETA(DisplayName = "None"),
	OK										= 1 UMETA(DisplayName = "OK"),
	Fail									= 2 UMETA(DisplayName = "Fail"),
	NoConnection							= 3 UMETA(DisplayName = "NoConnection"),
	InvalidPassword							= 5 UMETA(DisplayName = "InvalidPassword"),
	LoggedInElsewhere						= 6 UMETA(DisplayName = "LoggedInElsewhere"),
	InvalidProtocolVer						= 7 UMETA(DisplayName = "InvalidProtocolVer"),
	InvalidParam							= 8 UMETA(DisplayName = "InvalidParam"),
	FileNotFound							= 9 UMETA(DisplayName = "FileNotFound"),
	Busy									= 10 UMETA(DisplayName = "Busy"),
	InvalidState							= 11 UMETA(DisplayName = "InvalidState"),
	InvalidName								= 12 UMETA(DisplayName = "InvalidName"),
	InvalidEmail							= 13 UMETA(DisplayName = "InvalidEmail"),
	DuplicateName							= 14 UMETA(DisplayName = "DuplicateName"),
	AccessDenied							= 15 UMETA(DisplayName = "AccessDenied"),
	Timeout									= 16 UMETA(DisplayName = "Timeout"),
	Banned									= 17 UMETA(DisplayName = "Banned"),
	AccountNotFound							= 18 UMETA(DisplayName = "AccountNotFound"),
	InvalidSteamID							= 19 UMETA(DisplayName = "InvalidSteamID"),
	ServiceUnavailable						= 20 UMETA(DisplayName = "ServiceUnavailable"),
	NotLoggedOn								= 21 UMETA(DisplayName = "NotLoggedOn"),
	Pending									= 22 UMETA(DisplayName = "Pending"),
	EncryptionFailure						= 23 UMETA(DisplayName = "EncryptionFailure"),
	InsufficientPrivilege					= 24 UMETA(DisplayName = "InsufficientPrivilege"),
	LimitExceeded							= 25 UMETA(DisplayName = "LimitExceeded"),
	Revoked									= 26 UMETA(DisplayName = "Revoked"),
	Expired									= 27 UMETA(DisplayName = "Expired"),
	AlreadyRedeemed							= 28 UMETA(DisplayName = "AlreadyRedeemed"),
	DuplicateRequest						= 29 UMETA(DisplayName = "DuplicateRequest"),
	AlreadyOwned							= 30 UMETA(DisplayName = "AlreadyOwned"),
	IPNotFound								= 31 UMETA(DisplayName = "IPNotFound"),
	PersistFailed							= 32 UMETA(DisplayName = "PersistFailed"),
	LockingFailed							= 33 UMETA(DisplayName = "LockingFailed"),
	LogonSessionReplaced					= 34 UMETA(DisplayName = "LogonSessionReplaced"),
	ConnectFailed							= 35 UMETA(DisplayName = "ConnectFailed"),
	HandshakeFailed							= 36 UMETA(DisplayName = "HandshakeFailed"),
	IOFailure								= 37 UMETA(DisplayName = "IOFailure"),
	RemoteDisconnect						= 38 UMETA(DisplayName = "RemoteDisconnect"),
	ShoppingCartNotFound					= 39 UMETA(DisplayName = "ShoppingCartNotFound"),
	Blocked									= 40 UMETA(DisplayName = "Blocked"),
	Ignored									= 41 UMETA(DisplayName = "Ignored"),
	NoMatch									= 42 UMETA(DisplayName = "NoMatch"),
	AccountDisabled							= 43 UMETA(DisplayName = "AccountDisabled"),
	ServiceReadOnly							= 44 UMETA(DisplayName = "ServiceReadOnly"),
	AccountNotFeatured						= 45 UMETA(DisplayName = "AccountNotFeatured"),
	AdministratorOK							= 46 UMETA(DisplayName = "AdministratorOK"),
	ContentVersion							= 47 UMETA(DisplayName = "ContentVersion"),
	TryAnotherCM							= 48 UMETA(DisplayName = "TryAnotherCM"),
	PasswordRequiredToKickSession			= 49 UMETA(DisplayName = "PasswordRequiredToKickSession"),
	AlreadyLoggedInElsewhere				= 50 UMETA(DisplayName = "AlreadyLoggedInElsewhere"),
	Suspended								= 51 UMETA(DisplayName = "Suspended"),
	Cancelled								= 52 UMETA(DisplayName = "Cancelled"),
	DataCorruption							= 53 UMETA(DisplayName = "DataCorruption"),
	DiskFull								= 54 UMETA(DisplayName = "DiskFull"),
	RemoteCallFailed						= 55 UMETA(DisplayName = "RemoteCallFailed"),
	PasswordUnset							= 56 UMETA(DisplayName = "PasswordUnset"),
	ExternalAccountUnlinked					= 57 UMETA(DisplayName = "ExternalAccountUnlinked"),
	PSNTicketInvalid						= 58 UMETA(DisplayName = "PSNTicketInvalid"),
	ExternalAccountAlreadyLinked			= 59 UMETA(DisplayName = "ExternalAccountAlreadyLinked"),
	RemoteFileConflict						= 60 UMETA(DisplayName = "RemoteFileConflict"),
	IllegalPassword							= 61 UMETA(DisplayName = "IllegalPassword"),
	SameAsPreviousValue						= 62 UMETA(DisplayName = "SameAsPreviousValue"),
	AccountLogonDenied						= 63 UMETA(DisplayName = "AccountLogonDenied"),
	CannotUseOldPassword					= 64 UMETA(DisplayName = "CannotUseOldPassword"),
	InvalidLoginAuthCode					= 65 UMETA(DisplayName = "InvalidLoginAuthCode"),
	AccountLogonDeniedNoMail				= 66 UMETA(DisplayName = "AccountLogonDeniedNoMail"),
	HardwareNotCapableOfIPT					= 67 UMETA(DisplayName = "HardwareNotCapableOfIPT"),
	IPTInitError							= 68 UMETA(DisplayName = "IPTInitError"),
	ParentalControlRestricted				= 69 UMETA(DisplayName = "ParentalControlRestricted"),
	FacebookQueryError						= 70 UMETA(DisplayName = "FacebookQueryError"),
	ExpiredLoginAuthCode					= 71 UMETA(DisplayName = "ExpiredLoginAuthCode"),
	IPLoginRestrictionFailed				= 72 UMETA(DisplayName = "IPLoginRestrictionFailed"),
	AccountLockedDown						= 73 UMETA(DisplayName = "AccountLockedDown"),
	AccountLogonDeniedVerifiedEmailRequired = 74 UMETA(DisplayName = "AccountLogonDeniedVerifiedEmailRequired"),
	NoMatchingURL							= 75 UMETA(DisplayName = "NoMatchingURL"),
	BadResponse								= 76 UMETA(DisplayName = "BadResponse"),
	RequirePasswordReEntry					= 77 UMETA(DisplayName = "RequirePasswordReEntry"),
	ValueOutOfRange							= 78 UMETA(DisplayName = "ValueOutOfRange"),
	UnexpectedError							= 79 UMETA(DisplayName = "UnexpectedError"),
	Disabled								= 80 UMETA(DisplayName = "Disabled"),
	InvalidCEGSubmission					= 81 UMETA(DisplayName = "InvalidCEGSubmission"),
	RestrictedDevice						= 82 UMETA(DisplayName = "RestrictedDevice"),
	RegionLocked							= 83 UMETA(DisplayName = "RegionLocked"),
	RateLimitExceeded						= 84 UMETA(DisplayName = "RateLimitExceeded"),
	AccountLoginDeniedNeedTwoFactor			= 85 UMETA(DisplayName = "AccountLoginDeniedNeedTwoFactor"),
	ItemDeleted								= 86 UMETA(DisplayName = "ItemDeleted"),
	AccountLoginDeniedThrottle				= 87 UMETA(DisplayName = "AccountLoginDeniedThrottle"),
	TwoFactorCodeMismatch					= 88 UMETA(DisplayName = "TwoFactorCodeMismatch"),
	TwoFactorActivationCodeMismatch			= 89 UMETA(DisplayName = "TwoFactorActivationCodeMismatch"),
	AccountAssociatedToMultiplePartners		= 90 UMETA(DisplayName = "AccountAssociatedToMultiplePartners"),
	NotModified								= 91 UMETA(DisplayName = "NotModified"),
	NoMobileDevice							= 92 UMETA(DisplayName = "NoMobileDevice"),
	TimeNotSynced							= 93 UMETA(DisplayName = "TimeNotSynced"),
	SmsCodeFailed							= 94 UMETA(DisplayName = "SmsCodeFailed"),
	AccountLimitExceeded					= 95 UMETA(DisplayName = "AccountLimitExceeded"),
	AccountActivityLimitExceeded			= 96 UMETA(DisplayName = "AccountActivityLimitExceeded"),
	PhoneActivityLimitExceeded				= 97 UMETA(DisplayName = "PhoneActivityLimitExceeded"),
	RefundToWallet							= 98 UMETA(DisplayName = "RefundToWallet"),
	EmailSendFailure						= 99 UMETA(DisplayName = "EmailSendFailure"),
	NotSettled								= 100 UMETA(DisplayName = "NotSettled"),
	NeedCaptcha								= 101 UMETA(DisplayName = "NeedCaptcha"),
	GSLTDenied								= 102 UMETA(DisplayName = "GSLTDenied"),
	GSOwnerDenied							= 103 UMETA(DisplayName = "GSOwnerDenied"),
	InvalidItemType							= 104 UMETA(DisplayName = "InvalidItemType"),
	IPBanned								= 105 UMETA(DisplayName = "IPBanned"),
	GSLTExpired								= 106 UMETA(DisplayName = "GSLTExpired"),
	InsufficientFunds						= 107 UMETA(DisplayName = "InsufficientFunds"),
	TooManyPending							= 108 UMETA(DisplayName = "TooManyPending")
};


// ===== Overlay =====

UENUM(BlueprintType)
enum class ESteamGameOverlayTypes : uint8
{
	Friends						UMETA(DisplayName = "Friends"),
	Community					UMETA(DisplayName = "Community"),
	Players						UMETA(DisplayName = "Players"),
	Settings					UMETA(DisplayName = "Settings"),
	OfficialGameGroup			UMETA(DisplayName = "OfficialGameGroup"),
	Stats						UMETA(DisplayName = "Stats"),
	Achievements				UMETA(DisplayName = "Achievements")
};

UENUM(Blueprintable)
enum class ESteamGameUserOverlayTypes : uint8
{
	SteamID						UMETA(DisplayName = "Steam ID"),
	Chat						UMETA(DisplayName = "Chat"),
	JoinTrade					UMETA(DisplayName = "Join Trade"),
	Stats						UMETA(DisplayName = "Stats"),
	Achievements				UMETA(DisplayName = "Achievements"),
	FriendAdd					UMETA(DisplayName = "Friend Add"),
	FriendRemove				UMETA(DisplayName = "Friend Remove"),
	FriendRequestAccept			UMETA(DisplayName = "Friend Request Accept"),
	FriendRequestIgnore			UMETA(DisplayName = "Friend Request Ignore")
};

UENUM(BlueprintType)
enum class ESteamOverlayToStoreFlag : uint8
{
	None				= 0 UMETA(DisplayName = "None"),
	AddToCart			= 1 UMETA(DisplayName = "Add To Cart"),
	AddToCartAndShow	= 2 UMETA(DisplayName = "Add To Cart And Show")
};


// ===== Inventory =====

UENUM(BlueprintType)
enum class ESteamItemFlags_BP : uint8
{
	NoTrade			= 0	UMETA(DisplayName = "No Trade"),
	ItemRemoved		= 8	UMETA(DisplayName = "Item Removed"),
	ItemConsumed	= 9	UMETA(DisplayName = "Item Consumed"),
};


// ===== Friends =====

UENUM(BlueprintType)
enum class ESteamChatEntryType : uint8
{
	Invalid				= 0 UMETA(DisplayName = "Invalid"),
	ChatMessage			= 1 UMETA(DisplayName = "ChatMessage"),
	Typing				= 2 UMETA(DisplayName = "Typing"),
	InviteGame			= 3 UMETA(DisplayName = "InviteGame"),
	Emote				= 4 UMETA(DisplayName = "Emote"),
	LeftConversation	= 6 UMETA(DisplayName = "LeftConversation"),
	Entered				= 7 UMETA(DisplayName = "Entered"),
	WasKicked			= 8 UMETA(DisplayName = "WasKicked"),
	WasBanned			= 9 UMETA(DisplayName = "WasBanned"),
	Disconnected		= 10 UMETA(DisplayName = "Disconnected"),
	HistoricalChat		= 11 UMETA(DisplayName = "HistoricalChat"),
	LinkBlocked			= 14 UMETA(DisplayName = "LinkBlocked")
};

UENUM(Blueprintable)
enum class ESteamAvatarSizes : uint8
{
	SteamAvatar_INVALID = 0		UMETA(DisplayName = "Invalid"),
	SteamAvatar_Small = 1		UMETA(DisplayName = "Small"),
	SteamAvatar_Medium = 2		UMETA(DisplayName = "Medium"),
	SteamAvatar_Large = 3		UMETA(DisplayName = "Large")
};

UENUM(BlueprintType)
enum class ESteamPersonaChange : uint8
{
	None						= 0 UMETA(DisplayName = "None"),
	ChangeName					= 1 UMETA(DisplayName = "ChangedName"),
	ChangeStatus				= 2 UMETA(DisplayName = "ChangedStatus"),
	ChangeComeOnline			= 3 UMETA(DisplayName = "ComeOnline"),
	ChangeGoneOffline			= 4 UMETA(DisplayName = "GoneOffline"),
	ChangeGamePlayed			= 5 UMETA(DisplayName = "ChangedGame"),
	ChangeGameServer			= 6 UMETA(DisplayName = "ChangeServer"),
	ChangeAvatar				= 7 UMETA(DisplayName = "ChangedAvatar"),
	ChangeJoinedSource			= 8 UMETA(DisplayName = "ChangedSource"),
	ChangeLeftSource			= 9 UMETA(DisplayName = "LeftSource"),
	ChangeRelationshipChanged	= 10 UMETA(DisplayName = "ChangedRelationship"),
	ChangeNameFirstSet			= 11 UMETA(DisplayName = "ChangedFirstName"),
	ChangeFacebookInfo			= 12 UMETA(DisplayName = "ChangedFacebookInfo"),
	ChangeNickname				= 13 UMETA(DisplayName = "ChangedNickname"),
	ChangeSteamLevel			= 14 UMETA(DisplayName = "ChangeSteamLevel"),
	ChangeErr					= 15 UMETA(DisplayName = "Error")
};


// ===== Matchmaking =====

UENUM(BlueprintType)
enum class ESteamChatMemberStateChange : uint8
{
	Entered			= 0 UMETA(DisplayName = "Entered"),
	Left			= 1 UMETA(DisplayName = "Left"),
	Disconnected	= 2 UMETA(DisplayName = "Disconnected"),
	Kicked			= 3 UMETA(DisplayName = "Kicked"),
	Banned			= 4 UMETA(DisplayName = "Banned")
};

UENUM(BlueprintType)
enum class ESteamChatRoomEnterResponse : uint8
{
	Unknown				= 0 UMETA(DisplayName = "Unknown"),
	Success				= 1 UMETA(DisplayName = "Success"),
	DoesntExist			= 2 UMETA(DisplayName = "DoesntExist"),
	NotAllowed			= 3 UMETA(DisplayName = "NotAllowed"),
	Full				= 4 UMETA(DisplayName = "Full"),
	Error				= 5 UMETA(DisplayName = "Error"),
	Banned				= 6 UMETA(DisplayName = "Banned"),
	Limited				= 7 UMETA(DisplayName = "Limited"),
	ClanDisabled		= 8 UMETA(DisplayName = "ClanDisabled"),
	CommunityBan		= 9 UMETA(DisplayName = "CommunityBan"),
	MemberBlockedYou	= 10 UMETA(DisplayName = "MemberBlockedYou"),
	YouBlockedMember	= 11 UMETA(DisplayName = "YouBlockedMember")
};


// ================================================
//   Steamworks API Struct Warappers
// ================================================

// ===== Base =====

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FUint64Ex
{
	GENERATED_BODY()

		uint64 Value;

	operator uint64() { return Value; }
	operator uint64() const { return Value; }

	FUint64Ex() :
		Value(0) {}
	FUint64Ex(uint64 value) :
		Value(value) {}
};

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FUint32Ex
{
	GENERATED_BODY()

		uint32 Value;

	operator uint32() { return Value; }
	operator uint32() const { return Value; }

	FUint32Ex() :
		Value(0) {}
	FUint32Ex(uint32 value) :
		Value(value) {}
};

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FInt32Ex
{
	GENERATED_BODY()

		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		int32 Value;

	operator int32() { return Value; }
	operator int32() const { return Value; }

	FInt32Ex() :
		Value(0) {}
	FInt32Ex(int32 InValue) :
		Value(InValue) {}
};

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FInt16Ex
{
	GENERATED_BODY()

		int16 Value;

	operator int16() { return Value; }
	operator int16() const { return Value; }

	FInt16Ex() :
		Value(0) {}
	FInt16Ex(int16 InValue) :
		Value(InValue) {}
};


// ===== Inventory =====

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FSteamItemDef : public FInt32Ex
{
	GENERATED_BODY()
		using FInt32Ex::FInt32Ex;
};

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FSteamItemInstanceID : public FUint64Ex
{
	GENERATED_BODY()
		using FUint64Ex::FUint64Ex;
};

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FSteamInventoryResult : public FInt32Ex
{
	GENERATED_BODY()
		using FInt32Ex::FInt32Ex;
};

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FSteamItemDetails
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
		FSteamItemInstanceID ItemID;

	UPROPERTY(BlueprintReadWrite)
		FSteamItemDef Definition;

	UPROPERTY(BlueprintReadWrite)
		int32 Quantity;

	UPROPERTY(BlueprintReadWrite)
		TArray<ESteamItemFlags_BP> Flags;

	FSteamItemDetails() {}

	FSteamItemDetails(FSteamItemInstanceID instance, FSteamItemDef itemdef, int32 quantity, const TArray<ESteamItemFlags_BP>& flags) :
		ItemID(instance), Definition(itemdef), Quantity(quantity), Flags(flags) {}

	FSteamItemDetails(const SteamItemDetails_t& details)
	{
		ItemID = details.m_itemId;
		Definition = details.m_iDefinition;
		Quantity = details.m_unQuantity;
		if (details.m_unFlags & 1 << (int32)ESteamItemFlags_BP::NoTrade)
		{
			Flags.Add(ESteamItemFlags_BP::NoTrade);
		}
		if (details.m_unFlags & 1 << (int32)ESteamItemFlags_BP::ItemRemoved)
		{
			Flags.Add(ESteamItemFlags_BP::ItemRemoved);
		}
		if (details.m_unFlags & 1 << (int32)ESteamItemFlags_BP::ItemConsumed)
		{
			Flags.Add(ESteamItemFlags_BP::ItemConsumed);
		}
	}
};

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FSteamInventoryUpdateHandle : public FUint64Ex
{
	GENERATED_BODY()
		using FUint64Ex::FUint64Ex;
};

USTRUCT(BlueprintType)
struct STEAMWORKSEXTENSION_API FSteamItemPriceData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
		FSteamItemDef ItemDef;

	UPROPERTY(BlueprintReadWrite)
		int64 CurrentPrice;

	UPROPERTY(BlueprintReadWrite)
		int64 BasePrice;

	FSteamItemPriceData() {}
	FSteamItemPriceData(FSteamItemDef def, int64 currentPrice, int64 basePrice) : ItemDef(def), CurrentPrice(currentPrice), BasePrice(basePrice) {}
};

