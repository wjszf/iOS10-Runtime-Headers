/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSThread;

@interface GEORequester : PBRequester  {
    BOOL _disableReplay;
    NSThread *_thread;
    BOOL _usePersistentConnection;
    BOOL _useBackgroundConnection;
    NSString *_debugRequestName;
}

@property BOOL disableReplay;
@property(retain) NSString * debugRequestName;

+ (void)setOSVersion:(id)arg1;
+ (void)setAppID:(id)arg1;
+ (void)replayRequests;
+ (void)stopAllRequests;
+ (void)setLogRequestResponseDirectory:(id)arg1;
+ (id)_logRequestResponseDirectory;

- (void)setDisableReplay:(BOOL)arg1;
- (id)debugRequestName;
- (id)persistentConnectionSession;
- (void)_handleResumeOnThread;
- (BOOL)disableReplay;
- (void)_handleSuspendOnThread;
- (void)_applicationWantsToReplayRequests:(id)arg1;
- (void)_applicationDidStopAllRequests:(id)arg1;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (void)setDebugRequestName:(id)arg1;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 usePersistentConnection:(BOOL)arg3;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 usePersistentConnection:(BOOL)arg3 useBackgroundConnection:(BOOL)arg4;
- (id)logResponseToFile;
- (id)logRequestToFile;
- (id)requestPreamble;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2;
- (struct _CFURLRequest { }*)newCFMutableURLRequestWithURL:(id)arg1;
- (void)dealloc;
- (void)start;

@end
