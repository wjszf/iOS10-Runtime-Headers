/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class IMConnectionMonitor, IMSystemProxySettingsFetcher, IMDService, NSRecursiveLock, NSMutableSet, NSArray, IMDAccount, NSDictionary, IMTimer, NSString, NSMutableDictionary, NSTimer;

@interface IMDServiceSession : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol> {
    NSRecursiveLock *_lock;
    IMDAccount *_account;
    NSString *_loginStatusMessage;
    NSMutableDictionary *_localProperties;
    NSMutableSet *_changedBuddies;
    NSMutableSet *_registeredChats;
    NSMutableDictionary *_groupChatIdentifierToChatRoomMap;
    NSMutableDictionary *_chatRoomToGroupChatIdentifierMap;
    NSMutableDictionary *_chatSuppressionFlagMap;
    NSMutableDictionary *_chatSuppressionTimerMap;
    NSMutableDictionary *_suppressedMessages;
    IMTimer *_messageRoutingTimer;
    NSTimer *_storageTimer;
    NSMutableSet *_messagesReceivedDuringStorage;
    IMConnectionMonitor *_connectionMonitor;
    NSTimer *_reconnectTimer;
    NSString *_loginID;
    NSString *_pwRequestID;
    IMSystemProxySettingsFetcher *_systemProxySettingsFetcher;
    int _buddyChangeLevel;
    unsigned int _loginStatus;
    int _disconnectReason;
    BOOL _activated;
    BOOL _saveKeychainPassword;
    BOOL _awaitingDataContext;
    BOOL _shouldReconnect;
    BOOL _badPass;
    IMDService *_service;
    NSMutableDictionary *_buddies;
    NSString *_proxyHost;
    NSString *_proxyAccount;
    NSString *_proxyPassword;
    NSString *_password;
    NSString *_serverHost;
    int _proxyType;
    unsigned short _proxyPort;
    BOOL _useSSL;
    unsigned short _serverPort;
}

@property(readonly) NSArray * allBuddies;
@property(readonly) NSDictionary * buddyProperties;
@property(readonly) NSDictionary * buddyPictures;
@property(readonly) int registrationStatus;
@property(readonly) int registrationError;
@property(readonly) NSDictionary * registrationAlertInfo;
@property(readonly) IMDAccount * account;
@property(readonly) IMDService * service;
@property(readonly) NSString * accountID;
@property(readonly) NSString * password;
@property(readonly) NSDictionary * accountDefaults;
@property(readonly) NSString * serverHost;
@property(readonly) unsigned short serverPort;
@property(readonly) int proxyType;
@property(readonly) NSString * proxyHost;
@property(readonly) unsigned short proxyPort;
@property(readonly) NSString * proxyAccount;
@property(readonly) NSString * proxyPassword;
@property(readonly) BOOL useSSL;
@property(readonly) BOOL isActive;
@property(readonly) NSString * displayName;
@property(readonly) BOOL accountNeedsLogin;
@property(readonly) BOOL accountNeedsPassword;
@property(readonly) BOOL accountShouldBeAlwaysLoggedIn;
@property(readonly) BOOL allowedAsChild;
@property(readonly) BOOL networkConditionsAllowLogin;
@property(readonly) unsigned int serviceLoginStatus;
@property(readonly) int serviceDisconnectReason;
@property(readonly) NSString * serviceLoginStatusMessage;

+ (id)_firewallUserNotificationForService:(id)arg1;
+ (void)initialize;

