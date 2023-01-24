// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMWORKSEXTENSION_SteamworksAPI_generated_h
#error "SteamworksAPI.generated.h already included, missing '#pragma once' in SteamworksAPI.h"
#endif
#define STEAMWORKSEXTENSION_SteamworksAPI_generated_h

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_271_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUint64Ex_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FUint64Ex>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_287_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUint32Ex_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FUint32Ex>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_303_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInt32Ex_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FInt32Ex>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_320_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInt16Ex_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FInt16Ex>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_339_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemDef_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FInt32Ex Super;


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FSteamItemDef>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_346_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FUint64Ex Super;


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FSteamItemInstanceID>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_353_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryResult_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FInt32Ex Super;


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FSteamInventoryResult>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_360_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemDetails_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FSteamItemDetails>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_402_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FUint64Ex Super;


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FSteamInventoryUpdateHandle>();

#define FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_409_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemPriceData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<struct FSteamItemPriceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h


#define FOREACH_ENUM_ESTEAMRESULT(op) \
	op(ESteamResult::None) \
	op(ESteamResult::OK) \
	op(ESteamResult::Fail) \
	op(ESteamResult::NoConnection) \
	op(ESteamResult::InvalidPassword) \
	op(ESteamResult::LoggedInElsewhere) \
	op(ESteamResult::InvalidProtocolVer) \
	op(ESteamResult::InvalidParam) \
	op(ESteamResult::FileNotFound) \
	op(ESteamResult::Busy) \
	op(ESteamResult::InvalidState) \
	op(ESteamResult::InvalidName) \
	op(ESteamResult::InvalidEmail) \
	op(ESteamResult::DuplicateName) \
	op(ESteamResult::AccessDenied) \
	op(ESteamResult::Timeout) \
	op(ESteamResult::Banned) \
	op(ESteamResult::AccountNotFound) \
	op(ESteamResult::InvalidSteamID) \
	op(ESteamResult::ServiceUnavailable) \
	op(ESteamResult::NotLoggedOn) \
	op(ESteamResult::Pending) \
	op(ESteamResult::EncryptionFailure) \
	op(ESteamResult::InsufficientPrivilege) \
	op(ESteamResult::LimitExceeded) \
	op(ESteamResult::Revoked) \
	op(ESteamResult::Expired) \
	op(ESteamResult::AlreadyRedeemed) \
	op(ESteamResult::DuplicateRequest) \
	op(ESteamResult::AlreadyOwned) \
	op(ESteamResult::IPNotFound) \
	op(ESteamResult::PersistFailed) \
	op(ESteamResult::LockingFailed) \
	op(ESteamResult::LogonSessionReplaced) \
	op(ESteamResult::ConnectFailed) \
	op(ESteamResult::HandshakeFailed) \
	op(ESteamResult::IOFailure) \
	op(ESteamResult::RemoteDisconnect) \
	op(ESteamResult::ShoppingCartNotFound) \
	op(ESteamResult::Blocked) \
	op(ESteamResult::Ignored) \
	op(ESteamResult::NoMatch) \
	op(ESteamResult::AccountDisabled) \
	op(ESteamResult::ServiceReadOnly) \
	op(ESteamResult::AccountNotFeatured) \
	op(ESteamResult::AdministratorOK) \
	op(ESteamResult::ContentVersion) \
	op(ESteamResult::TryAnotherCM) \
	op(ESteamResult::PasswordRequiredToKickSession) \
	op(ESteamResult::AlreadyLoggedInElsewhere) \
	op(ESteamResult::Suspended) \
	op(ESteamResult::Cancelled) \
	op(ESteamResult::DataCorruption) \
	op(ESteamResult::DiskFull) \
	op(ESteamResult::RemoteCallFailed) \
	op(ESteamResult::PasswordUnset) \
	op(ESteamResult::ExternalAccountUnlinked) \
	op(ESteamResult::PSNTicketInvalid) \
	op(ESteamResult::ExternalAccountAlreadyLinked) \
	op(ESteamResult::RemoteFileConflict) \
	op(ESteamResult::IllegalPassword) \
	op(ESteamResult::SameAsPreviousValue) \
	op(ESteamResult::AccountLogonDenied) \
	op(ESteamResult::CannotUseOldPassword) \
	op(ESteamResult::InvalidLoginAuthCode) \
	op(ESteamResult::AccountLogonDeniedNoMail) \
	op(ESteamResult::HardwareNotCapableOfIPT) \
	op(ESteamResult::IPTInitError) \
	op(ESteamResult::ParentalControlRestricted) \
	op(ESteamResult::FacebookQueryError) \
	op(ESteamResult::ExpiredLoginAuthCode) \
	op(ESteamResult::IPLoginRestrictionFailed) \
	op(ESteamResult::AccountLockedDown) \
	op(ESteamResult::AccountLogonDeniedVerifiedEmailRequired) \
	op(ESteamResult::NoMatchingURL) \
	op(ESteamResult::BadResponse) \
	op(ESteamResult::RequirePasswordReEntry) \
	op(ESteamResult::ValueOutOfRange) \
	op(ESteamResult::UnexpectedError) \
	op(ESteamResult::Disabled) \
	op(ESteamResult::InvalidCEGSubmission) \
	op(ESteamResult::RestrictedDevice) \
	op(ESteamResult::RegionLocked) \
	op(ESteamResult::RateLimitExceeded) \
	op(ESteamResult::AccountLoginDeniedNeedTwoFactor) \
	op(ESteamResult::ItemDeleted) \
	op(ESteamResult::AccountLoginDeniedThrottle) \
	op(ESteamResult::TwoFactorCodeMismatch) \
	op(ESteamResult::TwoFactorActivationCodeMismatch) \
	op(ESteamResult::AccountAssociatedToMultiplePartners) \
	op(ESteamResult::NotModified) \
	op(ESteamResult::NoMobileDevice) \
	op(ESteamResult::TimeNotSynced) \
	op(ESteamResult::SmsCodeFailed) \
	op(ESteamResult::AccountLimitExceeded) \
	op(ESteamResult::AccountActivityLimitExceeded) \
	op(ESteamResult::PhoneActivityLimitExceeded) \
	op(ESteamResult::RefundToWallet) \
	op(ESteamResult::EmailSendFailure) \
	op(ESteamResult::NotSettled) \
	op(ESteamResult::NeedCaptcha) \
	op(ESteamResult::GSLTDenied) \
	op(ESteamResult::GSOwnerDenied) \
	op(ESteamResult::InvalidItemType) \
	op(ESteamResult::IPBanned) \
	op(ESteamResult::GSLTExpired) \
	op(ESteamResult::InsufficientFunds) \
	op(ESteamResult::TooManyPending) 

