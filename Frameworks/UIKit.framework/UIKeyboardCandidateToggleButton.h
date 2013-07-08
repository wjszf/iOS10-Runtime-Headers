/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIKBThemedView;

@interface UIKeyboardCandidateToggleButton : UIButton  {
    BOOL _arrowColor;
    NSString *_arrowDirection;
    UIKBThemedView *_themedView;
}

@property(copy) NSString * arrowDirection;
@property(retain) UIKBThemedView * themedView;
@property BOOL arrowColor;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_accessibilityPerformValidations:(id)arg1;
+ (void)_initializeSafeCategory;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)arrowColorForState:(unsigned int)arg1;
- (void)updateArrow;
- (BOOL)arrowColor;
- (void)setArrowColor:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelFrameFromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setArrowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setArrowDirection:(id)arg1;
- (id)arrowDirection;
- (id)themedView;
- (void)setThemedView:(id)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)layoutSubviews;
- (id)accessibilityLabel;

@end
