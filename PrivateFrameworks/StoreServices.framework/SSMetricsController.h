/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSMetricsConfiguration, NSTimer, SSXPCConnection, NSObject<OS_dispatch_queue>;

@interface SSMetricsController : NSObject  {
    SSXPCConnection *_connection;
    SSMetricsConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_flushSerialQueue;
    BOOL _flushTimerEnabled;
    NSTimer *_flushEventsTimer;
}

@property(getter=isFlushTimerEnabled) BOOL flushTimerEnabled;


- (void)insertEvent:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setGlobalConfiguration:(id)arg1;
- (id)locationWithPosition:(int)arg1 type:(id)arg2 fieldData:(id)arg3;
- (void)setPageConfiguration:(id)arg1;
- (BOOL)isFlushTimerEnabled;
- (void)setFlushTimerEnabled:(BOOL)arg1;
- (id)_valueForField:(id)arg1 withFieldData:(id)arg2;
- (void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(id)arg3;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(id)arg2;
- (id)serialQueue;
- (void)insertEvents:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_setupFlushTimer;
- (void)_handleFlushTimer;
- (void)flushUnreportedEventsWithCompletionHandler:(id)arg1;
- (id)pingURLs;
- (BOOL)isDisabled;
- (id)init;
- (void)dealloc;
- (id)configuration;
- (id)_connection;

@end
