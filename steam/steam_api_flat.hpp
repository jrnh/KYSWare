#ifndef STEAMAPIFLAT_H
#define STEAMAPIFLAT_H
#ifdef _WIN32
#pragma once
#endif
#include <stdint.h>
typedef unsigned char uint8;
typedef unsigned char uint8;
typedef signed char int8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef int64 lint64;
typedef uint64 ulint64;
typedef uint8 Salt_t[8];
typedef uint64 GID_t;
typedef uint64 JobID_t;
typedef GID_t TxnID_t;
typedef uint32 PackageId_t;
typedef uint32 BundleId_t;
typedef uint32 AppId_t;
typedef uint64 AssetClassId_t;
typedef uint32 PhysicalItemId_t;
typedef uint32 DepotId_t;
typedef uint32 RTime32;
typedef uint32 CellID_t;
typedef uint64 SteamAPICall_t;
typedef uint32 AccountID_t;
typedef uint32 PartnerId_t;
typedef uint64 ManifestId_t;
typedef uint64 SiteId_t;
typedef uint32 HAuthTicket;
typedef void * BREAKPAD_HANDLE;
typedef char compile_time_assert_type[1];
typedef int32 HSteamPipe;
typedef int32 HSteamUser;
typedef int16 FriendsGroupID_t;
typedef void * HServerListRequest;
typedef int HServerQuery;
typedef uint64 UGCHandle_t;
typedef uint64 PublishedFileUpdateHandle_t;
typedef uint64 PublishedFileId_t;
typedef uint64 UGCFileWriteStreamHandle_t;
typedef char compile_time_assert_type[1];
typedef uint64 SteamLeaderboard_t;
typedef uint64 SteamLeaderboardEntries_t;
typedef uint32 SNetSocket_t;
typedef uint32 SNetListenSocket_t;
typedef uint32 ScreenshotHandle;
typedef uint32 HTTPRequestHandle;
typedef uint32 HTTPCookieContainerHandle;
typedef uint64 ControllerHandle_t;
typedef uint64 ControllerActionSetHandle_t;
typedef uint64 ControllerDigitalActionHandle_t;
typedef uint64 ControllerAnalogActionHandle_t;
typedef uint64 UGCQueryHandle_t;
typedef uint64 UGCUpdateHandle_t;
typedef uint32 HHTMLBrowser;
typedef uint64 SteamItemInstanceID_t;
typedef int32 SteamItemDef_t;
typedef int32 SteamInventoryResult_t;
typedef uint64 SteamInventoryUpdateHandle_t;
int const_k_iSteamUserCallbacks = 100;
int const_k_iSteamGameServerCallbacks = 200;
int const_k_iSteamFriendsCallbacks = 300;
int const_k_iSteamBillingCallbacks = 400;
int const_k_iSteamMatchmakingCallbacks = 500;
int const_k_iSteamContentServerCallbacks = 600;
int const_k_iSteamUtilsCallbacks = 700;
int const_k_iClientFriendsCallbacks = 800;
int const_k_iClientUserCallbacks = 900;
int const_k_iSteamAppsCallbacks = 1000;
int const_k_iSteamUserStatsCallbacks = 1100;
int const_k_iSteamNetworkingCallbacks = 1200;
int const_k_iClientRemoteStorageCallbacks = 1300;
int const_k_iClientDepotBuilderCallbacks = 1400;
int const_k_iSteamGameServerItemsCallbacks = 1500;
int const_k_iClientUtilsCallbacks = 1600;
int const_k_iSteamGameCoordinatorCallbacks = 1700;
int const_k_iSteamGameServerStatsCallbacks = 1800;
int const_k_iSteam2AsyncCallbacks = 1900;
int const_k_iSteamGameStatsCallbacks = 2000;
int const_k_iClientHTTPCallbacks = 2100;
int const_k_iClientScreenshotsCallbacks = 2200;
int const_k_iSteamScreenshotsCallbacks = 2300;
int const_k_iClientAudioCallbacks = 2400;
int const_k_iClientUnifiedMessagesCallbacks = 2500;
int const_k_iSteamStreamLauncherCallbacks = 2600;
int const_k_iClientControllerCallbacks = 2700;
int const_k_iSteamControllerCallbacks = 2800;
int const_k_iClientParentalSettingsCallbacks = 2900;
int const_k_iClientDeviceAuthCallbacks = 3000;
int const_k_iClientNetworkDeviceManagerCallbacks = 3100;
int const_k_iClientMusicCallbacks = 3200;
int const_k_iClientRemoteClientManagerCallbacks = 3300;
int const_k_iClientUGCCallbacks = 3400;
int const_k_iSteamStreamClientCallbacks = 3500;
int const_k_IClientProductBuilderCallbacks = 3600;
int const_k_iClientShortcutsCallbacks = 3700;
int const_k_iClientRemoteControlManagerCallbacks = 3800;
int const_k_iSteamAppListCallbacks = 3900;
int const_k_iSteamMusicCallbacks = 4000;
int const_k_iSteamMusicRemoteCallbacks = 4100;
int const_k_iClientVRCallbacks = 4200;
int const_k_iClientGameNotificationCallbacks = 4300;
int const_k_iSteamGameNotificationCallbacks = 4400;
int const_k_iSteamHTMLSurfaceCallbacks = 4500;
int const_k_iClientVideoCallbacks = 4600;
int const_k_iClientInventoryCallbacks = 4700;
int const_k_iClientBluetoothManagerCallbacks = 4800;
int const_k_iClientSharedConnectionCallbacks = 4900;
int const_k_ISteamParentalSettingsCallbacks = 5000;
int const_k_iClientShaderCallbacks = 5100;
int const_k_cchPersonaNameMax = 128;
int const_k_cwchPersonaNameMax = 32;
int const_k_cchMaxRichPresenceKeys = 20;
int const_k_cchMaxRichPresenceKeyLength = 64;
int const_k_cchMaxRichPresenceValueLength = 256;
int const_k_cchStatNameMax = 128;
int const_k_cchLeaderboardNameMax = 128;
int const_k_cLeaderboardDetailsMax = 64;
unsigned long const_k_SteamItemInstanceIDInvalid = 0xffffffff;
int const_k_SteamInventoryResultInvalid = -1;
#endif // STEAMAPIFLAT_H
