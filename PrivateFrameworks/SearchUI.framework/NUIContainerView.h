/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface NUIContainerView : UIView <_UIMultilineTextContentSizing> {
    UIView * _arrangedSubview;
    bool  _baselineRelativeArrangement;
    struct { 
        unsigned int determiningPreferredMaxLayoutWidth : 1; 
        unsigned int inSecondConstraintsPass : 1; 
    }  _containerViewFlags;
    long long  _horizontalAlignment;
    bool  _layoutMarginsRelativeArrangement;
    double  _preferredMaxLayoutWidth;
    long long  _verticalAlignment;
}

@property (nonatomic, retain) UIView *arrangedSubview;
@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalAlignment;
@property (getter=isLayoutMarginsRelativeArrangement, nonatomic) bool layoutMarginsRelativeArrangement;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalAlignment;

- (void).cxx_destruct;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_needsDoubleUpdateConstraintsPass;
- (void)_positionSizeOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 horizontallyInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_positionSizeOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 verticallyInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(bool)arg1;
- (id)arrangedSubview;
- (long long)horizontalAlignment;
- (id)initWithArrangedSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBaselineRelativeArrangement;
- (bool)isLayoutMarginsRelativeArrangement;
- (void)layoutSubviews;
- (void)setArrangedSubview:(id)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setLayoutMarginsRelativeArrangement:(bool)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;
- (long long)verticalAlignment;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
