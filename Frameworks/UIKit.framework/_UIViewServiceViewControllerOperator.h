/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIAsyncInvocation, <_UIViewServiceViewControllerOperatorDelegate>, _UIHostedTextServiceSession, NSMutableArray, UIActionSheet, _UIViewServiceDummyPopoverController, UIViewController, <_UIViewServiceDeputyDelegate>, UIPopoverController, _UIHostedWindow;

@interface _UIViewServiceViewControllerOperator : UIViewController <XPCProxyTarget, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {
    int _hostPID;
    struct { 
        unsigned int val[8]; 
    } _hostAuditToken;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    UIViewController *_localViewController;
    _UIHostedWindow *_hostedWindow;
    BOOL _isResigningFirstResponderFromHostNotification;
    UIActionSheet *_hostedActionSheet;
    BOOL _serviceInPopover;
    int _hostStatusBarOrientation;
    float _hostStatusBarHeight;
    NSMutableArray *_deputyRotationDelegates;
    unsigned int _hostAccessibilityServerPort;
    <_UIViewServiceDeputyDelegate> *_deputyDelegate;
    _UIHostedTextServiceSession *_textServiceSession;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    UIPopoverController *_displayedPopoverController;
    _UIViewServiceDummyPopoverController *_dummyPopoverController;
    unsigned int _supportedOrientations;
    BOOL _canShowTextServices;
    <_UIViewServiceViewControllerOperatorDelegate> *_delegate;
}

@property <_UIViewServiceViewControllerOperatorDelegate> * delegate;

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostAuditToken:(struct { unsigned int x1[8]; })arg3;

- (id)_queue;
- (BOOL)becomeFirstResponder;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (id)invalidate;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)delegate;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2;
- (id)_sessionForStateRestoration:(id)arg1;
- (BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char *)arg3;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (void)_windowDidUnregisterScrollToTopView;
- (void)_windowDidRegisterScrollToTopView;
- (void)_windowDidUpdateCurrentTintView:(id)arg1;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (id)_inputViewsKey;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(id)arg2;
- (void)addDeputyRotationDelegate:(id)arg1;
- (void)setDeputyDelegate:(id)arg1;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (id)_appearanceSource;
- (void)_firstResponderDidChange:(id)arg1;
- (int)__automatic_invalidation_logic;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
- (void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(id)arg3;
- (void)__dimmingViewWasTapped;
- (void)__textServiceDidDismiss;
- (void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(int)arg2;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(BOOL)arg3;
- (void)__scrollToTopFromTouchAtViewLocation:(id)arg1 resultHandler:(id)arg2;
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)arg1;
- (void)__hostedActionSheetClickedButtonAtIndex:(int)arg1;
- (void)__hostedActionSheetDidPresent;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(int)arg1 skipSelf:(BOOL)arg2;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostWillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostDidChangeStatusBarHeight:(float)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostWillEnterForeground;
- (void)__setServiceInPopover:(BOOL)arg1;
- (void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)arg1 contextReplyPort:(id)arg2;
- (void)__hostViewDidDisappear:(BOOL)arg1;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostViewDidAppear:(BOOL)arg1;
- (void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(int)arg2 statusBarHeight:(float)arg3 completionHandler:(id)arg4;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(BOOL)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(BOOL)arg5 replyHandler:(id)arg6;
- (void)__setContentSize:(id)arg1;
- (void)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned int)arg5 passthroughViews:(id)arg6 backgroundStyle:(int)arg7 animated:(BOOL)arg8;
- (void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(int)arg2 animated:(BOOL)arg3;
- (void)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_isHostedRootViewController;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)loadView;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (BOOL)_canShowTextServices;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end
