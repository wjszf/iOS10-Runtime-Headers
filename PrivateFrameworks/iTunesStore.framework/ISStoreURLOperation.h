/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, <ISStoreURLOperationDelegate>;

@interface ISStoreURLOperation : ISURLOperation  {
    NSNumber *_authenticatedDSID;
    BOOL _canSendGUIDParameter;
    BOOL _needsAuthentication;
    BOOL _needsURLBag;
    BOOL _performsMachineDataActions;
    BOOL _shouldSendXTokenHeader;
    BOOL _urlKnownToBeTrusted;
    BOOL _useUserSpecificURLBag;
}

@property <ISStoreURLOperationDelegate> * delegate;
@property BOOL canSendGUIDParameter;
@property BOOL needsURLBag;
@property BOOL needsAuthentication;
@property BOOL performsMachineDataActions;
@property BOOL shouldSendXTokenHeader;
@property BOOL useUserSpecificURLBag;
@property BOOL urlKnownToBeTrusted;
@property(retain) NSNumber * authenticatedDSID;

+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;
+ (void)handleITunesStoreResponseHeaders:(id)arg1 withAccountIdentifier:(id)arg2;
+ (void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;
+ (id)propertyListOperationWithURLBagKey:(id)arg1;
+ (id)_restrictionsHeaderValue;
+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3;
+ (id)pingOperationWithUrl:(id)arg1;

- (void)setUseUserSpecificURLBag:(BOOL)arg1;
- (void)setShouldSendXTokenHeader:(BOOL)arg1;
- (void)setPerformsMachineDataActions:(BOOL)arg1;
- (void)setCanSendGUIDParameter:(BOOL)arg1;
- (BOOL)performsMachineDataActions;
- (void)_addStandardQueryParametersForURL:(id)arg1;
- (id)_resolvedURL;
- (id)_resolvedURLInBagContext:(id)arg1 URLBag:(id*)arg2;
- (BOOL)needsURLBag;
- (BOOL)useUserSpecificURLBag;
- (BOOL)urlKnownToBeTrusted;
- (BOOL)_isErrorTokenError:(id)arg1;
- (void)_runURLOperation;
- (BOOL)_authenticateReturningError:(id*)arg1 promptAlways:(BOOL)arg2;
- (id)_account;
- (BOOL)shouldSendXTokenHeader;
- (BOOL)canSendGUIDParameter;
- (id)_copyURLBagContext;
- (BOOL)_canSendTokenToURL:(id)arg1;
- (BOOL)needsAuthentication;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (void)setAuthenticatedDSID:(id)arg1;
- (id)authenticatedDSID;
- (void)setUrlKnownToBeTrusted:(BOOL)arg1;
- (void)setNeedsURLBag:(BOOL)arg1;
- (void)handleResponse:(id)arg1;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (id)authenticatedAccountDSID;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (id)newRequestWithURL:(id)arg1;
- (id)_copyAuthenticationContext;
- (void)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)run;
- (id)init;
- (void)dealloc;

@end
