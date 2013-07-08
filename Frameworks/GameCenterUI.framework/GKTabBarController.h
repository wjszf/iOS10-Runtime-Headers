/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSArray, GKBubbleFlowRootViewController;

@interface GKTabBarController : UITabBarController  {
    GKBubbleFlowRootViewController *_bubbleFlowRootViewController;
}

@property(readonly) NSArray * modalChildViewControllers;
@property(readonly) BOOL tabBarCovered;
@property(retain) GKBubbleFlowRootViewController * bubbleFlowRootViewController;


- (int)lastKnownOrientation;
- (void)clearInterstitialViewAnimated:(BOOL)arg1;
- (void)showInterstitialViewAnimated:(BOOL)arg1;
- (BOOL)tabBarCovered;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(id)arg2;
- (BOOL)_isBeingCoveredByBubbleFlowRootViewController;
- (id)bubbleFlowRootViewController;
- (void)_ensureWeHaveAPresentedBubbleFlowRootViewController;
- (BOOL)_useBubbleFlowRootViewControllerToPresent:(id)arg1;
- (void)setBubbleFlowRootViewController:(id)arg1;
- (BOOL)_hasBubbleFlowRootViewController;
- (id)modalChildViewControllers;
- (void)dealloc;
- (id)viewControllers;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;

@end
