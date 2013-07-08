/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSObject<OS_dispatch_queue>;

@interface AADeviceLocatorService : NSObject  {
    int _lastKnownState;
    BOOL _hasAttemptedToFetchState;
    BOOL _wantsToEnable;
    NSObject<OS_dispatch_queue> *_stateUpdateQueue;
}

+ (id)sharedInstance;

- (void)disableInContext:(int)arg1 withWipeToken:(id)arg2;
- (void)enableInContext:(int)arg1;
- (BOOL)shouldEnable;
- (void)setShouldEnable:(BOOL)arg1;
- (BOOL)isChangingState;
- (void)_updateStateAndNotify:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)init;
- (void).cxx_destruct;

@end
