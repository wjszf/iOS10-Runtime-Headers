/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSDate, MFMessageLibrary, MFMessageCriterion;

@interface MFLibraryStore : MFMailMessageStore  {
    MFMessageLibrary *_library;
    NSDate *_earliestReceivedDate;
    MFMessageCriterion *_criterion;
    unsigned int _serverMessageCount;
    unsigned int _serverUnreadCount;
    unsigned int _fetchWindow;
}

@property(retain) NSDate * earliestReceivedDate;

+ (id)storeWithCriterion:(id)arg1;
+ (unsigned int)defaultLoadOptions;
+ (id)storeWithMailbox:(id)arg1;
+ (BOOL)storeAtPathIsWritable:(id)arg1;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;

- (id)earliestReceivedDate;
- (void)_setNeedsAutosave;
- (void)updateMetadata;
- (void)willFetchMessages;
- (id)serverSearchResults;
- (long long)oldestKnownConversation;
- (struct __CFDictionary { }*)copySendersByLibraryIDForConversation:(long long)arg1 limit:(int)arg2;
- (id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1;
- (id)copyOfMessageInfosMatchingCriterion:(id)arg1;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2;
- (void)libraryFinishedSendingMessages;
- (void)handleMessagesCompacted:(id)arg1;
- (void)handleMessagesWillBeCompacted:(id)arg1;
- (void)handleMessageFlagsChanged:(id)arg1;
- (void)_addInvocationToQueue:(id)arg1;
- (void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)purgeMessages:(id)arg1;
- (void)compactMessages:(id)arg1;
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned int)arg2 downloadIfNecessary:(BOOL)arg3;
- (BOOL)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 usePartDatas:(BOOL)arg5;
- (id)_memberMessagesWithCompactionNotification:(id)arg1;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)filterMessagesByMembership:(id)arg1;
- (unsigned int)_calculateFetchWindowWithAdditionalMultiple:(BOOL)arg1;
- (unsigned int)_fetchWindowMinimum;
- (unsigned int)_fetchWindowMultiple;
- (BOOL)_isSingleCoreDevice;
- (void)setEarliestReceivedDate:(id)arg1;
- (void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(BOOL)arg2;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 generation:(unsigned int*)arg3;
- (id)copyOfMessageInfos;
- (void)_updateMailboxUnreadCount;
- (void)_queueMessagesWereCompacted:(id)arg1;
- (void)_queueMessagesWillBeCompacted:(id)arg1;
- (void)_queueMessageFlagsChanged:(id)arg1;
- (void)_queueMessagesAdded:(id)arg1;
- (id)initWithCriterion:(id)arg1;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;
- (id)mailbox;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)criterion;
- (id)initWithMailbox:(id)arg1;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (BOOL)allowsAppend;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (void)doCompact;
- (BOOL)canCompact;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)mutableCopyOfAllMessages;
- (unsigned int)indexOfMessage:(id)arg1;
- (BOOL)hasMessageForAccount:(id)arg1;
- (unsigned int)unreadCountMatchingCriterion:(id)arg1;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg1 keepingMessage:(id)arg2;
- (unsigned int)growFetchWindow;
- (void)invalidateFetchWindow;
- (BOOL)shouldGrowFetchWindow;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (BOOL)shouldCancel;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (unsigned int)fetchWindow;
- (unsigned int)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (unsigned int)totalCount;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)updateUserInfoToLatestValues;
- (void)openSynchronously;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (BOOL)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5;
- (void)_flushAllCachesLocking:(BOOL)arg1;
- (BOOL)hasCompleteDataForMimePart:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (void)writeUpdatedMessageDataToDisk;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (unsigned int)unreadCount;
- (id)library;
- (void)setLibrary:(id)arg1;
- (id)URLString;
- (void)dealloc;

@end
