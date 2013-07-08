/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UILabel, NSString, UIColor, UIFont;

@interface SUTableHeaderView : UIView  {
    UIColor *_bottomBorderColor;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    int _index;
    int _style;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(retain) UIColor * bottomBorderColor;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property int index;
@property(retain) UIColor * shadowColor;
@property int style;
@property(retain) NSString * subtitle;
@property(retain) UIFont * subtitleFont;
@property(retain) NSString * title;
@property(retain) UIFont * titleFont;
@property(retain) UIColor * textColor;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)setTitleFont:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (id)bottomBorderColor;
- (void)setBottomBorderColor:(id)arg1;
- (void)setIndex:(int)arg1;
- (int)index;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(int)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (int)style;
- (void)dealloc;
- (id)subtitleFont;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)titleFont;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end
