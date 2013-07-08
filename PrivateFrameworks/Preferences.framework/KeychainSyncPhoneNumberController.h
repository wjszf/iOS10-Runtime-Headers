/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIAlertView, <KeychainSyncViewControllerDelegate>, KeychainSyncPhoneSettingsFragment;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController> {
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    UIAlertView *_invalidPhoneNumberAlert;
}

@property <KeychainSyncViewControllerDelegate> * delegate;


- (void)controllerDone;
- (void)nextPressed;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end
