// Copyright 2022 RutenStudio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "SteamworksExtension.h"
#include "SteamworksAPI.h"
#include "Online.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemTypes.h"

#include "SteamworksExtensionUtils.generated.h"


using FUniqueNetIdSteamExRef = TSharedRef<const class FUniqueNetIdSteamEx>;
using FUniqueNetIdSteamExPtr = TSharedPtr<const class FUniqueNetIdSteamEX>;

/**
 * Steam specific implementation of the unique net id
 */
class FUniqueNetIdSteamEx : public FUniqueNetId
{
PACKAGE_SCOPE:
	/** Holds the net id for a player */
	uint64 UniqueNetId;

public:
	template<typename... TArgs>
	static FUniqueNetIdSteamExRef Create(TArgs&&... Args)
	{
		return MakeShareable(new FUniqueNetIdSteamEx(Forward<TArgs>(Args)...));
	}

	static const FUniqueNetIdSteamEx& Cast(const FUniqueNetId& NetId)
	{
		return *static_cast<const FUniqueNetIdSteamEx*>(&NetId);
	}

	FUniqueNetIdSteamExRef AsShared() const
	{
		return StaticCastSharedRef<const FUniqueNetIdSteamEx>(FUniqueNetId::AsShared());
	}

	virtual FName GetType() const override
	{
		return STEAM_SUBSYSTEM;
	}

	/**
	 * Get the raw byte representation of this net id
	 * This data is platform dependent and shouldn't be manipulated directly
	 *
	 * @return byte array of size GetSize()
	 */
	virtual const uint8* GetBytes() const override
	{
		return (uint8*)&UniqueNetId;
	}

	/**
	 * Get the size of the id
	 *
	 * @return size in bytes of the id representation
	 */
	virtual int32 GetSize() const override
	{
		return sizeof(uint64);
	}

	/**
	 * Check the validity of the id
	 *
	 * @return true if this is a well formed ID, false otherwise
	 */
	virtual bool IsValid() const override
	{
		return UniqueNetId != 0 && CSteamID(UniqueNetId).IsValid();
	}

	/**
	 * Platform specific conversion to string representation of data
	 *
	 * @return data in string form
	 */
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("%llu"), UniqueNetId);
	}

	/**
	 * Get a human readable representation of the net id
	 * Shouldn't be used for anything other than logging/debugging
	 *
	 * @return id in string form
	 */
	virtual FString ToDebugString() const override
	{
		const CSteamID SteamID(UniqueNetId);

		const FString HexStr = FString::Printf(TEXT("[0x%llX]"), UniqueNetId);
		if (SteamID.IsLobby())
		{
			return TEXT("Lobby") + OSS_UNIQUEID_REDACT(*this, HexStr);
		}
		else if (SteamID.BAnonGameServerAccount())
		{
			return TEXT("Server") + OSS_UNIQUEID_REDACT(*this, HexStr);
		}
		else if (SteamID.IsValid())
		{
			const FString NickName(SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaName(UniqueNetId)) : TEXT("UNKNOWN"));
			return FString::Printf(TEXT("%s %s"), *NickName, *OSS_UNIQUEID_REDACT(*this, HexStr));
		}
		else
		{
			return TEXT("INVALID") + OSS_UNIQUEID_REDACT(*this, HexStr);
		}
	}

	static FString ToDebugString(CSteamID SteamID)
	{
		// Safe to use a local variable in this specific case, nothing will call AsShared on it.
		return FUniqueNetIdSteamEx(SteamID).ToDebugString();
	}

	/** Needed for TMap::GetTypeHash() */
	friend uint32 GetTypeHash(const FUniqueNetIdSteamEx& A)
	{
		return GetTypeHash(A.UniqueNetId);
	}

	/** global static instance of invalid (zero) id */
	static const FUniqueNetIdSteamExRef& EmptyId()
	{
		static const FUniqueNetIdSteamExRef EmptyId(Create());
		return EmptyId;
	}

	/** Convenience cast to CSteamID */
	operator CSteamID()
	{
		return UniqueNetId;
	}

	/** Convenience cast to CSteamID */
	operator const CSteamID() const
	{
		return UniqueNetId;
	}

	/** Convenience cast to CSteamID pointer */
	operator CSteamID* ()
	{
		return (CSteamID*)&UniqueNetId;
	}

	/** Convenience cast to CSteamID pointer */
	operator const CSteamID* () const
	{
		return (const CSteamID*)&UniqueNetId;
	}

private:
	/** Hidden on purpose */
	FUniqueNetIdSteamEx() :
		UniqueNetId(0)
	{
	}

	/**
	 * Copy Constructor
	 *
	 * @param Src the id to copy
	 */
	explicit FUniqueNetIdSteamEx(const FUniqueNetIdSteamEx& Src) :
		UniqueNetId(Src.UniqueNetId)
	{
	}

	/**
	 * Constructs this object with the specified net id
	 *
	 * @param InUniqueNetId the id to set ours to
	 */
	explicit FUniqueNetIdSteamEx(uint64 InUniqueNetId) :
		UniqueNetId(InUniqueNetId)
	{
	}

	/**
	 * Constructs this object with the steam id
	 *
	 * @param InUniqueNetId the id to set ours to
	 */
	explicit FUniqueNetIdSteamEx(CSteamID InSteamId) :
		UniqueNetId(InSteamId.ConvertToUint64())
	{
	}

	/**
	 * Constructs this object with the specified net id
	 *
	 * @param String textual representation of an id
	 */
	explicit FUniqueNetIdSteamEx(const FString& Str) :
		UniqueNetId(FCString::Atoi64(*Str))
	{
	}

	/**
	 * Constructs this object with the specified net id
	 *
	 * @param InUniqueNetId the id to set ours to (assumed to be FUniqueNetIdSteam in fact)
	 */
	explicit FUniqueNetIdSteamEx(const FUniqueNetId& InUniqueNetId) :
		UniqueNetId(*(uint64*)InUniqueNetId.GetBytes())
	{
	}
};


// ================================================
//   Steamworks Friends Extension Utilities
// ================================================
UCLASS()
class STEAMWORKSEXTENSION_API USteamworksExtensionUtils : public UObject
{
	GENERATED_BODY()
public:
	static void ConvertIPStringToUint32(const FString& IP, uint32& OutIP);

	static FString ConvertIPToString(uint32 IP);

	static FUniqueNetIdRepl ConvertSteamIdToUniqueNetId(CSteamID SteamID);

	// Thanks to Rama for this method
	// GetEnumValueAsString<EEnumType>("EEnumType", Value);
	template <typename TEnum>
	static FString GetEnumValueAsString(const FString& Name, TEnum Value)
	{
		const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, *Name, true);
		if (!enumPtr)
		{
			return FString("Invalid");
		}
		return enumPtr->GetNameByValue((int64)Value).ToString();
	}

	static FString GetEnumValueAsStringParsed(const FString& Data)
	{
		FString NewString = Data;
		FString Left, Right;
		NewString.Split(TEXT("::"), &Left, &Right);
		return Right;
	}
};
