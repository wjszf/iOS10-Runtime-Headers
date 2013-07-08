/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLCDTextView, TPLCDSubImageView, UIView;

@interface TPLCDView : TPLCDBar  {
    UIView *_contentView;
    TPLCDTextView *_textView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled : 1;
    BOOL _verticallyCenterTextViewIfLabelless;
    BOOL _hasBackgroundGradient;
    UIView *_backgroundGradientView;
}

@property BOOL verticallyCenterTextViewIfLabelless;
@property(retain) UIView * backgroundGradientView;
@property BOOL hasBackgroundGradient;

+ (float)textFontSize;
+ (float)labelFontSize;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (BOOL)hasBackgroundGradient;
- (void)setBackgroundGradientView:(id)arg1;
- (id)backgroundGradientView;
- (void)setVerticallyCenterTextViewIfLabelless:(BOOL)arg1;
- (id)secondLineText;
- (void)setSecondLineText:(id)arg1;
- (void)setSubImage:(id)arg1;
- (void)setHasBackgroundGradient:(BOOL)arg1;
- (void)setContentsAlpha:(float)arg1;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)setLabel:(id)arg1 animate:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_backgroundGradientViewOrigin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageViewFrame;
- (BOOL)shouldCenterText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text1Frame;
- (BOOL)verticallyCenterTextViewIfLabelless;
- (BOOL)showImageViewOnLeftSide;
- (BOOL)shouldCenterContentView;
- (float)_labelVInset;
- (float)_textVInset;
- (void)_resetContentViewFrame;
- (id)subImage;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullSizedContentViewFrame;
- (void)blinkLabel;
- (void)setLayoutAsLabelled:(BOOL)arg1;
- (void)setShadowColor:(id)arg1;
- (id)text;
- (id)label;
- (void)dealloc;
- (void)setLabel:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end
