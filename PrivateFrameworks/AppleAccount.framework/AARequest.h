/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSURLRequest, NSString;

@interface AARequest : NSObject  {
    NSString *_urlString;
    BOOL _flushCache;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;
}

@property(readonly) NSURLRequest * urlRequest;
@property BOOL flushCache;

+ (Class)responseClass;
+ (id)protocolVersion;

- (BOOL)flushCache;
- (id)urlCredential;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (id)bodyDictionary;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)performRequestWithHandler:(id)arg1;
- (void)setFlushCache:(BOOL)arg1;
- (id)urlString;
- (id)urlRequest;
- (void)dealloc;
- (void).cxx_destruct;

@end