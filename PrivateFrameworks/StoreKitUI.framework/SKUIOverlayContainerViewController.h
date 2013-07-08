/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UITapGestureRecognizer, UIControl, NSArray, NSMutableArray;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate> {
    UIControl *_backstopView;
    int _selectedViewControllerIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_viewControllers;
}

@property(readonly) UIControl * backstopControl;
@property(readonly) NSArray * viewControllers;


- (id)_selectedViewController;
- (float)_overlaySpacingForOrientation:(int)arg1;
- (void)_popViewControllers;
- (int)_indexOfViewControllerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_viewControllerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameToCenterViewController:(id)arg1;
- (void)_positionViewControllersForOrientation:(int)arg1;
- (void)_pushViewController:(id)arg1;
- (void)_slideInViewController:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_fadeInViewController:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_removeChildren;
- (void)_tapAction:(id)arg1;
- (void)_frameAction:(id)arg1;
- (void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(id)arg3;
- (void)dismissWithFlipTransition:(id)arg1 completionBlock:(id)arg2;
- (void)dismissWithFadeTransitionCompletionBlock:(id)arg1;
- (void)showViewController:(id)arg1 withCompletionBlock:(id)arg2;
- (void)showViewControllers:(id)arg1;
- (id)backstopControl;
- (void)dealloc;
- (void).cxx_destruct;
- (id)viewControllers;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;

@end
