/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHacks : NSObject  {
}

+ (id)sharedHacks;

- (BOOL)isSetupBuddyDone;
- (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)arg1;
- (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)arg1;
- (id)_deviceSpecificDefaultSettings;
- (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg1;
- (void)_applyImpliedSettingsToSettingsDictionary:(id)arg1 currentSettings:(id)arg2 restrictions:(id)arg3;
- (void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;
- (id)_permittedAutoLockNumbers;
- (id)_selectLargestNumberFromSortedArray:(id)arg1 equalToOrLessThanNumber:(id)arg2;
- (id)_permittedGracePeriodNumbers;
- (BOOL)_applyHeuristicsToRestrictions:(id)arg1 forProfile:(id)arg2 outError:(id*)arg3;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg1;

@end
