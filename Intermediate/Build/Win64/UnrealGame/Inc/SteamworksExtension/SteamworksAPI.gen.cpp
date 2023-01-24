// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamworksExtension/Public/SteamworksAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamworksAPI() {}
// Cross Module References
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamResult();
	UPackage* Z_Construct_UPackage__Script_SteamworksExtension();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange();
	STEAMWORKSEXTENSION_API UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUint64Ex();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUint32Ex();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Ex();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FInt16Ex();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
	STEAMWORKSEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemPriceData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamResult;
	static UEnum* ESteamResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamResult, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamResult"));
		}
		return Z_Registration_Info_UEnum_ESteamResult.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamResult>()
	{
		return ESteamResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamResult_Statics::Enumerators[] = {
		{ "ESteamResult::None", (int64)ESteamResult::None },
		{ "ESteamResult::OK", (int64)ESteamResult::OK },
		{ "ESteamResult::Fail", (int64)ESteamResult::Fail },
		{ "ESteamResult::NoConnection", (int64)ESteamResult::NoConnection },
		{ "ESteamResult::InvalidPassword", (int64)ESteamResult::InvalidPassword },
		{ "ESteamResult::LoggedInElsewhere", (int64)ESteamResult::LoggedInElsewhere },
		{ "ESteamResult::InvalidProtocolVer", (int64)ESteamResult::InvalidProtocolVer },
		{ "ESteamResult::InvalidParam", (int64)ESteamResult::InvalidParam },
		{ "ESteamResult::FileNotFound", (int64)ESteamResult::FileNotFound },
		{ "ESteamResult::Busy", (int64)ESteamResult::Busy },
		{ "ESteamResult::InvalidState", (int64)ESteamResult::InvalidState },
		{ "ESteamResult::InvalidName", (int64)ESteamResult::InvalidName },
		{ "ESteamResult::InvalidEmail", (int64)ESteamResult::InvalidEmail },
		{ "ESteamResult::DuplicateName", (int64)ESteamResult::DuplicateName },
		{ "ESteamResult::AccessDenied", (int64)ESteamResult::AccessDenied },
		{ "ESteamResult::Timeout", (int64)ESteamResult::Timeout },
		{ "ESteamResult::Banned", (int64)ESteamResult::Banned },
		{ "ESteamResult::AccountNotFound", (int64)ESteamResult::AccountNotFound },
		{ "ESteamResult::InvalidSteamID", (int64)ESteamResult::InvalidSteamID },
		{ "ESteamResult::ServiceUnavailable", (int64)ESteamResult::ServiceUnavailable },
		{ "ESteamResult::NotLoggedOn", (int64)ESteamResult::NotLoggedOn },
		{ "ESteamResult::Pending", (int64)ESteamResult::Pending },
		{ "ESteamResult::EncryptionFailure", (int64)ESteamResult::EncryptionFailure },
		{ "ESteamResult::InsufficientPrivilege", (int64)ESteamResult::InsufficientPrivilege },
		{ "ESteamResult::LimitExceeded", (int64)ESteamResult::LimitExceeded },
		{ "ESteamResult::Revoked", (int64)ESteamResult::Revoked },
		{ "ESteamResult::Expired", (int64)ESteamResult::Expired },
		{ "ESteamResult::AlreadyRedeemed", (int64)ESteamResult::AlreadyRedeemed },
		{ "ESteamResult::DuplicateRequest", (int64)ESteamResult::DuplicateRequest },
		{ "ESteamResult::AlreadyOwned", (int64)ESteamResult::AlreadyOwned },
		{ "ESteamResult::IPNotFound", (int64)ESteamResult::IPNotFound },
		{ "ESteamResult::PersistFailed", (int64)ESteamResult::PersistFailed },
		{ "ESteamResult::LockingFailed", (int64)ESteamResult::LockingFailed },
		{ "ESteamResult::LogonSessionReplaced", (int64)ESteamResult::LogonSessionReplaced },
		{ "ESteamResult::ConnectFailed", (int64)ESteamResult::ConnectFailed },
		{ "ESteamResult::HandshakeFailed", (int64)ESteamResult::HandshakeFailed },
		{ "ESteamResult::IOFailure", (int64)ESteamResult::IOFailure },
		{ "ESteamResult::RemoteDisconnect", (int64)ESteamResult::RemoteDisconnect },
		{ "ESteamResult::ShoppingCartNotFound", (int64)ESteamResult::ShoppingCartNotFound },
		{ "ESteamResult::Blocked", (int64)ESteamResult::Blocked },
		{ "ESteamResult::Ignored", (int64)ESteamResult::Ignored },
		{ "ESteamResult::NoMatch", (int64)ESteamResult::NoMatch },
		{ "ESteamResult::AccountDisabled", (int64)ESteamResult::AccountDisabled },
		{ "ESteamResult::ServiceReadOnly", (int64)ESteamResult::ServiceReadOnly },
		{ "ESteamResult::AccountNotFeatured", (int64)ESteamResult::AccountNotFeatured },
		{ "ESteamResult::AdministratorOK", (int64)ESteamResult::AdministratorOK },
		{ "ESteamResult::ContentVersion", (int64)ESteamResult::ContentVersion },
		{ "ESteamResult::TryAnotherCM", (int64)ESteamResult::TryAnotherCM },
		{ "ESteamResult::PasswordRequiredToKickSession", (int64)ESteamResult::PasswordRequiredToKickSession },
		{ "ESteamResult::AlreadyLoggedInElsewhere", (int64)ESteamResult::AlreadyLoggedInElsewhere },
		{ "ESteamResult::Suspended", (int64)ESteamResult::Suspended },
		{ "ESteamResult::Cancelled", (int64)ESteamResult::Cancelled },
		{ "ESteamResult::DataCorruption", (int64)ESteamResult::DataCorruption },
		{ "ESteamResult::DiskFull", (int64)ESteamResult::DiskFull },
		{ "ESteamResult::RemoteCallFailed", (int64)ESteamResult::RemoteCallFailed },
		{ "ESteamResult::PasswordUnset", (int64)ESteamResult::PasswordUnset },
		{ "ESteamResult::ExternalAccountUnlinked", (int64)ESteamResult::ExternalAccountUnlinked },
		{ "ESteamResult::PSNTicketInvalid", (int64)ESteamResult::PSNTicketInvalid },
		{ "ESteamResult::ExternalAccountAlreadyLinked", (int64)ESteamResult::ExternalAccountAlreadyLinked },
		{ "ESteamResult::RemoteFileConflict", (int64)ESteamResult::RemoteFileConflict },
		{ "ESteamResult::IllegalPassword", (int64)ESteamResult::IllegalPassword },
		{ "ESteamResult::SameAsPreviousValue", (int64)ESteamResult::SameAsPreviousValue },
		{ "ESteamResult::AccountLogonDenied", (int64)ESteamResult::AccountLogonDenied },
		{ "ESteamResult::CannotUseOldPassword", (int64)ESteamResult::CannotUseOldPassword },
		{ "ESteamResult::InvalidLoginAuthCode", (int64)ESteamResult::InvalidLoginAuthCode },
		{ "ESteamResult::AccountLogonDeniedNoMail", (int64)ESteamResult::AccountLogonDeniedNoMail },
		{ "ESteamResult::HardwareNotCapableOfIPT", (int64)ESteamResult::HardwareNotCapableOfIPT },
		{ "ESteamResult::IPTInitError", (int64)ESteamResult::IPTInitError },
		{ "ESteamResult::ParentalControlRestricted", (int64)ESteamResult::ParentalControlRestricted },
		{ "ESteamResult::FacebookQueryError", (int64)ESteamResult::FacebookQueryError },
		{ "ESteamResult::ExpiredLoginAuthCode", (int64)ESteamResult::ExpiredLoginAuthCode },
		{ "ESteamResult::IPLoginRestrictionFailed", (int64)ESteamResult::IPLoginRestrictionFailed },
		{ "ESteamResult::AccountLockedDown", (int64)ESteamResult::AccountLockedDown },
		{ "ESteamResult::AccountLogonDeniedVerifiedEmailRequired", (int64)ESteamResult::AccountLogonDeniedVerifiedEmailRequired },
		{ "ESteamResult::NoMatchingURL", (int64)ESteamResult::NoMatchingURL },
		{ "ESteamResult::BadResponse", (int64)ESteamResult::BadResponse },
		{ "ESteamResult::RequirePasswordReEntry", (int64)ESteamResult::RequirePasswordReEntry },
		{ "ESteamResult::ValueOutOfRange", (int64)ESteamResult::ValueOutOfRange },
		{ "ESteamResult::UnexpectedError", (int64)ESteamResult::UnexpectedError },
		{ "ESteamResult::Disabled", (int64)ESteamResult::Disabled },
		{ "ESteamResult::InvalidCEGSubmission", (int64)ESteamResult::InvalidCEGSubmission },
		{ "ESteamResult::RestrictedDevice", (int64)ESteamResult::RestrictedDevice },
		{ "ESteamResult::RegionLocked", (int64)ESteamResult::RegionLocked },
		{ "ESteamResult::RateLimitExceeded", (int64)ESteamResult::RateLimitExceeded },
		{ "ESteamResult::AccountLoginDeniedNeedTwoFactor", (int64)ESteamResult::AccountLoginDeniedNeedTwoFactor },
		{ "ESteamResult::ItemDeleted", (int64)ESteamResult::ItemDeleted },
		{ "ESteamResult::AccountLoginDeniedThrottle", (int64)ESteamResult::AccountLoginDeniedThrottle },
		{ "ESteamResult::TwoFactorCodeMismatch", (int64)ESteamResult::TwoFactorCodeMismatch },
		{ "ESteamResult::TwoFactorActivationCodeMismatch", (int64)ESteamResult::TwoFactorActivationCodeMismatch },
		{ "ESteamResult::AccountAssociatedToMultiplePartners", (int64)ESteamResult::AccountAssociatedToMultiplePartners },
		{ "ESteamResult::NotModified", (int64)ESteamResult::NotModified },
		{ "ESteamResult::NoMobileDevice", (int64)ESteamResult::NoMobileDevice },
		{ "ESteamResult::TimeNotSynced", (int64)ESteamResult::TimeNotSynced },
		{ "ESteamResult::SmsCodeFailed", (int64)ESteamResult::SmsCodeFailed },
		{ "ESteamResult::AccountLimitExceeded", (int64)ESteamResult::AccountLimitExceeded },
		{ "ESteamResult::AccountActivityLimitExceeded", (int64)ESteamResult::AccountActivityLimitExceeded },
		{ "ESteamResult::PhoneActivityLimitExceeded", (int64)ESteamResult::PhoneActivityLimitExceeded },
		{ "ESteamResult::RefundToWallet", (int64)ESteamResult::RefundToWallet },
		{ "ESteamResult::EmailSendFailure", (int64)ESteamResult::EmailSendFailure },
		{ "ESteamResult::NotSettled", (int64)ESteamResult::NotSettled },
		{ "ESteamResult::NeedCaptcha", (int64)ESteamResult::NeedCaptcha },
		{ "ESteamResult::GSLTDenied", (int64)ESteamResult::GSLTDenied },
		{ "ESteamResult::GSOwnerDenied", (int64)ESteamResult::GSOwnerDenied },
		{ "ESteamResult::InvalidItemType", (int64)ESteamResult::InvalidItemType },
		{ "ESteamResult::IPBanned", (int64)ESteamResult::IPBanned },
		{ "ESteamResult::GSLTExpired", (int64)ESteamResult::GSLTExpired },
		{ "ESteamResult::InsufficientFunds", (int64)ESteamResult::InsufficientFunds },
		{ "ESteamResult::TooManyPending", (int64)ESteamResult::TooManyPending },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamResult_Statics::Enum_MetaDataParams[] = {
		{ "AccessDenied.DisplayName", "AccessDenied" },
		{ "AccessDenied.Name", "ESteamResult::AccessDenied" },
		{ "AccountActivityLimitExceeded.DisplayName", "AccountActivityLimitExceeded" },
		{ "AccountActivityLimitExceeded.Name", "ESteamResult::AccountActivityLimitExceeded" },
		{ "AccountAssociatedToMultiplePartners.DisplayName", "AccountAssociatedToMultiplePartners" },
		{ "AccountAssociatedToMultiplePartners.Name", "ESteamResult::AccountAssociatedToMultiplePartners" },
		{ "AccountDisabled.DisplayName", "AccountDisabled" },
		{ "AccountDisabled.Name", "ESteamResult::AccountDisabled" },
		{ "AccountLimitExceeded.DisplayName", "AccountLimitExceeded" },
		{ "AccountLimitExceeded.Name", "ESteamResult::AccountLimitExceeded" },
		{ "AccountLockedDown.DisplayName", "AccountLockedDown" },
		{ "AccountLockedDown.Name", "ESteamResult::AccountLockedDown" },
		{ "AccountLoginDeniedNeedTwoFactor.DisplayName", "AccountLoginDeniedNeedTwoFactor" },
		{ "AccountLoginDeniedNeedTwoFactor.Name", "ESteamResult::AccountLoginDeniedNeedTwoFactor" },
		{ "AccountLoginDeniedThrottle.DisplayName", "AccountLoginDeniedThrottle" },
		{ "AccountLoginDeniedThrottle.Name", "ESteamResult::AccountLoginDeniedThrottle" },
		{ "AccountLogonDenied.DisplayName", "AccountLogonDenied" },
		{ "AccountLogonDenied.Name", "ESteamResult::AccountLogonDenied" },
		{ "AccountLogonDeniedNoMail.DisplayName", "AccountLogonDeniedNoMail" },
		{ "AccountLogonDeniedNoMail.Name", "ESteamResult::AccountLogonDeniedNoMail" },
		{ "AccountLogonDeniedVerifiedEmailRequired.DisplayName", "AccountLogonDeniedVerifiedEmailRequired" },
		{ "AccountLogonDeniedVerifiedEmailRequired.Name", "ESteamResult::AccountLogonDeniedVerifiedEmailRequired" },
		{ "AccountNotFeatured.DisplayName", "AccountNotFeatured" },
		{ "AccountNotFeatured.Name", "ESteamResult::AccountNotFeatured" },
		{ "AccountNotFound.DisplayName", "AccountNotFound" },
		{ "AccountNotFound.Name", "ESteamResult::AccountNotFound" },
		{ "AdministratorOK.DisplayName", "AdministratorOK" },
		{ "AdministratorOK.Name", "ESteamResult::AdministratorOK" },
		{ "AlreadyLoggedInElsewhere.DisplayName", "AlreadyLoggedInElsewhere" },
		{ "AlreadyLoggedInElsewhere.Name", "ESteamResult::AlreadyLoggedInElsewhere" },
		{ "AlreadyOwned.DisplayName", "AlreadyOwned" },
		{ "AlreadyOwned.Name", "ESteamResult::AlreadyOwned" },
		{ "AlreadyRedeemed.DisplayName", "AlreadyRedeemed" },
		{ "AlreadyRedeemed.Name", "ESteamResult::AlreadyRedeemed" },
		{ "BadResponse.DisplayName", "BadResponse" },
		{ "BadResponse.Name", "ESteamResult::BadResponse" },
		{ "Banned.DisplayName", "Banned" },
		{ "Banned.Name", "ESteamResult::Banned" },
		{ "Blocked.DisplayName", "Blocked" },
		{ "Blocked.Name", "ESteamResult::Blocked" },
		{ "BlueprintType", "true" },
		{ "Busy.DisplayName", "Busy" },
		{ "Busy.Name", "ESteamResult::Busy" },
		{ "Cancelled.DisplayName", "Cancelled" },
		{ "Cancelled.Name", "ESteamResult::Cancelled" },
		{ "CannotUseOldPassword.DisplayName", "CannotUseOldPassword" },
		{ "CannotUseOldPassword.Name", "ESteamResult::CannotUseOldPassword" },
		{ "Comment", "// ===== Steam =====\n" },
		{ "ConnectFailed.DisplayName", "ConnectFailed" },
		{ "ConnectFailed.Name", "ESteamResult::ConnectFailed" },
		{ "ContentVersion.DisplayName", "ContentVersion" },
		{ "ContentVersion.Name", "ESteamResult::ContentVersion" },
		{ "DataCorruption.DisplayName", "DataCorruption" },
		{ "DataCorruption.Name", "ESteamResult::DataCorruption" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "ESteamResult::Disabled" },
		{ "DiskFull.DisplayName", "DiskFull" },
		{ "DiskFull.Name", "ESteamResult::DiskFull" },
		{ "DuplicateName.DisplayName", "DuplicateName" },
		{ "DuplicateName.Name", "ESteamResult::DuplicateName" },
		{ "DuplicateRequest.DisplayName", "DuplicateRequest" },
		{ "DuplicateRequest.Name", "ESteamResult::DuplicateRequest" },
		{ "EmailSendFailure.DisplayName", "EmailSendFailure" },
		{ "EmailSendFailure.Name", "ESteamResult::EmailSendFailure" },
		{ "EncryptionFailure.DisplayName", "EncryptionFailure" },
		{ "EncryptionFailure.Name", "ESteamResult::EncryptionFailure" },
		{ "Expired.DisplayName", "Expired" },
		{ "Expired.Name", "ESteamResult::Expired" },
		{ "ExpiredLoginAuthCode.DisplayName", "ExpiredLoginAuthCode" },
		{ "ExpiredLoginAuthCode.Name", "ESteamResult::ExpiredLoginAuthCode" },
		{ "ExternalAccountAlreadyLinked.DisplayName", "ExternalAccountAlreadyLinked" },
		{ "ExternalAccountAlreadyLinked.Name", "ESteamResult::ExternalAccountAlreadyLinked" },
		{ "ExternalAccountUnlinked.DisplayName", "ExternalAccountUnlinked" },
		{ "ExternalAccountUnlinked.Name", "ESteamResult::ExternalAccountUnlinked" },
		{ "FacebookQueryError.DisplayName", "FacebookQueryError" },
		{ "FacebookQueryError.Name", "ESteamResult::FacebookQueryError" },
		{ "Fail.DisplayName", "Fail" },
		{ "Fail.Name", "ESteamResult::Fail" },
		{ "FileNotFound.DisplayName", "FileNotFound" },
		{ "FileNotFound.Name", "ESteamResult::FileNotFound" },
		{ "GSLTDenied.DisplayName", "GSLTDenied" },
		{ "GSLTDenied.Name", "ESteamResult::GSLTDenied" },
		{ "GSLTExpired.DisplayName", "GSLTExpired" },
		{ "GSLTExpired.Name", "ESteamResult::GSLTExpired" },
		{ "GSOwnerDenied.DisplayName", "GSOwnerDenied" },
		{ "GSOwnerDenied.Name", "ESteamResult::GSOwnerDenied" },
		{ "HandshakeFailed.DisplayName", "HandshakeFailed" },
		{ "HandshakeFailed.Name", "ESteamResult::HandshakeFailed" },
		{ "HardwareNotCapableOfIPT.DisplayName", "HardwareNotCapableOfIPT" },
		{ "HardwareNotCapableOfIPT.Name", "ESteamResult::HardwareNotCapableOfIPT" },
		{ "Ignored.DisplayName", "Ignored" },
		{ "Ignored.Name", "ESteamResult::Ignored" },
		{ "IllegalPassword.DisplayName", "IllegalPassword" },
		{ "IllegalPassword.Name", "ESteamResult::IllegalPassword" },
		{ "InsufficientFunds.DisplayName", "InsufficientFunds" },
		{ "InsufficientFunds.Name", "ESteamResult::InsufficientFunds" },
		{ "InsufficientPrivilege.DisplayName", "InsufficientPrivilege" },
		{ "InsufficientPrivilege.Name", "ESteamResult::InsufficientPrivilege" },
		{ "InvalidCEGSubmission.DisplayName", "InvalidCEGSubmission" },
		{ "InvalidCEGSubmission.Name", "ESteamResult::InvalidCEGSubmission" },
		{ "InvalidEmail.DisplayName", "InvalidEmail" },
		{ "InvalidEmail.Name", "ESteamResult::InvalidEmail" },
		{ "InvalidItemType.DisplayName", "InvalidItemType" },
		{ "InvalidItemType.Name", "ESteamResult::InvalidItemType" },
		{ "InvalidLoginAuthCode.DisplayName", "InvalidLoginAuthCode" },
		{ "InvalidLoginAuthCode.Name", "ESteamResult::InvalidLoginAuthCode" },
		{ "InvalidName.DisplayName", "InvalidName" },
		{ "InvalidName.Name", "ESteamResult::InvalidName" },
		{ "InvalidParam.DisplayName", "InvalidParam" },
		{ "InvalidParam.Name", "ESteamResult::InvalidParam" },
		{ "InvalidPassword.DisplayName", "InvalidPassword" },
		{ "InvalidPassword.Name", "ESteamResult::InvalidPassword" },
		{ "InvalidProtocolVer.DisplayName", "InvalidProtocolVer" },
		{ "InvalidProtocolVer.Name", "ESteamResult::InvalidProtocolVer" },
		{ "InvalidState.DisplayName", "InvalidState" },
		{ "InvalidState.Name", "ESteamResult::InvalidState" },
		{ "InvalidSteamID.DisplayName", "InvalidSteamID" },
		{ "InvalidSteamID.Name", "ESteamResult::InvalidSteamID" },
		{ "IOFailure.DisplayName", "IOFailure" },
		{ "IOFailure.Name", "ESteamResult::IOFailure" },
		{ "IPBanned.DisplayName", "IPBanned" },
		{ "IPBanned.Name", "ESteamResult::IPBanned" },
		{ "IPLoginRestrictionFailed.DisplayName", "IPLoginRestrictionFailed" },
		{ "IPLoginRestrictionFailed.Name", "ESteamResult::IPLoginRestrictionFailed" },
		{ "IPNotFound.DisplayName", "IPNotFound" },
		{ "IPNotFound.Name", "ESteamResult::IPNotFound" },
		{ "IPTInitError.DisplayName", "IPTInitError" },
		{ "IPTInitError.Name", "ESteamResult::IPTInitError" },
		{ "ItemDeleted.DisplayName", "ItemDeleted" },
		{ "ItemDeleted.Name", "ESteamResult::ItemDeleted" },
		{ "LimitExceeded.DisplayName", "LimitExceeded" },
		{ "LimitExceeded.Name", "ESteamResult::LimitExceeded" },
		{ "LockingFailed.DisplayName", "LockingFailed" },
		{ "LockingFailed.Name", "ESteamResult::LockingFailed" },
		{ "LoggedInElsewhere.DisplayName", "LoggedInElsewhere" },
		{ "LoggedInElsewhere.Name", "ESteamResult::LoggedInElsewhere" },
		{ "LogonSessionReplaced.DisplayName", "LogonSessionReplaced" },
		{ "LogonSessionReplaced.Name", "ESteamResult::LogonSessionReplaced" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "NeedCaptcha.DisplayName", "NeedCaptcha" },
		{ "NeedCaptcha.Name", "ESteamResult::NeedCaptcha" },
		{ "NoConnection.DisplayName", "NoConnection" },
		{ "NoConnection.Name", "ESteamResult::NoConnection" },
		{ "NoMatch.DisplayName", "NoMatch" },
		{ "NoMatch.Name", "ESteamResult::NoMatch" },
		{ "NoMatchingURL.DisplayName", "NoMatchingURL" },
		{ "NoMatchingURL.Name", "ESteamResult::NoMatchingURL" },
		{ "NoMobileDevice.DisplayName", "NoMobileDevice" },
		{ "NoMobileDevice.Name", "ESteamResult::NoMobileDevice" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESteamResult::None" },
		{ "NotLoggedOn.DisplayName", "NotLoggedOn" },
		{ "NotLoggedOn.Name", "ESteamResult::NotLoggedOn" },
		{ "NotModified.DisplayName", "NotModified" },
		{ "NotModified.Name", "ESteamResult::NotModified" },
		{ "NotSettled.DisplayName", "NotSettled" },
		{ "NotSettled.Name", "ESteamResult::NotSettled" },
		{ "OK.DisplayName", "OK" },
		{ "OK.Name", "ESteamResult::OK" },
		{ "ParentalControlRestricted.DisplayName", "ParentalControlRestricted" },
		{ "ParentalControlRestricted.Name", "ESteamResult::ParentalControlRestricted" },
		{ "PasswordRequiredToKickSession.DisplayName", "PasswordRequiredToKickSession" },
		{ "PasswordRequiredToKickSession.Name", "ESteamResult::PasswordRequiredToKickSession" },
		{ "PasswordUnset.DisplayName", "PasswordUnset" },
		{ "PasswordUnset.Name", "ESteamResult::PasswordUnset" },
		{ "Pending.DisplayName", "Pending" },
		{ "Pending.Name", "ESteamResult::Pending" },
		{ "PersistFailed.DisplayName", "PersistFailed" },
		{ "PersistFailed.Name", "ESteamResult::PersistFailed" },
		{ "PhoneActivityLimitExceeded.DisplayName", "PhoneActivityLimitExceeded" },
		{ "PhoneActivityLimitExceeded.Name", "ESteamResult::PhoneActivityLimitExceeded" },
		{ "PSNTicketInvalid.DisplayName", "PSNTicketInvalid" },
		{ "PSNTicketInvalid.Name", "ESteamResult::PSNTicketInvalid" },
		{ "RateLimitExceeded.DisplayName", "RateLimitExceeded" },
		{ "RateLimitExceeded.Name", "ESteamResult::RateLimitExceeded" },
		{ "RefundToWallet.DisplayName", "RefundToWallet" },
		{ "RefundToWallet.Name", "ESteamResult::RefundToWallet" },
		{ "RegionLocked.DisplayName", "RegionLocked" },
		{ "RegionLocked.Name", "ESteamResult::RegionLocked" },
		{ "RemoteCallFailed.DisplayName", "RemoteCallFailed" },
		{ "RemoteCallFailed.Name", "ESteamResult::RemoteCallFailed" },
		{ "RemoteDisconnect.DisplayName", "RemoteDisconnect" },
		{ "RemoteDisconnect.Name", "ESteamResult::RemoteDisconnect" },
		{ "RemoteFileConflict.DisplayName", "RemoteFileConflict" },
		{ "RemoteFileConflict.Name", "ESteamResult::RemoteFileConflict" },
		{ "RequirePasswordReEntry.DisplayName", "RequirePasswordReEntry" },
		{ "RequirePasswordReEntry.Name", "ESteamResult::RequirePasswordReEntry" },
		{ "RestrictedDevice.DisplayName", "RestrictedDevice" },
		{ "RestrictedDevice.Name", "ESteamResult::RestrictedDevice" },
		{ "Revoked.DisplayName", "Revoked" },
		{ "Revoked.Name", "ESteamResult::Revoked" },
		{ "SameAsPreviousValue.DisplayName", "SameAsPreviousValue" },
		{ "SameAsPreviousValue.Name", "ESteamResult::SameAsPreviousValue" },
		{ "ServiceReadOnly.DisplayName", "ServiceReadOnly" },
		{ "ServiceReadOnly.Name", "ESteamResult::ServiceReadOnly" },
		{ "ServiceUnavailable.DisplayName", "ServiceUnavailable" },
		{ "ServiceUnavailable.Name", "ESteamResult::ServiceUnavailable" },
		{ "ShoppingCartNotFound.DisplayName", "ShoppingCartNotFound" },
		{ "ShoppingCartNotFound.Name", "ESteamResult::ShoppingCartNotFound" },
		{ "SmsCodeFailed.DisplayName", "SmsCodeFailed" },
		{ "SmsCodeFailed.Name", "ESteamResult::SmsCodeFailed" },
		{ "Suspended.DisplayName", "Suspended" },
		{ "Suspended.Name", "ESteamResult::Suspended" },
		{ "TimeNotSynced.DisplayName", "TimeNotSynced" },
		{ "TimeNotSynced.Name", "ESteamResult::TimeNotSynced" },
		{ "Timeout.DisplayName", "Timeout" },
		{ "Timeout.Name", "ESteamResult::Timeout" },
		{ "ToolTip", "===== Steam =====" },
		{ "TooManyPending.DisplayName", "TooManyPending" },
		{ "TooManyPending.Name", "ESteamResult::TooManyPending" },
		{ "TryAnotherCM.DisplayName", "TryAnotherCM" },
		{ "TryAnotherCM.Name", "ESteamResult::TryAnotherCM" },
		{ "TwoFactorActivationCodeMismatch.DisplayName", "TwoFactorActivationCodeMismatch" },
		{ "TwoFactorActivationCodeMismatch.Name", "ESteamResult::TwoFactorActivationCodeMismatch" },
		{ "TwoFactorCodeMismatch.DisplayName", "TwoFactorCodeMismatch" },
		{ "TwoFactorCodeMismatch.Name", "ESteamResult::TwoFactorCodeMismatch" },
		{ "UnexpectedError.DisplayName", "UnexpectedError" },
		{ "UnexpectedError.Name", "ESteamResult::UnexpectedError" },
		{ "ValueOutOfRange.DisplayName", "ValueOutOfRange" },
		{ "ValueOutOfRange.Name", "ESteamResult::ValueOutOfRange" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamResult",
		"ESteamResult",
		Z_Construct_UEnum_SteamworksExtension_ESteamResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamResult()
	{
		if (!Z_Registration_Info_UEnum_ESteamResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamResult.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGameOverlayTypes;
	static UEnum* ESteamGameOverlayTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamGameOverlayTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamGameOverlayTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamGameOverlayTypes"));
		}
		return Z_Registration_Info_UEnum_ESteamGameOverlayTypes.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamGameOverlayTypes>()
	{
		return ESteamGameOverlayTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes_Statics::Enumerators[] = {
		{ "ESteamGameOverlayTypes::Friends", (int64)ESteamGameOverlayTypes::Friends },
		{ "ESteamGameOverlayTypes::Community", (int64)ESteamGameOverlayTypes::Community },
		{ "ESteamGameOverlayTypes::Players", (int64)ESteamGameOverlayTypes::Players },
		{ "ESteamGameOverlayTypes::Settings", (int64)ESteamGameOverlayTypes::Settings },
		{ "ESteamGameOverlayTypes::OfficialGameGroup", (int64)ESteamGameOverlayTypes::OfficialGameGroup },
		{ "ESteamGameOverlayTypes::Stats", (int64)ESteamGameOverlayTypes::Stats },
		{ "ESteamGameOverlayTypes::Achievements", (int64)ESteamGameOverlayTypes::Achievements },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes_Statics::Enum_MetaDataParams[] = {
		{ "Achievements.DisplayName", "Achievements" },
		{ "Achievements.Name", "ESteamGameOverlayTypes::Achievements" },
		{ "BlueprintType", "true" },
		{ "Comment", "// ===== Overlay =====\n" },
		{ "Community.DisplayName", "Community" },
		{ "Community.Name", "ESteamGameOverlayTypes::Community" },
		{ "Friends.DisplayName", "Friends" },
		{ "Friends.Name", "ESteamGameOverlayTypes::Friends" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "OfficialGameGroup.DisplayName", "OfficialGameGroup" },
		{ "OfficialGameGroup.Name", "ESteamGameOverlayTypes::OfficialGameGroup" },
		{ "Players.DisplayName", "Players" },
		{ "Players.Name", "ESteamGameOverlayTypes::Players" },
		{ "Settings.DisplayName", "Settings" },
		{ "Settings.Name", "ESteamGameOverlayTypes::Settings" },
		{ "Stats.DisplayName", "Stats" },
		{ "Stats.Name", "ESteamGameOverlayTypes::Stats" },
		{ "ToolTip", "===== Overlay =====" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamGameOverlayTypes",
		"ESteamGameOverlayTypes",
		Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes()
	{
		if (!Z_Registration_Info_UEnum_ESteamGameOverlayTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGameOverlayTypes.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamGameOverlayTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamGameOverlayTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGameUserOverlayTypes;
	static UEnum* ESteamGameUserOverlayTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamGameUserOverlayTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamGameUserOverlayTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamGameUserOverlayTypes"));
		}
		return Z_Registration_Info_UEnum_ESteamGameUserOverlayTypes.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamGameUserOverlayTypes>()
	{
		return ESteamGameUserOverlayTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes_Statics::Enumerators[] = {
		{ "ESteamGameUserOverlayTypes::SteamID", (int64)ESteamGameUserOverlayTypes::SteamID },
		{ "ESteamGameUserOverlayTypes::Chat", (int64)ESteamGameUserOverlayTypes::Chat },
		{ "ESteamGameUserOverlayTypes::JoinTrade", (int64)ESteamGameUserOverlayTypes::JoinTrade },
		{ "ESteamGameUserOverlayTypes::Stats", (int64)ESteamGameUserOverlayTypes::Stats },
		{ "ESteamGameUserOverlayTypes::Achievements", (int64)ESteamGameUserOverlayTypes::Achievements },
		{ "ESteamGameUserOverlayTypes::FriendAdd", (int64)ESteamGameUserOverlayTypes::FriendAdd },
		{ "ESteamGameUserOverlayTypes::FriendRemove", (int64)ESteamGameUserOverlayTypes::FriendRemove },
		{ "ESteamGameUserOverlayTypes::FriendRequestAccept", (int64)ESteamGameUserOverlayTypes::FriendRequestAccept },
		{ "ESteamGameUserOverlayTypes::FriendRequestIgnore", (int64)ESteamGameUserOverlayTypes::FriendRequestIgnore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes_Statics::Enum_MetaDataParams[] = {
		{ "Achievements.DisplayName", "Achievements" },
		{ "Achievements.Name", "ESteamGameUserOverlayTypes::Achievements" },
		{ "BlueprintType", "true" },
		{ "Chat.DisplayName", "Chat" },
		{ "Chat.Name", "ESteamGameUserOverlayTypes::Chat" },
		{ "FriendAdd.DisplayName", "Friend Add" },
		{ "FriendAdd.Name", "ESteamGameUserOverlayTypes::FriendAdd" },
		{ "FriendRemove.DisplayName", "Friend Remove" },
		{ "FriendRemove.Name", "ESteamGameUserOverlayTypes::FriendRemove" },
		{ "FriendRequestAccept.DisplayName", "Friend Request Accept" },
		{ "FriendRequestAccept.Name", "ESteamGameUserOverlayTypes::FriendRequestAccept" },
		{ "FriendRequestIgnore.DisplayName", "Friend Request Ignore" },
		{ "FriendRequestIgnore.Name", "ESteamGameUserOverlayTypes::FriendRequestIgnore" },
		{ "IsBlueprintBase", "true" },
		{ "JoinTrade.DisplayName", "Join Trade" },
		{ "JoinTrade.Name", "ESteamGameUserOverlayTypes::JoinTrade" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "Stats.DisplayName", "Stats" },
		{ "Stats.Name", "ESteamGameUserOverlayTypes::Stats" },
		{ "SteamID.DisplayName", "Steam ID" },
		{ "SteamID.Name", "ESteamGameUserOverlayTypes::SteamID" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamGameUserOverlayTypes",
		"ESteamGameUserOverlayTypes",
		Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes()
	{
		if (!Z_Registration_Info_UEnum_ESteamGameUserOverlayTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGameUserOverlayTypes.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamGameUserOverlayTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamGameUserOverlayTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamOverlayToStoreFlag;
	static UEnum* ESteamOverlayToStoreFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamOverlayToStoreFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamOverlayToStoreFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamOverlayToStoreFlag"));
		}
		return Z_Registration_Info_UEnum_ESteamOverlayToStoreFlag.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamOverlayToStoreFlag>()
	{
		return ESteamOverlayToStoreFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag_Statics::Enumerators[] = {
		{ "ESteamOverlayToStoreFlag::None", (int64)ESteamOverlayToStoreFlag::None },
		{ "ESteamOverlayToStoreFlag::AddToCart", (int64)ESteamOverlayToStoreFlag::AddToCart },
		{ "ESteamOverlayToStoreFlag::AddToCartAndShow", (int64)ESteamOverlayToStoreFlag::AddToCartAndShow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag_Statics::Enum_MetaDataParams[] = {
		{ "AddToCart.DisplayName", "Add To Cart" },
		{ "AddToCart.Name", "ESteamOverlayToStoreFlag::AddToCart" },
		{ "AddToCartAndShow.DisplayName", "Add To Cart And Show" },
		{ "AddToCartAndShow.Name", "ESteamOverlayToStoreFlag::AddToCartAndShow" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESteamOverlayToStoreFlag::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamOverlayToStoreFlag",
		"ESteamOverlayToStoreFlag",
		Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag()
	{
		if (!Z_Registration_Info_UEnum_ESteamOverlayToStoreFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamOverlayToStoreFlag.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamOverlayToStoreFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamOverlayToStoreFlag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamItemFlags_BP;
	static UEnum* ESteamItemFlags_BP_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamItemFlags_BP.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamItemFlags_BP.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamItemFlags_BP"));
		}
		return Z_Registration_Info_UEnum_ESteamItemFlags_BP.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamItemFlags_BP>()
	{
		return ESteamItemFlags_BP_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP_Statics::Enumerators[] = {
		{ "ESteamItemFlags_BP::NoTrade", (int64)ESteamItemFlags_BP::NoTrade },
		{ "ESteamItemFlags_BP::ItemRemoved", (int64)ESteamItemFlags_BP::ItemRemoved },
		{ "ESteamItemFlags_BP::ItemConsumed", (int64)ESteamItemFlags_BP::ItemConsumed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ===== Inventory =====\n" },
		{ "ItemConsumed.DisplayName", "Item Consumed" },
		{ "ItemConsumed.Name", "ESteamItemFlags_BP::ItemConsumed" },
		{ "ItemRemoved.DisplayName", "Item Removed" },
		{ "ItemRemoved.Name", "ESteamItemFlags_BP::ItemRemoved" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "NoTrade.DisplayName", "No Trade" },
		{ "NoTrade.Name", "ESteamItemFlags_BP::NoTrade" },
		{ "ToolTip", "===== Inventory =====" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamItemFlags_BP",
		"ESteamItemFlags_BP",
		Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP()
	{
		if (!Z_Registration_Info_UEnum_ESteamItemFlags_BP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamItemFlags_BP.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamItemFlags_BP.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamChatEntryType;
	static UEnum* ESteamChatEntryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamChatEntryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamChatEntryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamChatEntryType"));
		}
		return Z_Registration_Info_UEnum_ESteamChatEntryType.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamChatEntryType>()
	{
		return ESteamChatEntryType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType_Statics::Enumerators[] = {
		{ "ESteamChatEntryType::Invalid", (int64)ESteamChatEntryType::Invalid },
		{ "ESteamChatEntryType::ChatMessage", (int64)ESteamChatEntryType::ChatMessage },
		{ "ESteamChatEntryType::Typing", (int64)ESteamChatEntryType::Typing },
		{ "ESteamChatEntryType::InviteGame", (int64)ESteamChatEntryType::InviteGame },
		{ "ESteamChatEntryType::Emote", (int64)ESteamChatEntryType::Emote },
		{ "ESteamChatEntryType::LeftConversation", (int64)ESteamChatEntryType::LeftConversation },
		{ "ESteamChatEntryType::Entered", (int64)ESteamChatEntryType::Entered },
		{ "ESteamChatEntryType::WasKicked", (int64)ESteamChatEntryType::WasKicked },
		{ "ESteamChatEntryType::WasBanned", (int64)ESteamChatEntryType::WasBanned },
		{ "ESteamChatEntryType::Disconnected", (int64)ESteamChatEntryType::Disconnected },
		{ "ESteamChatEntryType::HistoricalChat", (int64)ESteamChatEntryType::HistoricalChat },
		{ "ESteamChatEntryType::LinkBlocked", (int64)ESteamChatEntryType::LinkBlocked },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChatMessage.DisplayName", "ChatMessage" },
		{ "ChatMessage.Name", "ESteamChatEntryType::ChatMessage" },
		{ "Comment", "// ===== Friends =====\n" },
		{ "Disconnected.DisplayName", "Disconnected" },
		{ "Disconnected.Name", "ESteamChatEntryType::Disconnected" },
		{ "Emote.DisplayName", "Emote" },
		{ "Emote.Name", "ESteamChatEntryType::Emote" },
		{ "Entered.DisplayName", "Entered" },
		{ "Entered.Name", "ESteamChatEntryType::Entered" },
		{ "HistoricalChat.DisplayName", "HistoricalChat" },
		{ "HistoricalChat.Name", "ESteamChatEntryType::HistoricalChat" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "ESteamChatEntryType::Invalid" },
		{ "InviteGame.DisplayName", "InviteGame" },
		{ "InviteGame.Name", "ESteamChatEntryType::InviteGame" },
		{ "LeftConversation.DisplayName", "LeftConversation" },
		{ "LeftConversation.Name", "ESteamChatEntryType::LeftConversation" },
		{ "LinkBlocked.DisplayName", "LinkBlocked" },
		{ "LinkBlocked.Name", "ESteamChatEntryType::LinkBlocked" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "ToolTip", "===== Friends =====" },
		{ "Typing.DisplayName", "Typing" },
		{ "Typing.Name", "ESteamChatEntryType::Typing" },
		{ "WasBanned.DisplayName", "WasBanned" },
		{ "WasBanned.Name", "ESteamChatEntryType::WasBanned" },
		{ "WasKicked.DisplayName", "WasKicked" },
		{ "WasKicked.Name", "ESteamChatEntryType::WasKicked" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamChatEntryType",
		"ESteamChatEntryType",
		Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType()
	{
		if (!Z_Registration_Info_UEnum_ESteamChatEntryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamChatEntryType.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamChatEntryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamChatEntryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamAvatarSizes;
	static UEnum* ESteamAvatarSizes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamAvatarSizes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamAvatarSizes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamAvatarSizes"));
		}
		return Z_Registration_Info_UEnum_ESteamAvatarSizes.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamAvatarSizes>()
	{
		return ESteamAvatarSizes_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes_Statics::Enumerators[] = {
		{ "ESteamAvatarSizes::SteamAvatar_INVALID", (int64)ESteamAvatarSizes::SteamAvatar_INVALID },
		{ "ESteamAvatarSizes::SteamAvatar_Small", (int64)ESteamAvatarSizes::SteamAvatar_Small },
		{ "ESteamAvatarSizes::SteamAvatar_Medium", (int64)ESteamAvatarSizes::SteamAvatar_Medium },
		{ "ESteamAvatarSizes::SteamAvatar_Large", (int64)ESteamAvatarSizes::SteamAvatar_Large },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "SteamAvatar_INVALID.DisplayName", "Invalid" },
		{ "SteamAvatar_INVALID.Name", "ESteamAvatarSizes::SteamAvatar_INVALID" },
		{ "SteamAvatar_Large.DisplayName", "Large" },
		{ "SteamAvatar_Large.Name", "ESteamAvatarSizes::SteamAvatar_Large" },
		{ "SteamAvatar_Medium.DisplayName", "Medium" },
		{ "SteamAvatar_Medium.Name", "ESteamAvatarSizes::SteamAvatar_Medium" },
		{ "SteamAvatar_Small.DisplayName", "Small" },
		{ "SteamAvatar_Small.Name", "ESteamAvatarSizes::SteamAvatar_Small" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamAvatarSizes",
		"ESteamAvatarSizes",
		Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes()
	{
		if (!Z_Registration_Info_UEnum_ESteamAvatarSizes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamAvatarSizes.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamAvatarSizes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamAvatarSizes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPersonaChange;
	static UEnum* ESteamPersonaChange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamPersonaChange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamPersonaChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamPersonaChange"));
		}
		return Z_Registration_Info_UEnum_ESteamPersonaChange.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamPersonaChange>()
	{
		return ESteamPersonaChange_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange_Statics::Enumerators[] = {
		{ "ESteamPersonaChange::None", (int64)ESteamPersonaChange::None },
		{ "ESteamPersonaChange::ChangeName", (int64)ESteamPersonaChange::ChangeName },
		{ "ESteamPersonaChange::ChangeStatus", (int64)ESteamPersonaChange::ChangeStatus },
		{ "ESteamPersonaChange::ChangeComeOnline", (int64)ESteamPersonaChange::ChangeComeOnline },
		{ "ESteamPersonaChange::ChangeGoneOffline", (int64)ESteamPersonaChange::ChangeGoneOffline },
		{ "ESteamPersonaChange::ChangeGamePlayed", (int64)ESteamPersonaChange::ChangeGamePlayed },
		{ "ESteamPersonaChange::ChangeGameServer", (int64)ESteamPersonaChange::ChangeGameServer },
		{ "ESteamPersonaChange::ChangeAvatar", (int64)ESteamPersonaChange::ChangeAvatar },
		{ "ESteamPersonaChange::ChangeJoinedSource", (int64)ESteamPersonaChange::ChangeJoinedSource },
		{ "ESteamPersonaChange::ChangeLeftSource", (int64)ESteamPersonaChange::ChangeLeftSource },
		{ "ESteamPersonaChange::ChangeRelationshipChanged", (int64)ESteamPersonaChange::ChangeRelationshipChanged },
		{ "ESteamPersonaChange::ChangeNameFirstSet", (int64)ESteamPersonaChange::ChangeNameFirstSet },
		{ "ESteamPersonaChange::ChangeFacebookInfo", (int64)ESteamPersonaChange::ChangeFacebookInfo },
		{ "ESteamPersonaChange::ChangeNickname", (int64)ESteamPersonaChange::ChangeNickname },
		{ "ESteamPersonaChange::ChangeSteamLevel", (int64)ESteamPersonaChange::ChangeSteamLevel },
		{ "ESteamPersonaChange::ChangeErr", (int64)ESteamPersonaChange::ChangeErr },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChangeAvatar.DisplayName", "ChangedAvatar" },
		{ "ChangeAvatar.Name", "ESteamPersonaChange::ChangeAvatar" },
		{ "ChangeComeOnline.DisplayName", "ComeOnline" },
		{ "ChangeComeOnline.Name", "ESteamPersonaChange::ChangeComeOnline" },
		{ "ChangeErr.DisplayName", "Error" },
		{ "ChangeErr.Name", "ESteamPersonaChange::ChangeErr" },
		{ "ChangeFacebookInfo.DisplayName", "ChangedFacebookInfo" },
		{ "ChangeFacebookInfo.Name", "ESteamPersonaChange::ChangeFacebookInfo" },
		{ "ChangeGamePlayed.DisplayName", "ChangedGame" },
		{ "ChangeGamePlayed.Name", "ESteamPersonaChange::ChangeGamePlayed" },
		{ "ChangeGameServer.DisplayName", "ChangeServer" },
		{ "ChangeGameServer.Name", "ESteamPersonaChange::ChangeGameServer" },
		{ "ChangeGoneOffline.DisplayName", "GoneOffline" },
		{ "ChangeGoneOffline.Name", "ESteamPersonaChange::ChangeGoneOffline" },
		{ "ChangeJoinedSource.DisplayName", "ChangedSource" },
		{ "ChangeJoinedSource.Name", "ESteamPersonaChange::ChangeJoinedSource" },
		{ "ChangeLeftSource.DisplayName", "LeftSource" },
		{ "ChangeLeftSource.Name", "ESteamPersonaChange::ChangeLeftSource" },
		{ "ChangeName.DisplayName", "ChangedName" },
		{ "ChangeName.Name", "ESteamPersonaChange::ChangeName" },
		{ "ChangeNameFirstSet.DisplayName", "ChangedFirstName" },
		{ "ChangeNameFirstSet.Name", "ESteamPersonaChange::ChangeNameFirstSet" },
		{ "ChangeNickname.DisplayName", "ChangedNickname" },
		{ "ChangeNickname.Name", "ESteamPersonaChange::ChangeNickname" },
		{ "ChangeRelationshipChanged.DisplayName", "ChangedRelationship" },
		{ "ChangeRelationshipChanged.Name", "ESteamPersonaChange::ChangeRelationshipChanged" },
		{ "ChangeStatus.DisplayName", "ChangedStatus" },
		{ "ChangeStatus.Name", "ESteamPersonaChange::ChangeStatus" },
		{ "ChangeSteamLevel.DisplayName", "ChangeSteamLevel" },
		{ "ChangeSteamLevel.Name", "ESteamPersonaChange::ChangeSteamLevel" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESteamPersonaChange::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamPersonaChange",
		"ESteamPersonaChange",
		Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange()
	{
		if (!Z_Registration_Info_UEnum_ESteamPersonaChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPersonaChange.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamPersonaChange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamPersonaChange.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamChatMemberStateChange;
	static UEnum* ESteamChatMemberStateChange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamChatMemberStateChange"));
		}
		return Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamChatMemberStateChange>()
	{
		return ESteamChatMemberStateChange_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange_Statics::Enumerators[] = {
		{ "ESteamChatMemberStateChange::Entered", (int64)ESteamChatMemberStateChange::Entered },
		{ "ESteamChatMemberStateChange::Left", (int64)ESteamChatMemberStateChange::Left },
		{ "ESteamChatMemberStateChange::Disconnected", (int64)ESteamChatMemberStateChange::Disconnected },
		{ "ESteamChatMemberStateChange::Kicked", (int64)ESteamChatMemberStateChange::Kicked },
		{ "ESteamChatMemberStateChange::Banned", (int64)ESteamChatMemberStateChange::Banned },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams[] = {
		{ "Banned.DisplayName", "Banned" },
		{ "Banned.Name", "ESteamChatMemberStateChange::Banned" },
		{ "BlueprintType", "true" },
		{ "Comment", "// ===== Matchmaking =====\n" },
		{ "Disconnected.DisplayName", "Disconnected" },
		{ "Disconnected.Name", "ESteamChatMemberStateChange::Disconnected" },
		{ "Entered.DisplayName", "Entered" },
		{ "Entered.Name", "ESteamChatMemberStateChange::Entered" },
		{ "Kicked.DisplayName", "Kicked" },
		{ "Kicked.Name", "ESteamChatMemberStateChange::Kicked" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "ESteamChatMemberStateChange::Left" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "ToolTip", "===== Matchmaking =====" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamChatMemberStateChange",
		"ESteamChatMemberStateChange",
		Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange()
	{
		if (!Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamChatMemberStateChange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse;
	static UEnum* ESteamChatRoomEnterResponse_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("ESteamChatRoomEnterResponse"));
		}
		return Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.OuterSingleton;
	}
	template<> STEAMWORKSEXTENSION_API UEnum* StaticEnum<ESteamChatRoomEnterResponse>()
	{
		return ESteamChatRoomEnterResponse_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse_Statics::Enumerators[] = {
		{ "ESteamChatRoomEnterResponse::Unknown", (int64)ESteamChatRoomEnterResponse::Unknown },
		{ "ESteamChatRoomEnterResponse::Success", (int64)ESteamChatRoomEnterResponse::Success },
		{ "ESteamChatRoomEnterResponse::DoesntExist", (int64)ESteamChatRoomEnterResponse::DoesntExist },
		{ "ESteamChatRoomEnterResponse::NotAllowed", (int64)ESteamChatRoomEnterResponse::NotAllowed },
		{ "ESteamChatRoomEnterResponse::Full", (int64)ESteamChatRoomEnterResponse::Full },
		{ "ESteamChatRoomEnterResponse::Error", (int64)ESteamChatRoomEnterResponse::Error },
		{ "ESteamChatRoomEnterResponse::Banned", (int64)ESteamChatRoomEnterResponse::Banned },
		{ "ESteamChatRoomEnterResponse::Limited", (int64)ESteamChatRoomEnterResponse::Limited },
		{ "ESteamChatRoomEnterResponse::ClanDisabled", (int64)ESteamChatRoomEnterResponse::ClanDisabled },
		{ "ESteamChatRoomEnterResponse::CommunityBan", (int64)ESteamChatRoomEnterResponse::CommunityBan },
		{ "ESteamChatRoomEnterResponse::MemberBlockedYou", (int64)ESteamChatRoomEnterResponse::MemberBlockedYou },
		{ "ESteamChatRoomEnterResponse::YouBlockedMember", (int64)ESteamChatRoomEnterResponse::YouBlockedMember },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse_Statics::Enum_MetaDataParams[] = {
		{ "Banned.DisplayName", "Banned" },
		{ "Banned.Name", "ESteamChatRoomEnterResponse::Banned" },
		{ "BlueprintType", "true" },
		{ "ClanDisabled.DisplayName", "ClanDisabled" },
		{ "ClanDisabled.Name", "ESteamChatRoomEnterResponse::ClanDisabled" },
		{ "CommunityBan.DisplayName", "CommunityBan" },
		{ "CommunityBan.Name", "ESteamChatRoomEnterResponse::CommunityBan" },
		{ "DoesntExist.DisplayName", "DoesntExist" },
		{ "DoesntExist.Name", "ESteamChatRoomEnterResponse::DoesntExist" },
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "ESteamChatRoomEnterResponse::Error" },
		{ "Full.DisplayName", "Full" },
		{ "Full.Name", "ESteamChatRoomEnterResponse::Full" },
		{ "Limited.DisplayName", "Limited" },
		{ "Limited.Name", "ESteamChatRoomEnterResponse::Limited" },
		{ "MemberBlockedYou.DisplayName", "MemberBlockedYou" },
		{ "MemberBlockedYou.Name", "ESteamChatRoomEnterResponse::MemberBlockedYou" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "NotAllowed.DisplayName", "NotAllowed" },
		{ "NotAllowed.Name", "ESteamChatRoomEnterResponse::NotAllowed" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "ESteamChatRoomEnterResponse::Success" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "ESteamChatRoomEnterResponse::Unknown" },
		{ "YouBlockedMember.DisplayName", "YouBlockedMember" },
		{ "YouBlockedMember.Name", "ESteamChatRoomEnterResponse::YouBlockedMember" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		"ESteamChatRoomEnterResponse",
		"ESteamChatRoomEnterResponse",
		Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse()
	{
		if (!Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.InnerSingleton, Z_Construct_UEnum_SteamworksExtension_ESteamChatRoomEnterResponse_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Uint64Ex;
class UScriptStruct* FUint64Ex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Uint64Ex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Uint64Ex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUint64Ex, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("Uint64Ex"));
	}
	return Z_Registration_Info_UScriptStruct_Uint64Ex.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FUint64Ex>()
{
	return FUint64Ex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUint64Ex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUint64Ex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ===== Base =====\n" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "ToolTip", "===== Base =====" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUint64Ex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUint64Ex>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUint64Ex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		&NewStructOps,
		"Uint64Ex",
		sizeof(FUint64Ex),
		alignof(FUint64Ex),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUint64Ex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint64Ex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUint64Ex()
	{
		if (!Z_Registration_Info_UScriptStruct_Uint64Ex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Uint64Ex.InnerSingleton, Z_Construct_UScriptStruct_FUint64Ex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Uint64Ex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Uint32Ex;
class UScriptStruct* FUint32Ex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Uint32Ex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Uint32Ex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUint32Ex, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("Uint32Ex"));
	}
	return Z_Registration_Info_UScriptStruct_Uint32Ex.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FUint32Ex>()
{
	return FUint32Ex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUint32Ex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUint32Ex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUint32Ex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUint32Ex>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUint32Ex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		&NewStructOps,
		"Uint32Ex",
		sizeof(FUint32Ex),
		alignof(FUint32Ex),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUint32Ex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUint32Ex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUint32Ex()
	{
		if (!Z_Registration_Info_UScriptStruct_Uint32Ex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Uint32Ex.InnerSingleton, Z_Construct_UScriptStruct_FUint32Ex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Uint32Ex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Int32Ex;
class UScriptStruct* FInt32Ex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Int32Ex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Int32Ex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInt32Ex, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("Int32Ex"));
	}
	return Z_Registration_Info_UScriptStruct_Int32Ex.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FInt32Ex>()
{
	return FInt32Ex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInt32Ex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInt32Ex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInt32Ex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInt32Ex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInt32Ex_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Int32Ex" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInt32Ex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInt32Ex, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FInt32Ex_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Ex_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInt32Ex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt32Ex_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInt32Ex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		&NewStructOps,
		"Int32Ex",
		sizeof(FInt32Ex),
		alignof(FInt32Ex),
		Z_Construct_UScriptStruct_FInt32Ex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Ex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInt32Ex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Ex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInt32Ex()
	{
		if (!Z_Registration_Info_UScriptStruct_Int32Ex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Int32Ex.InnerSingleton, Z_Construct_UScriptStruct_FInt32Ex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Int32Ex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Int16Ex;
class UScriptStruct* FInt16Ex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Int16Ex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Int16Ex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInt16Ex, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("Int16Ex"));
	}
	return Z_Registration_Info_UScriptStruct_Int16Ex.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FInt16Ex>()
{
	return FInt16Ex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInt16Ex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInt16Ex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInt16Ex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInt16Ex>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInt16Ex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		&NewStructOps,
		"Int16Ex",
		sizeof(FInt16Ex),
		alignof(FInt16Ex),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInt16Ex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt16Ex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInt16Ex()
	{
		if (!Z_Registration_Info_UScriptStruct_Int16Ex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Int16Ex.InnerSingleton, Z_Construct_UScriptStruct_FInt16Ex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Int16Ex.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSteamItemDef>() == std::is_polymorphic<FInt32Ex>(), "USTRUCT FSteamItemDef cannot be polymorphic unless super FInt32Ex is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamItemDef;
class UScriptStruct* FSteamItemDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamItemDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemDef, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("SteamItemDef"));
	}
	return Z_Registration_Info_UScriptStruct_SteamItemDef.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FSteamItemDef>()
{
	return FSteamItemDef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamItemDef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ===== Inventory =====\n" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
		{ "ToolTip", "===== Inventory =====" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamItemDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemDef>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		Z_Construct_UScriptStruct_FInt32Ex,
		&NewStructOps,
		"SteamItemDef",
		sizeof(FSteamItemDef),
		alignof(FSteamItemDef),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamItemDef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamItemDef.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemDef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamItemDef.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSteamItemInstanceID>() == std::is_polymorphic<FUint64Ex>(), "USTRUCT FSteamItemInstanceID cannot be polymorphic unless super FUint64Ex is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamItemInstanceID;
class UScriptStruct* FSteamItemInstanceID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemInstanceID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamItemInstanceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemInstanceID, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("SteamItemInstanceID"));
	}
	return Z_Registration_Info_UScriptStruct_SteamItemInstanceID.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FSteamItemInstanceID>()
{
	return FSteamItemInstanceID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemInstanceID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		Z_Construct_UScriptStruct_FUint64Ex,
		&NewStructOps,
		"SteamItemInstanceID",
		sizeof(FSteamItemInstanceID),
		alignof(FSteamItemInstanceID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamItemInstanceID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamItemInstanceID.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamItemInstanceID.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSteamInventoryResult>() == std::is_polymorphic<FInt32Ex>(), "USTRUCT FSteamInventoryResult cannot be polymorphic unless super FInt32Ex is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamInventoryResult;
class UScriptStruct* FSteamInventoryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamInventoryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryResult, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("SteamInventoryResult"));
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryResult.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FSteamInventoryResult>()
{
	return FSteamInventoryResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamInventoryResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryResult>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		Z_Construct_UScriptStruct_FInt32Ex,
		&NewStructOps,
		"SteamInventoryResult",
		sizeof(FSteamInventoryResult),
		alignof(FSteamInventoryResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamInventoryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamInventoryResult.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamInventoryResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamItemDetails;
class UScriptStruct* FSteamItemDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamItemDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemDetails, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("SteamItemDetails"));
	}
	return Z_Registration_Info_UScriptStruct_SteamItemDetails.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FSteamItemDetails>()
{
	return FSteamItemDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamItemDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "SteamItemDetails" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemDetails, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_ItemID_MetaData)) }; // 1105309507
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition_MetaData[] = {
		{ "Category", "SteamItemDetails" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemDetails, Definition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition_MetaData)) }; // 4093002629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "SteamItemDetails" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemDetails, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamworksExtension_ESteamItemFlags_BP, METADATA_PARAMS(nullptr, 0) }; // 697084138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "SteamItemDetails" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemDetails, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_MetaData)) }; // 697084138
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		&NewStructOps,
		"SteamItemDetails",
		sizeof(FSteamItemDetails),
		alignof(FSteamItemDetails),
		Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamItemDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamItemDetails.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamItemDetails.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSteamInventoryUpdateHandle>() == std::is_polymorphic<FUint64Ex>(), "USTRUCT FSteamInventoryUpdateHandle cannot be polymorphic unless super FUint64Ex is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamInventoryUpdateHandle;
class UScriptStruct* FSteamInventoryUpdateHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryUpdateHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamInventoryUpdateHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("SteamInventoryUpdateHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryUpdateHandle.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FSteamInventoryUpdateHandle>()
{
	return FSteamInventoryUpdateHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryUpdateHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		Z_Construct_UScriptStruct_FUint64Ex,
		&NewStructOps,
		"SteamInventoryUpdateHandle",
		sizeof(FSteamInventoryUpdateHandle),
		alignof(FSteamInventoryUpdateHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamInventoryUpdateHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamInventoryUpdateHandle.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamInventoryUpdateHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamItemPriceData;
class UScriptStruct* FSteamItemPriceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemPriceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamItemPriceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemPriceData, Z_Construct_UPackage__Script_SteamworksExtension(), TEXT("SteamItemPriceData"));
	}
	return Z_Registration_Info_UScriptStruct_SteamItemPriceData.OuterSingleton;
}
template<> STEAMWORKSEXTENSION_API UScriptStruct* StaticStruct<FSteamItemPriceData>()
{
	return FSteamItemPriceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamItemPriceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPrice_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_CurrentPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePrice_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BasePrice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemPriceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_ItemDef_MetaData[] = {
		{ "Category", "SteamItemPriceData" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemPriceData, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_ItemDef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_ItemDef_MetaData)) }; // 4093002629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_CurrentPrice_MetaData[] = {
		{ "Category", "SteamItemPriceData" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_CurrentPrice = { "CurrentPrice", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemPriceData, CurrentPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_CurrentPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_CurrentPrice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_BasePrice_MetaData[] = {
		{ "Category", "SteamItemPriceData" },
		{ "ModuleRelativePath", "Public/SteamworksAPI.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_BasePrice = { "BasePrice", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemPriceData, BasePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_BasePrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_BasePrice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_CurrentPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewProp_BasePrice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksExtension,
		nullptr,
		&NewStructOps,
		"SteamItemPriceData",
		sizeof(FSteamItemPriceData),
		alignof(FSteamItemPriceData),
		Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamItemPriceData()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamItemPriceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamItemPriceData.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamItemPriceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_Statics::EnumInfo[] = {
		{ ESteamResult_StaticEnum, TEXT("ESteamResult"), &Z_Registration_Info_UEnum_ESteamResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2208837127U) },
		{ ESteamGameOverlayTypes_StaticEnum, TEXT("ESteamGameOverlayTypes"), &Z_Registration_Info_UEnum_ESteamGameOverlayTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1345040405U) },
		{ ESteamGameUserOverlayTypes_StaticEnum, TEXT("ESteamGameUserOverlayTypes"), &Z_Registration_Info_UEnum_ESteamGameUserOverlayTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2974265815U) },
		{ ESteamOverlayToStoreFlag_StaticEnum, TEXT("ESteamOverlayToStoreFlag"), &Z_Registration_Info_UEnum_ESteamOverlayToStoreFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 177917171U) },
		{ ESteamItemFlags_BP_StaticEnum, TEXT("ESteamItemFlags_BP"), &Z_Registration_Info_UEnum_ESteamItemFlags_BP, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 697084138U) },
		{ ESteamChatEntryType_StaticEnum, TEXT("ESteamChatEntryType"), &Z_Registration_Info_UEnum_ESteamChatEntryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1289089358U) },
		{ ESteamAvatarSizes_StaticEnum, TEXT("ESteamAvatarSizes"), &Z_Registration_Info_UEnum_ESteamAvatarSizes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2166052401U) },
		{ ESteamPersonaChange_StaticEnum, TEXT("ESteamPersonaChange"), &Z_Registration_Info_UEnum_ESteamPersonaChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2307038629U) },
		{ ESteamChatMemberStateChange_StaticEnum, TEXT("ESteamChatMemberStateChange"), &Z_Registration_Info_UEnum_ESteamChatMemberStateChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 327951423U) },
		{ ESteamChatRoomEnterResponse_StaticEnum, TEXT("ESteamChatRoomEnterResponse"), &Z_Registration_Info_UEnum_ESteamChatRoomEnterResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 935669390U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_Statics::ScriptStructInfo[] = {
		{ FUint64Ex::StaticStruct, Z_Construct_UScriptStruct_FUint64Ex_Statics::NewStructOps, TEXT("Uint64Ex"), &Z_Registration_Info_UScriptStruct_Uint64Ex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUint64Ex), 45036319U) },
		{ FUint32Ex::StaticStruct, Z_Construct_UScriptStruct_FUint32Ex_Statics::NewStructOps, TEXT("Uint32Ex"), &Z_Registration_Info_UScriptStruct_Uint32Ex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUint32Ex), 1242613048U) },
		{ FInt32Ex::StaticStruct, Z_Construct_UScriptStruct_FInt32Ex_Statics::NewStructOps, TEXT("Int32Ex"), &Z_Registration_Info_UScriptStruct_Int32Ex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInt32Ex), 440544896U) },
		{ FInt16Ex::StaticStruct, Z_Construct_UScriptStruct_FInt16Ex_Statics::NewStructOps, TEXT("Int16Ex"), &Z_Registration_Info_UScriptStruct_Int16Ex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInt16Ex), 2455708196U) },
		{ FSteamItemDef::StaticStruct, Z_Construct_UScriptStruct_FSteamItemDef_Statics::NewStructOps, TEXT("SteamItemDef"), &Z_Registration_Info_UScriptStruct_SteamItemDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemDef), 4093002629U) },
		{ FSteamItemInstanceID::StaticStruct, Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::NewStructOps, TEXT("SteamItemInstanceID"), &Z_Registration_Info_UScriptStruct_SteamItemInstanceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemInstanceID), 1105309507U) },
		{ FSteamInventoryResult::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewStructOps, TEXT("SteamInventoryResult"), &Z_Registration_Info_UScriptStruct_SteamInventoryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryResult), 631756268U) },
		{ FSteamItemDetails::StaticStruct, Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewStructOps, TEXT("SteamItemDetails"), &Z_Registration_Info_UScriptStruct_SteamItemDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemDetails), 826059081U) },
		{ FSteamInventoryUpdateHandle::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::NewStructOps, TEXT("SteamInventoryUpdateHandle"), &Z_Registration_Info_UScriptStruct_SteamInventoryUpdateHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryUpdateHandle), 2303703810U) },
		{ FSteamItemPriceData::StaticStruct, Z_Construct_UScriptStruct_FSteamItemPriceData_Statics::NewStructOps, TEXT("SteamItemPriceData"), &Z_Registration_Info_UScriptStruct_SteamItemPriceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemPriceData), 1342339049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_1138770573(TEXT("/Script/SteamworksExtension"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BLACKENGINE_Plugins_SteamworksExtension_Source_SteamworksExtension_Public_SteamworksAPI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
