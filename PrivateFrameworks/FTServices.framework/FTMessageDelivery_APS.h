/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSMutableDictionary, APSConnection, NSMutableArray;

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate> {
    Class _APSConnectionClass;
    Class _APSOutgoingMessageClass;
    APSConnection *_connection;
    int _messageSize;
    NSMutableArray *_enabledTopics;
    NSMutableDictionary *_ftMessageMap;
    NSMutableDictionary *_startDateMap;
    NSMutableDictionary *_bodyMap;
    NSMutableDictionary *_apsMessageMap;
    NSMutableDictionary *_timerMap;
    NSMutableDictionary *_deathTimerMap;
    NSMutableDictionary *_retriesMap;
}

+ (id)sharedInstance;

- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (id)_currentTimers;
- (id)_currentAPSMessages;
- (void)_noteMessageACKd:(id)arg1 ftMessage:(id)arg2;
- (BOOL)_isBusyWithMessage:(id)arg1;
- (void)_noteMessageSucceeded:(id)arg1 ftMessage:(id)arg2 error:(id)arg3 result:(id)arg4 resultCode:(int)arg5;
- (void)_powerLogEvent:(id)arg1 dictionary:(id)arg2;
- (id)_apsMessageBodyForMessage:(id)arg1;
- (id)_requiredTopics;
- (void)_sendMessage:(id)arg1 ftMessage:(id)arg2;
- (id)_bodyForMessage:(id)arg1;
- (void)_noteMessageFailed:(id)arg1 ftMessage:(id)arg2 allowRetry:(BOOL)arg3 error:(id)arg4;
- (void)_updateTopics;
- (void)_noteMessageSent:(id)arg1 ftMessage:(id)arg2 body:(id)arg3;
- (id)_apsMessageForMessage:(id)arg1 body:(id)arg2;
- (void)_messageSendTimedOut:(id)arg1;
- (void)_messageACKTimedOut:(id)arg1;
- (void)_clearMapForMessageID:(id)arg1;
- (void)_setMapForMessage:(id)arg1 apsMessage:(id)arg2 messageBody:(id)arg3 timeoutTime:(double)arg4 timeoutSelector:(SEL)arg5 retries:(id)arg6;
- (void)_messageNeedsRetry:(id)arg1;
- (int)_retryCountForMessage:(id)arg1;
- (BOOL)_fillMessageParameters:(id*)arg1 ftMessage:(id*)arg2;
- (id)_messageForAPSOutgoingMessage:(id)arg1;
- (id)_apsOutgoingMessageForFTMessage:(id)arg1;
- (id)_currentMessages;
- (void)_invalidateDeathTimerForMessageID:(id)arg1;
- (void)_messageCompletelyTimedOut:(id)arg1;
- (void)_invalidateTimerForMessageID:(id)arg1;
- (void)_updateWiFiAssertions;
- (void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2;
- (void)_dequeueIfNeeded;
- (void)_serverBagLoaded:(id)arg1;
- (int)maxMessageSize;
- (void)cancelMessage:(id)arg1;
- (BOOL)busy;
- (id)allMessages;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)invalidate;
- (BOOL)sendMessage:(id)arg1;
- (void)dealloc;

@end
