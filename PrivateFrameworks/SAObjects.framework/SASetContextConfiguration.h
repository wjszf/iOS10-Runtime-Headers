/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetContextConfiguration : SABaseClientBoundCommand  {
}

@property int contextTimeoutSeconds;

+ (id)setContextConfigurationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setContextConfiguration;

- (void)setContextTimeoutSeconds:(int)arg1;
- (int)contextTimeoutSeconds;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
