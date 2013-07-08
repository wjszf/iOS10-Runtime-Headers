/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIColor, NSString, UIFont;

@interface UITableViewIndex : UIControl  {
    NSArray *_titles;
    UIFont *_font;
    int _selectedSection;
    BOOL _pastTop;
    BOOL _pastBottom;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedSize;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedSizeToFit;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
    UIColor *_indexTrackingBackgroundColor;
    float _topPadding;
    float _bottomPadding;
    float _verticalTextHeightEstimate;
    NSArray *_entries;
}

@property(retain) NSArray * titles;
@property(retain) UIFont * font;
@property(retain) UIColor * indexColor;
@property(retain) UIColor * indexBackgroundColor;
@property(retain) UIColor * indexTrackingBackgroundColor;
@property(readonly) int selectedSection;
@property(readonly) NSString * selectedSectionTitle;
@property(readonly) BOOL pastTop;
@property(readonly) BOOL pastBottom;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)font;
- (void)dealloc;
- (id)indexBackgroundColor;
- (id)indexTrackingBackgroundColor;
- (void)_selectSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (id)indexColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 stride:(float*)arg2;
- (void)_cacheAndMeasureTitles;
- (id)_displayTitles;
- (float)_minLineSpacingForIdiom:(int)arg1;
- (int)_idiom;
- (id)_fontForIdiom:(int)arg1;
- (id)titles;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (unsigned int)maximumNumberOfTitlesWithoutTruncationForHeight:(float)arg1;
- (id)selectedSectionTitle;
- (BOOL)pastBottom;
- (BOOL)pastTop;
- (int)selectedSection;
- (void)setIndexTrackingBackgroundColor:(id)arg1;
- (void)setIndexBackgroundColor:(id)arg1;
- (void)setIndexColor:(id)arg1;
- (void)setTitles:(id)arg1;
- (void)setFont:(id)arg1;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (void)tintColorDidChange;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })accessibilityActivationPoint;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityBumpValue:(BOOL)arg1;
- (void)_accessibilityMoveToIndexAtPosition:(int)arg1;
- (id)_accessibilityIndexData;
- (id)_accessibilityValueToPost:(id)arg1;
- (id)accessibilityFlowToElements;
- (void)_accessibilityJumpToTableIndex:(id)arg1;

@end
