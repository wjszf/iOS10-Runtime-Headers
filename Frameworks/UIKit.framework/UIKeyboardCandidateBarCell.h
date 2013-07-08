/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIKBThemedView, UILabel;

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView> {
    BOOL _beginsFirstPage;
    BOOL _endsLastPage;
    BOOL _isAtLeftEdge;
    UIKBThemedView *_themedView;
    UILabel *_label;
    NSString *_candidateText;
}

@property(retain) UIKBThemedView * themedView;
@property(retain) UILabel * label;
@property(copy) NSString * candidateText;
@property BOOL beginsFirstPage;
@property BOOL endsLastPage;
@property BOOL isAtLeftEdge;
@property(readonly) NSString * cacheKey;
@property(readonly) BOOL cacheDeferable;
@property(readonly) float cachedWidth;
@property(readonly) BOOL keepNonPersistent;

+ (id)font;
+ (BOOL)highlightAffectsBackground;
+ (id)textColorWithHighlight:(BOOL)arg1 whiteText:(BOOL)arg2;
+ (float)widthForCandidateText:(id)arg1;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cacheInsets;
+ (id)reuseIdentifier;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCandidate:(id)arg1;
- (id)label;
- (void)displayLayer:(id)arg1;
- (void)dealloc;
- (void)setIsAtLeftEdge:(BOOL)arg1;
- (BOOL)isAtLeftEdge;
- (id)candidateText;
- (void)setCandidateText:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (BOOL)endsLastPage;
- (BOOL)beginsFirstPage;
- (void)setEndsLastPage:(BOOL)arg1;
- (void)setBeginsFirstPage:(BOOL)arg1;
- (void)updateIsAtLeftEdgeState;
- (void)updateLabels;
- (id)themedView;
- (void)setThemedView:(id)arg1;
- (BOOL)keepNonPersistent;
- (BOOL)cacheDeferable;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (float)cachedWidth;
- (id)cacheKey;
- (void)setLabel:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)didMoveToWindow;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLanguage;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityVisibleItemInList;

@end
