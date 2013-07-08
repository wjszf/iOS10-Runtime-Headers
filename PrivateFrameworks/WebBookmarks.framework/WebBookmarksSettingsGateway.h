/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject <WebBookmarksXPCConnectionDelegate> {
    WebBookmarksXPCConnection *_connection;
}


- (id)getSafariDataUsageSummary;
- (void)deleteSafariPersistentURLCacheStorage;
- (void)deleteSafariSecurityOrigin:(id)arg1;
- (void)deleteAllSafariSecurityOrigins;
- (void)getSafariWebDataUsageWithCompletion:(id)arg1;
- (void)setCellularReadingListAllowed:(BOOL)arg1;
- (void)getCellularReadingListAllowedWithCompletion:(id)arg1;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)_clearConnection;
- (id)init;
- (void)dealloc;

@end