enum class ESteamResult : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamResult>();

#define FOREACH_ENUM_ESTEAMGAMEOVERLAYTYPES(op) \
	op(ESteamGameOverlayTypes::Friends) \
	op(ESteamGameOverlayTypes::Community) \
	op(ESteamGameOverlayTypes::Players) \
	op(ESteamGameOverlayTypes::Settings) \
	op(ESteamGameOverlayTypes::OfficialGameGroup) \
	op(ESteamGameOverlayTypes::Stats) \
	op(ESteamGameOverlayTypes::Achievements) 

enum class ESteamGameOverlayTypes : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamGameOverlayTypes>();

#define FOREACH_ENUM_ESTEAMGAMEUSEROVERLAYTYPES(op) \
	op(ESteamGameUserOverlayTypes::SteamID) \
	op(ESteamGameUserOverlayTypes::Chat) \
	op(ESteamGameUserOverlayTypes::JoinTrade) \
	op(ESteamGameUserOverlayTypes::Stats) \
	op(ESteamGameUserOverlayTypes::Achievements) \
	op(ESteamGameUserOverlayTypes::FriendAdd) \
	op(ESteamGameUserOverlayTypes::FriendRemove) \
	op(ESteamGameUserOverlayTypes::FriendRequestAccept) \
	op(ESteamGameUserOverlayTypes::FriendRequestIgnore) 

enum class ESteamGameUserOverlayTypes : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamGameUserOverlayTypes>();

#define FOREACH_ENUM_ESTEAMOVERLAYTOSTOREFLAG(op) \
	op(ESteamOverlayToStoreFlag::None) \
	op(ESteamOverlayToStoreFlag::AddToCart) \
	op(ESteamOverlayToStoreFlag::AddToCartAndShow) 

enum class ESteamOverlayToStoreFlag : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamOverlayToStoreFlag>();

