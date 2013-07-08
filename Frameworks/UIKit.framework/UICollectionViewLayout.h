/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, UICollectionViewLayout, UIDynamicAnimator, NSMutableIndexSet, UICollectionViewLayoutInvalidationContext, UICollectionView;

@interface UICollectionViewLayout : NSObject <NSCoding> {
    UICollectionView *_collectionView;
    struct CGSize { 
        float width; 
        float height; 
    } _collectionViewBoundsSize;
    NSMutableDictionary *_initialAnimationLayoutAttributesDict;
    NSMutableDictionary *_finalAnimationLayoutAttributesDict;
    NSMutableDictionary *_deletedSupplementaryIndexPathsDict;
    NSMutableDictionary *_insertedSupplementaryIndexPathsDict;
    NSMutableIndexSet *_deletedSectionsSet;
    NSMutableIndexSet *_insertedSectionsSet;
    NSMutableDictionary *_decorationViewClassDict;
    NSMutableDictionary *_decorationViewNibDict;
    NSMutableDictionary *_decorationViewExternalObjectsTables;
    UICollectionViewLayout *_transitioningFromLayout;
    UICollectionViewLayout *_transitioningToLayout;
    UIDynamicAnimator *_animator;
    UICollectionViewLayoutInvalidationContext *_invalidationContext;
}

@property(readonly) UICollectionView * collectionView;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)init;
- (void)dealloc;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2;
- (id)_dynamicAnimator;
- (void)_setDynamicAnimator:(id)arg1;
- (void)_setCollectionViewBoundsSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;
- (void)finalizeLayoutTransition;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGPoint { float x1; float x2; })updatesContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1 withScrollingVelocity:(struct CGPoint { float x1; float x2; })arg2;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (void)_finalizeLayoutTransition;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (struct CGPoint { float x1; float x2; })transitionContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1 keyItemIndexPath:(id)arg2;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned int)arg3;
- (void)finalizeAnimatedBoundsChange;
- (void)_finalizeCollectionViewItemAnimations;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint { float x1; float x2; })arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_decorationViewForLayoutAttributes:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_invalidateLayoutUsingContext:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (void)invalidateLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)collectionView;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
