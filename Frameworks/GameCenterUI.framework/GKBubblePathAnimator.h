/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKBubblePathAnimator : NSObject  {
}

@property(readonly) int animatorType;

+ (id)hiTimingFunction;
+ (id)sharedBubblePathAnimator;

- (int)animatorType;
- (BOOL)bubblesOnscreenAtBeginning;
- (BOOL)bubblesOnscreenAtEnd;
- (double)minimumDurationForViewAnimations;
- (void)animateTransition:(id)arg1 completionHandler:(id)arg2;
- (void)animateTransition:(id)arg1;

@end
