/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSLayoutConstraint, _UIBackdropView, UIView, UIControl, UIActivityGroupView, UIActivityGroupCancelButton;

@interface UIActivityGroupListViewController : UIViewController  {
    BOOL _embedded;
    BOOL _modal;
    UIActivityGroupCancelButton *_cancelButton;
    _UIBackdropView *_backdropView;
    UIView *_contentView;
    UIView *_statusBlurView;
    NSLayoutConstraint *_statusBlurHeight;
    int _currentStatusBarStyle;
    UIControl *_dimView;
    UIActivityGroupView *_groupView;
}

@property BOOL embedded;
@property BOOL modal;
@property(retain) UIActivityGroupCancelButton * cancelButton;
@property(retain) _UIBackdropView * backdropView;
@property(retain) UIView * contentView;
@property(retain) UIView * statusBlurView;
@property(retain) NSLayoutConstraint * statusBlurHeight;
@property int currentStatusBarStyle;
@property(retain) UIControl * dimView;
@property(retain) UIActivityGroupView * groupView;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)setCurrentStatusBarStyle:(int)arg1;
- (int)currentStatusBarStyle;
- (id)statusBlurHeight;
- (void)setStatusBlurHeight:(id)arg1;
- (void)setGroupView:(id)arg1;
- (id)statusBlurView;
- (void)setStatusBlurView:(id)arg1;
- (id)dimView;
- (BOOL)embedded;
- (id)groupView;
- (void)setActivityGroupViewControllers:(id)arg1;
- (void)setEmbedded:(BOOL)arg1;
- (void)setModal:(BOOL)arg1;
- (BOOL)modal;
- (void)showDone;
- (void)hideDimmingView;
- (float)displayHeight;
- (id)initWithActivityGroupViewControllers:(id)arg1 embedded:(BOOL)arg2 modal:(BOOL)arg3;
- (void)updateVisibleActivityGroupViewControllers;
- (id)backdropView;
- (void)setBackdropView:(id)arg1;
- (void)setDimView:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (void)viewDidLayoutSubviews;
- (int)preferredStatusBarStyle;
- (void)_accessibilityLoadAccessibilityInformation;

@end
