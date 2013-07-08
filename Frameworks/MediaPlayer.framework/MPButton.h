/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPButton : UIButton  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _hitRectInsets;
    double _holdDelayInterval;
    unsigned int _holding : 1;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } hitRectInsets;
@property double holdDelayInterval;

+ (float)easyTouchDefaultCharge;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })easyTouchDefaultHitRectInsets;
+ (id)easyTouchButtonWithType:(int)arg1;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)setHoldDelayInterval:(double)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitRectInsets;
- (double)holdDelayInterval;
- (void)_delayedTriggerHold;
- (void)_handleTouchUp;
- (void)_handleTouchCancel;
- (void)_handleTouchDown;
- (void)setHitRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end
