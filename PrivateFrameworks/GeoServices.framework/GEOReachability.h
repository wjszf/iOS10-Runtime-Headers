/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver> {
    BOOL _networkReachable;
    unsigned int _errorCount;
}

+ (id)sharedReachability;

- (BOOL)networkAvailable;
- (void)reportLoadFailure:(id)arg1;
- (BOOL)anyFailures;
- (void)reportTileLoadSuccess:(id)arg1;
- (void)_resetErrors;
- (void)_reachabilityChanged:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)init;
- (void)dealloc;

@end