#define FOREACH_ENUM_ESTEAMITEMFLAGS_BP(op) \
	op(ESteamItemFlags_BP::NoTrade) \
	op(ESteamItemFlags_BP::ItemRemoved) \
	op(ESteamItemFlags_BP::ItemConsumed) 

enum class ESteamItemFlags_BP : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamItemFlags_BP>();

#define FOREACH_ENUM_ESTEAMCHATENTRYTYPE(op) \
	op(ESteamChatEntryType::Invalid) \
	op(ESteamChatEntryType::ChatMessage) \
	op(ESteamChatEntryType::Typing) \
	op(ESteamChatEntryType::InviteGame) \
	op(ESteamChatEntryType::Emote) \
	op(ESteamChatEntryType::LeftConversation) \
	op(ESteamChatEntryType::Entered) \
	op(ESteamChatEntryType::WasKicked) \
	op(ESteamChatEntryType::WasBanned) \
	op(ESteamChatEntryType::Disconnected) \
	op(ESteamChatEntryType::HistoricalChat) \
	op(ESteamChatEntryType::LinkBlocked) 

enum class ESteamChatEntryType : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamChatEntryType>();

#define FOREACH_ENUM_ESTEAMAVATARSIZES(op) \
	op(ESteamAvatarSizes::SteamAvatar_INVALID) \
	op(ESteamAvatarSizes::SteamAvatar_Small) \
	op(ESteamAvatarSizes::SteamAvatar_Medium) \
	op(ESteamAvatarSizes::SteamAvatar_Large) 

enum class ESteamAvatarSizes : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamAvatarSizes>();

#define FOREACH_ENUM_ESTEAMPERSONACHANGE(op) \
	op(ESteamPersonaChange::None) \
	op(ESteamPersonaChange::ChangeName) \
	op(ESteamPersonaChange::ChangeStatus) \
	op(ESteamPersonaChange::ChangeComeOnline) \
	op(ESteamPersonaChange::ChangeGoneOffline) \
	op(ESteamPersonaChange::ChangeGamePlayed) \
	op(ESteamPersonaChange::ChangeGameServer) \
	op(ESteamPersonaChange::ChangeAvatar) \
	op(ESteamPersonaChange::ChangeJoinedSource) \
	op(ESteamPersonaChange::ChangeLeftSource) \
	op(ESteamPersonaChange::ChangeRelationshipChanged) \
	op(ESteamPersonaChange::ChangeNameFirstSet) \
	op(ESteamPersonaChange::ChangeFacebookInfo) \
	op(ESteamPersonaChange::ChangeNickname) \
	op(ESteamPersonaChange::ChangeSteamLevel) \
	op(ESteamPersonaChange::ChangeErr) 

enum class ESteamPersonaChange : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamPersonaChange>();

#define FOREACH_ENUM_ESTEAMCHATMEMBERSTATECHANGE(op) \
	op(ESteamChatMemberStateChange::Entered) \
	op(ESteamChatMemberStateChange::Left) \
	op(ESteamChatMemberStateChange::Disconnected) \
	op(ESteamChatMemberStateChange::Kicked) \
	op(ESteamChatMemberStateChange::Banned) 

enum class ESteamChatMemberStateChange : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamChatMemberStateChange>();

#define FOREACH_ENUM_ESTEAMCHATROOMENTERRESPONSE(op) \
	op(ESteamChatRoomEnterResponse::Unknown) \
	op(ESteamChatRoomEnterResponse::Success) \
	op(ESteamChatRoomEnterResponse::DoesntExist) \
	op(ESteamChatRoomEnterResponse::NotAllowed) \
	op(ESteamChatRoomEnterResponse::Full) \
	op(ESteamChatRoomEnterResponse::Error) \
	op(ESteamChatRoomEnterResponse::Banned) \
	op(ESteamChatRoomEnterResponse::Limited) \
	op(ESteamChatRoomEnterResponse::ClanDisabled) \
	op(ESteamChatRoomEnterResponse::CommunityBan) \
	op(ESteamChatRoomEnterResponse::MemberBlockedYou) \
	op(ESteamChatRoomEnterResponse::YouBlockedMember) 

enum class ESteamChatRoomEnterResponse : uint8;
template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamChatRoomEnterResponse>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
