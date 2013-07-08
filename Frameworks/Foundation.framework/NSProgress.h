/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSXPCConnection, NSProgress, NSMutableDictionary;

@interface NSProgress : NSObject <NSProgressPublisher> {
    NSProgress *_parent;
    long long _portionOfParentUnitCount;
    id _values;
    id _valuesSeenFromMainThread;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancellationHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pausingHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _prioritizationHandler;

    long long _pendingUnitCount;
    id _userInfoProxy;
    NSString *_publisherID;
    NSXPCConnection *_connection;
    int _unpublishingBlockageCount;
    int _disconnectingBlockageCount;
    int _remoteObserverCount;
    NSMutableDictionary *_acknowledgementHandlersByBundleID;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    id _reserved1;
    id _reserved2;
}

@property unsigned int installState;
@property unsigned int installPhase;
@property long long totalUnitCount;
@property long long completedUnitCount;
@property(copy) NSString * localizedDescription;
@property(copy) NSString * localizedAdditionalDescription;
@property(getter=isCancellable) BOOL cancellable;
@property(getter=isPausable) BOOL pausable;
@property(getter=isCancelled,readonly) BOOL cancelled;
@property(getter=isPaused,readonly) BOOL paused;
@property(copy) id cancellationHandler;
@property(copy) id pausingHandler;
@property(getter=isIndeterminate,readonly) BOOL indeterminate;
@property(readonly) double fractionCompleted;
@property(copy) NSString * kind;
@property(getter=isOld,readonly) BOOL old;

+ (void)_removeSubscriber:(id)arg1;
+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(id)arg2;
+ (id)_subscriberInterface;
+ (id)_addGeneralSubscriberUsingBlock:(id)arg1;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (id)keyPathsForValuesAffectingFractionCompleted;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (void)removeSubscriber:(id)arg1;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (id)_publisherInterface;
+ (id)_registrarInterface;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (id)currentProgress;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingInstallPhase;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)childProgressForParent:(id)arg1 andPhase:(unsigned int)arg2;
+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned int)arg2;
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned int)arg2;

- (BOOL)isPaused;
- (id)init;
- (id)userInfo;
- (id)localizedDescription;
- (void)setPrioritizationHandler:(id)arg1;
- (void)setCancellationHandler:(id)arg1;
- (void)setPausingHandler:(id)arg1;
- (BOOL)isPrioritizable;
- (BOOL)isCancellable;
- (BOOL)isPausable;
- (double)fractionCompleted;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setPrioritizable:(BOOL)arg1;
- (void)setCancellable:(BOOL)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)_unpublish;
- (void)_publish;
- (void)dealloc;
- (void)cancel;
- (id)kind;
- (void)acknowledge;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(id)arg2;
- (void)_setValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;
- (id)_initWithValues:(id)arg1;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(id)arg2;
- (id)prioritizationHandler;
- (id)_publishingAppBundleIdentifier;
- (void)_acknowledgeWithSuccess:(BOOL)arg1;
- (id)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (BOOL)isOld;
- (void)setKind:(id)arg1;
- (BOOL)isIndeterminate;
- (id)pausingHandler;
- (id)cancellationHandler;
- (id)localizedAdditionalDescription;
- (void)setLocalizedAdditionalDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (long long)completedUnitCount;
- (long long)totalUnitCount;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (oneway void)prioritize;
- (void)pause;
- (oneway void)stopProvidingValues;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)arg1;
- (void)_prioritize;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (id)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)unpublish;
- (void)_unblockDisconnecting;
- (void)_pause;
- (void)_cancel;
- (double)_fractionCompletedUsingValuesFinder:(id)arg1;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_getValueUsingBlock:(id)arg1;
- (void)__setValueForKey:(id)arg1 usingBlock:(id)arg2;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)_unblockUnpublishing;
- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)_setValueForKey:(id)arg1 usingBlock:(id)arg2;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (id)ownedDictionaryKeyEnumerator;
- (unsigned int)ownedDictionaryCount;
- (void)publish;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (BOOL)isCancelled;
- (void)setInstallPhase:(unsigned int)arg1;
- (unsigned int)installPhase;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned int)arg3;
- (unsigned int)installState;
- (void)setInstallState:(unsigned int)arg1;
- (id)description;
- (void)resume;

@end
