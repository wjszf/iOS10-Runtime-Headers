/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSMutableDictionary;

@interface DADConnection : NSObject  {
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _statusReportBlock;

    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightShareRequests;
}

+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnectionIfServerIsRunning;
+ (id)sharedConnection;

- (void)fillOutCurrentEASTimeZoneInfo;
- (BOOL)registerForInterrogationWithBlock:(id)arg1;
- (id)statusReports;
- (BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (void)respondToSharedCalendarInvite:(int)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(id)arg4 completionBlock:(id)arg5;
- (void)handleURL:(id)arg1;
- (void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 andAccountWithID:(id)arg3;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (BOOL)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2;
- (void)requestDaemonShutdown;
- (void)removeStoresForAccountWithID:(id)arg1;
- (void)_requestDaemonStopMonitoringAgents_Sync;
- (void)requestDaemonStartMonitoringAgents_Sync;
- (void)requestDaemonStopMonitoringAgents;
- (void)requestDaemonStartMonitoringAgents;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (BOOL)requestPolicyUpdateForAccountID:(id)arg1;
- (BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (void)_shareResponseFinished:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_policyKeyChanged:(id)arg1;
- (void)_foldersUpdated:(id)arg1;
- (void)resetTimersAndWarnings;
- (void)_registerForAppResumedNotification;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(id)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(int)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1 waitForReply:(BOOL)arg2;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (id)decodedErrorFromData:(id)arg1;
- (void)_dispatchMessage:(id)arg1;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_reallyRegisterForInterrogation;
- (void)_tearDownInFlightObjects;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3 isUserRequested:(BOOL)arg4;
- (void)cancelServerContactsSearch:(id)arg1;
- (BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)_init;

@end
