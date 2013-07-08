/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAKeychain : NSObject  {
}

+ (id)sharedKeychain;

- (BOOL)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 withAccessibility:(int)arg3;
- (id)loadKeychainInformationsForURL:(id)arg1;
- (BOOL)setPassword:(id)arg1 forAccount:(id)arg2 withPersistentUUID:(id)arg3 withAccessibility:(int)arg4;
- (void)removeKeychainInformationsForURL:(id)arg1;
- (id)guessPasswordForURL:(id)arg1;
- (id)passwordForAccountWithPersistentUUID:(id)arg1 expectedAccessibility:(int)arg2 shouldSetAccessibility:(BOOL)arg3 passwordExpected:(BOOL)arg4;
- (BOOL)removePasswordForAccount:(id)arg1 withPersistentUUID:(id)arg2;
- (struct __CFDictionary { }*)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)arg1 accessibility:(int)arg2;
- (void*)_secAccessibilityForDAKeychainAccessibility:(int)arg1;
- (struct __CFDictionary { }*)_DACopyMutableQueryForAccountWithPersistentUUID:(id)arg1;
- (void)removePersistentCredentials;
- (BOOL)canAccessCredentialsWithAccessibility:(int)arg1;
- (int)_daKeychainAccessibilityForSecAccessibility:(void*)arg1;
- (void)migratePasswordForAccount:(id)arg1;

@end