- (void)_autoReconnectTimer:(id)arg1;
- (void)serviceSessionDidLogoutWithMessage:(id)arg1 reason:(int)arg2 properties:(id)arg3;
- (void)serviceSessionDidLogout;
- (void)serviceSessionDidLogin;
- (void)_wentOffline;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2;
- (void)_login_checkUsernameAndPassword;
- (void)_login_usernameAndPasswordReady;
- (void)_data_connection_ready;
- (void)_forceSetLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)_login_serverSettingsReady;
- (BOOL)warnIfPortBlocked:(int)arg1 forAction:(id)arg2;
- (void)_handleFirewallUserNotificationDidFinish:(id)arg1;
- (void)loginServiceSession;
- (void)noteBadPassword;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4;
- (void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2;
- (void)leaveChat:(id)arg1 style:(unsigned char)arg2;
- (void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4;
- (void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3;
- (void)disallowReconnection;
- (void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (void)clearLocalProperties;
- (id)localProperty:(id)arg1 ofBuddy:(id)arg2;
- (id)property:(id)arg1 ofBuddy:(id)arg2;
- (void)clearPropertiesOfBuddy:(id)arg1;
- (void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (void)markBuddiesAsChanged:(id)arg1;
- (id)allBuddies;
- (id)pictureKeyForBuddy:(id)arg1;
- (id)pictureOfBuddy:(id)arg1;
- (id)buddyPictures;
- (id)localPropertiesOfBuddy:(id)arg1;
- (void)endBuddyChanges;
- (void)beginBuddyChanges;
- (void)noteLastItemFromStorage:(id)arg1;
- (void)noteItemFromStorage:(id)arg1;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveInvitation:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)notifyDidSendMessageID:(id)arg1;
- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(id)arg3;
- (void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 completionBlock:(id)arg3;
- (void)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2;
- (void)didReceiveError:(unsigned int)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3;
- (void)didReceiveErrorMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveReplaceMessageID:(int)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2;
- (void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 completionBlock:(id)arg4;
- (BOOL)isChatRegistered:(id)arg1 style:(unsigned char)arg2;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2;
- (void)_updateStorageTimerWithInterval:(double)arg1;
- (void)_storageTimerFired;
- (void)_routingTimerFired;
- (void)_handleRoutingWithDictionary:(id)arg1;
- (void)_markChatAsDowngraded:(id)arg1;
- (void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 unformattedNumber:(id)arg3 countryCode:(id)arg4 forChat:(id)arg5 style:(unsigned char)arg6;
- (void)unregisterChat:(id)arg1 style:(unsigned char)arg2;
- (void)useChatRoom:(id)arg1 forGroupChatIdentifier:(id)arg2;
- (void)_setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2;
- (void)_suppresionTimerFired:(id)arg1;
- (void)_endMessageSuppressionForChatGUID:(id)arg1;
- (void)_updateRoutingForMessageGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3;
- (BOOL)canMakeDowngradeRoutingChecks;
- (void)_didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 completionBlock:(id)arg4;
- (void)_didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 completionBlock:(id)arg4;
- (void)noteSuppressedMessageUpdate:(id)arg1;
- (BOOL)isAwaitingStorageTimer;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 handleInfo:(id)arg4;
- (void)didLeaveChat:(id)arg1 style:(unsigned char)arg2;
- (void)didSendMessageReadReceiptForMessageID:(id)arg1;
- (void)_mapRoomChatToGroupChat:(id*)arg1 style:(unsigned char*)arg2;
- (void)canonicalizeChatIdentifier:(id*)arg1 style:(unsigned char*)arg2;
- (id)groupChatIdentifierForChatRoom:(id)arg1;
- (id)chatRoomForGroupChatIdentifier:(id)arg1;
- (BOOL)shouldImitateGroupChatUsingChatRooms;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;
- (int)serviceDisconnectReason;
- (id)proxyAccount;
- (id)proxyHost;
- (id)serverHost;
- (void)_clearDowngradeMarkersForChat:(id)arg1;
- (id)broadcasterForVCConferenceListeners;
- (id)broadcasterForACConferenceListeners;
- (id)broadcasterForAVConferenceListeners;
- (id)broadcasterForChatObserverListeners;
- (void)refreshServiceCapabilities;
- (id)canonicalFormOfChatRoom:(id)arg1;
- (BOOL)networkConditionsAllowLogin;
- (void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (BOOL)accountNeedsPassword;
- (BOOL)accountNeedsLogin;
- (void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;
- (void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(id)arg4 conference:(id)arg5;
- (void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3;
- (void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3;
- (void)sendFileTransfer:(id)arg1 toPerson:(id)arg2;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1;
- (void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 joinProperties:(id)arg5;
- (void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3;
- (void)requestProperty:(id)arg1 ofPerson:(id)arg2;
- (void)stopWatchingBuddy:(id)arg1;
- (void)startWatchingBuddy:(id)arg1;
- (void)requestSubscriptionTo:(id)arg1;
- (void)acceptSubscriptionRequest:(BOOL)arg1 from:(id)arg2;
- (void)changeGroup:(id)arg1 changes:(id)arg2;
- (void)changeGroups:(id)arg1;
- (id)broadcasterForChatListeners;
- (id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2;
- (void)endMessageSuppression;
- (id)broadcasterForListenersWithCapabilities:(unsigned int)arg1;
- (id)broadcaster;
- (BOOL)allowedAsChild;
- (void)autoReconnect;
- (void)_processPotentialNetworkChange;
- (void)_setPendingConnectionMonitorUpdate;
- (void)_reconnectIfNecessary;
- (void)logoutServiceSession;
- (void)_doLoginIgnoringProxy:(BOOL)arg1;
- (BOOL)accountShouldBeAlwaysLoggedIn;
- (void)_updateConnectionMonitorWithRemoteHost:(id)arg1;
- (void)leaveAllChats;
- (void)_updateRoutingTimerWithInterval:(double)arg1;
- (void)_clearConnectionMonitor;
- (void)_clearAutoReconnectTimer;
- (void)_abandonPWFetcher;
- (void)_abandonSystemProxySettingsFetcher;
- (void)_processConnectionMonitorUpdate;
- (void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(BOOL)arg1;
- (void)_callMonitorStateChanged:(id)arg1;
- (void)_networkChanged:(id)arg1;
- (id)_newHashForChat:(id)arg1 style:(unsigned char)arg2;
- (void)_setAutoReconnectTimer;
- (id)registrationAlertInfo;
- (int)registrationError;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)setIdleTime:(unsigned long)arg1;
- (void)sessionWillBecomeInactive;
- (void)changeMyStatus:(id)arg1 changedKeys:(id)arg2;
- (void)sessionDidBecomeActive;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (id)buddyProperties;
- (id)serviceLoginStatusMessage;
- (unsigned int)serviceLoginStatus;
- (void)accountDefaultsChanged:(id)arg1;
- (id)accountDefaults;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)validateProfile;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)passwordUpdated;
- (void)authenticateAccount;
- (int)registrationStatus;
- (id)loginID;
- (unsigned long long)capabilities;
- (void)_managedPrefsNotification:(id)arg1;
- (struct _FZChatRoomValidity { int x1; unsigned short x2; })validityOfChatRoomName:(id)arg1;
- (void)resumeBuddyUpdates;
- (void)holdBuddyUpdates;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)autoLogin;
- (id)defaultChatSuffix;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (void)requestGroups;
- (void)setAllowList:(id)arg1;
- (void)setBlockingMode:(unsigned int)arg1;
- (void)setBlockList:(id)arg1;
- (id)allowList;
- (id)blockList;
- (unsigned int)blockingMode;
- (void)setBlockIdleStatus:(BOOL)arg1;
- (BOOL)blockIdleStatus;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (id)canonicalFormOfID:(id)arg1;
- (void)logout;
- (void)login;
- (BOOL)useSSL;
- (id)proxyPassword;
- (unsigned short)proxyPort;
- (id)displayName;
- (id)accountID;
- (BOOL)isActive;
- (void)userNotificationDidFinish:(id)arg1;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)systemDidUnlock;
- (id)service;
- (id)account;
- (void)systemProxySettingsFetcher:(id)arg1 retrievedAccount:(id)arg2 password:(id)arg3;
- (void)systemProxySettingsFetcher:(id)arg1 retrievedHost:(id)arg2 port:(unsigned short)arg3 protocol:(int)arg4;
- (id)groups;
- (id)server;
- (id)password;
- (void)dealloc;
- (int)proxyType;
- (unsigned short)serverPort;

@end
