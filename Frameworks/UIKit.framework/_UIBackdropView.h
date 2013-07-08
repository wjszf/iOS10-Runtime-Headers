/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIColor, _UIBackdropViewSettings, <_UIBackdropViewObserver>, UIView, NSMutableSet, CAFilter, NSHashTable, _UIBackdropEffectView, NSMutableDictionary, <_UIBackdropViewGraphicsQualityChangeDelegate>, NSString;

@interface _UIBackdropView : UIView  {
    BOOL _usesGroupFilters;
    BOOL _autosizesToFitSuperview;
    BOOL _computesColorSettings;
    BOOL _appliesOutputSettingsAutomatically;
    BOOL _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
    BOOL _applyingBackdropChanges;
    BOOL _applyingTransition;
    BOOL _requiresTintViews;
    BOOL _wantsColorSettings;
    BOOL _blursBackground;
    BOOL _allowsColorSettingsSuppression;
    BOOL _applySettingsAfterLayout;
    BOOL _updateMaskViewsForViewReentrancyGuard;
    BOOL _simulatesMasks;
    BOOL _backdropVisibilitySetOnce;
    BOOL _blurRadiusSetOnce;
    BOOL __backdropVisible;
    BOOL __zoomsBack;
    int _style;
    NSHashTable *_observers;
    <_UIBackdropViewObserver> *_observer;
    _UIBackdropViewSettings *_inputSettings;
    _UIBackdropViewSettings *_outputSettings;
    _UIBackdropViewSettings *_savedInputSettingsDuringRenderInContext;
    int _configuration;
    _UIBackdropEffectView *_backdropEffectView;
    NSString *_groupName;
    UIImage *_filterMaskImage;
    UIView *_grayscaleTintView;
    UIImage *_grayscaleTintMaskImage;
    UIView *_colorTintView;
    UIImage *_colorTintMaskImage;
    CAFilter *_gaussianBlurFilter;
    CAFilter *_colorSaturateFilter;
    CAFilter *_tintFilter;
    UIView *_contentView;
    int _maskMode;
    NSMutableSet *_partialMaskViews;
    UIView *_grayscaleTintMaskViewContainer;
    NSMutableDictionary *_grayscaleTintMaskViewMap;
    UIView *_colorTintMaskViewContainer;
    NSMutableDictionary *_colorTintMaskViewMap;
    UIView *_filterMaskViewContainer;
    NSMutableDictionary *_filterMaskViewMap;
    id _computeAndApplySettingsNotificationObserver;
    float _colorMatrixGrayscaleTintLevel;
    float _colorMatrixGrayscaleTintAlpha;
    UIColor *_colorMatrixColorTint;
    float _colorMatrixColorTintAlpha;
    int _blurHardEdges;
    struct __CFRunLoopObserver { } *_updateInputBoundsRunLoopObserver;
    float _previousBackdropStatisticsRed;
    float _previousBackdropStatisticsGreen;
    float _previousBackdropStatisticsBlue;
    float _previousBackdropStatisticsContrast;
    <_UIBackdropViewGraphicsQualityChangeDelegate> *_graphicsQualityChangeDelegate;
    NSString *__blurQuality;
    float __blurRadius;
    float __saturationDeltaFactor;
    double _appliesOutputSettingsAnimationDuration;
}

@property int style;
@property BOOL autosizesToFitSuperview;
@property(retain) NSHashTable * observers;
@property <_UIBackdropViewObserver> * observer;
@property BOOL computesColorSettings;
@property BOOL appliesOutputSettingsAutomatically;
@property double appliesOutputSettingsAnimationDuration;
@property(retain) _UIBackdropViewSettings * inputSettings;
@property(retain) _UIBackdropViewSettings * outputSettings;
@property(retain) _UIBackdropViewSettings * savedInputSettingsDuringRenderInContext;
@property(readonly) UIView * effectView;
@property int configuration;
@property BOOL appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
@property BOOL applyingBackdropChanges;
@property BOOL applyingTransition;
@property BOOL requiresTintViews;
@property BOOL wantsColorSettings;
@property BOOL blursBackground;
@property BOOL allowsColorSettingsSuppression;
@property(retain) _UIBackdropEffectView * backdropEffectView;
@property(copy) NSString * groupName;
@property BOOL usesGroupFilters;
@property(retain) UIImage * filterMaskImage;
@property(retain) UIView * grayscaleTintView;
@property(retain) UIImage * grayscaleTintMaskImage;
@property(retain) UIView * colorTintView;
@property(retain) UIImage * colorTintMaskImage;
@property(retain) CAFilter * gaussianBlurFilter;
@property(retain) CAFilter * colorSaturateFilter;
@property(retain) CAFilter * tintFilter;
@property(retain) UIView * contentView;
@property int maskMode;
@property(retain) NSMutableSet * partialMaskViews;
@property(retain) UIView * grayscaleTintMaskViewContainer;
@property(retain) NSMutableDictionary * grayscaleTintMaskViewMap;
@property(retain) UIView * colorTintMaskViewContainer;
@property(retain) NSMutableDictionary * colorTintMaskViewMap;
@property(retain) UIView * filterMaskViewContainer;
@property(retain) NSMutableDictionary * filterMaskViewMap;
@property BOOL applySettingsAfterLayout;
@property(retain) id computeAndApplySettingsNotificationObserver;
@property BOOL updateMaskViewsForViewReentrancyGuard;
@property float colorMatrixGrayscaleTintLevel;
@property float colorMatrixGrayscaleTintAlpha;
@property(retain) UIColor * colorMatrixColorTint;
@property float colorMatrixColorTintAlpha;
@property BOOL simulatesMasks;
@property int blurHardEdges;
@property struct __CFRunLoopObserver { }* updateInputBoundsRunLoopObserver;
@property BOOL backdropVisibilitySetOnce;
@property BOOL blurRadiusSetOnce;
@property float previousBackdropStatisticsRed;
@property float previousBackdropStatisticsGreen;
@property float previousBackdropStatisticsBlue;
@property float previousBackdropStatisticsContrast;
@property <_UIBackdropViewGraphicsQualityChangeDelegate> * graphicsQualityChangeDelegate;
@property(copy) NSString * _blurQuality;
@property float _blurRadius;
@property float _saturationDeltaFactor;
@property BOOL _backdropVisible;
@property(setter=setZoomsBack:) BOOL _zoomsBack;

+ (void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg1;
+ (void)setAllBackdropViewsToGraphicsQuality:(int)arg1;
+ (void)restoreColorSettingsForRequester:(id)arg1;
+ (void)suppressColorSettingsForRequester:(id)arg1;
+ (void)restoreColorSettingsForDidBecomeActive:(id)arg1;
+ (void)suppressColorSettingsForWillResignActive:(id)arg1;
+ (void)restoreColorSettingsForRunLoopModePop:(id)arg1;
+ (void)suppressColorSettingsForRunLoopModePush:(id)arg1;
+ (id)allBackdropViews;
+ (Class)defaultSettingsClass;
+ (Class)layerClass;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (id)observer;
- (id)observers;
- (void)setObservers:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)contentView;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(int)arg1;
- (void)setGroupName:(id)arg1;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (id)groupName;
- (id)filters;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)style;
- (void)setContentView:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (int)configuration;
- (void)set_backdropVisible:(BOOL)arg1;
- (void)set_saturationDeltaFactor:(float)arg1;
- (void)set_blurRadius:(float)arg1;
- (void)set_blurQuality:(id)arg1;
- (void)setGraphicsQualityChangeDelegate:(id)arg1;
- (void)setPreviousBackdropStatisticsContrast:(float)arg1;
- (float)previousBackdropStatisticsContrast;
- (void)setPreviousBackdropStatisticsBlue:(float)arg1;
- (float)previousBackdropStatisticsBlue;
- (void)setPreviousBackdropStatisticsGreen:(float)arg1;
- (float)previousBackdropStatisticsGreen;
- (void)setPreviousBackdropStatisticsRed:(float)arg1;
- (float)previousBackdropStatisticsRed;
- (void)setSimulatesMasks:(BOOL)arg1;
- (void)setBlursBackground:(BOOL)arg1;
- (BOOL)blursBackground;
- (void)setRequiresTintViews:(BOOL)arg1;
- (void)setSavedInputSettingsDuringRenderInContext:(id)arg1;
- (id)savedInputSettingsDuringRenderInContext;
- (void)transitionIncrementallyToPrivateStyle:(int)arg1 weighting:(float)arg2;
- (void)transitionToColor:(id)arg1;
- (void)_setBlursBackground:(BOOL)arg1;
- (void)setUsesZoom;
- (BOOL)usesGroupFilters;
- (void)applyOverlayBlendMode:(int)arg1 toView:(id)arg2;
- (void)removeMaskViews;
- (void)setMaskMode:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 settings:(id)arg2;
- (double)appliesOutputSettingsAnimationDuration;
- (void)transitionComplete;
- (void)setTintFilterForSettings:(id)arg1;
- (BOOL)requiresTintViews;
- (void)setColorTintView:(id)arg1;
- (void)setGrayscaleTintView:(id)arg1;
- (void)setAppliesOutputSettingsAutomatically:(BOOL)arg1;
- (void)setBackdropEffectView:(id)arg1;
- (void)ensureProperSubviewOrdering;
- (void)addContentViewIfNeededForSettings:(id)arg1;
- (void)addColorTintViewIfNeededForSettings:(id)arg1;
- (void)addGrayscaleTintViewIfNeededForSettings:(id)arg1;
- (void)addBackdropEffectViewIfNeededForSettings:(id)arg1;
- (BOOL)applyingTransition;
- (void)transitionIncrementallyToStyle:(int)arg1 weighting:(float)arg2;
- (void)computeAndApplySettingsForTransition;
- (void)prepareForTransitionToSettings:(id)arg1;
- (void)setApplyingTransition:(BOOL)arg1;
- (id)effectView;
- (void)setConfiguration:(int)arg1;
- (void)setBackdropVisibilitySetOnce:(BOOL)arg1;
- (BOOL)backdropVisibilitySetOnce;
- (void)setColorMatrixColorTintAlpha:(float)arg1;
- (void)setColorMatrixColorTint:(id)arg1;
- (void)setColorMatrixGrayscaleTintAlpha:(float)arg1;
- (void)setColorMatrixGrayscaleTintLevel:(float)arg1;
- (id)colorMatrixColorTint;
- (float)colorMatrixColorTintAlpha;
- (float)colorMatrixGrayscaleTintAlpha;
- (float)colorMatrixGrayscaleTintLevel;
- (void)setTintFilter:(id)arg1;
- (void)setColorSaturateFilter:(id)arg1;
- (void)setUpdateInputBoundsRunLoopObserver:(struct __CFRunLoopObserver { }*)arg1;
- (struct __CFRunLoopObserver { }*)updateInputBoundsRunLoopObserver;
- (void)scheduleUpdateInputBoundsIfNeeded;
- (void)setGaussianBlurFilter:(id)arg1;
- (void)setBlurFilterWithRadius:(float)arg1 blurQuality:(id)arg2 blurHardEdges:(int)arg3;
- (void)setBlurFilterWithRadius:(float)arg1 blurQuality:(id)arg2;
- (void)setBlurRadiusSetOnce:(BOOL)arg1;
- (BOOL)blurRadiusSetOnce;
- (void)_updateFilters;
- (id)tintFilter;
- (id)colorSaturateFilter;
- (id)gaussianBlurFilter;
- (void)updateMaskViewForView:(id)arg1 flag:(int)arg2;
- (void)setPartialMaskViews:(id)arg1;
- (id)partialMaskViews;
- (void)setUpdateMaskViewsForViewReentrancyGuard:(BOOL)arg1;
- (BOOL)updateMaskViewsForViewReentrancyGuard;
- (void)applyOverlayBlendModeToView:(id)arg1;
- (void)removeOverlayBlendModeFromView:(id)arg1;
- (BOOL)simulatesMasks;
- (void)setFilterMaskViewContainer:(id)arg1;
- (void)setFilterMaskViewMap:(id)arg1;
- (void)setColorTintMaskViewContainer:(id)arg1;
- (void)setColorTintMaskViewMap:(id)arg1;
- (void)setGrayscaleTintMaskViewContainer:(id)arg1;
- (void)setGrayscaleTintMaskViewMap:(id)arg1;
- (int)maskMode;
- (id)filterMaskViewContainer;
- (id)filterMaskViewMap;
- (id)colorTintMaskViewContainer;
- (id)colorTintMaskViewMap;
- (id)grayscaleTintMaskViewContainer;
- (id)grayscaleTintMaskViewMap;
- (id)colorTintView;
- (id)grayscaleTintView;
- (void)setMaskImage:(id)arg1 onLayer:(id)arg2;
- (void)_updateInputBounds;
- (void)adjustTintImplementationIfNeeded:(id)arg1;
- (BOOL)applySettingsAfterLayout;
- (void)setApplySettingsAfterLayout:(BOOL)arg1;
- (BOOL)appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
- (void)setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(BOOL)arg1;
- (void)delayedComputeAndApplySettings;
- (void)setApplyingBackdropChanges:(BOOL)arg1;
- (void)applySettingsWithBuiltInAnimation:(id)arg1;
- (BOOL)appliesOutputSettingsAutomatically;
- (BOOL)applyingBackdropChanges;
- (id)backdropEffectView;
- (void)clearUpdateInputBoundsRunLoopObserver;
- (id)computeAndApplySettingsNotificationObserver;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 autosizesToFitSuperview:(BOOL)arg2 settings:(id)arg3;
- (void)setComputeAndApplySettingsNotificationObserver:(id)arg1;
- (void)computeAndApplySettings:(id)arg1;
- (void)updateSubviewHierarchyIfNeededForSettings:(id)arg1;
- (void)setAllowsColorSettingsSuppression:(BOOL)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setInputSettings:(id)arg1;
- (BOOL)autosizesToFitSuperview;
- (void)setAutosizesToFitSuperview:(BOOL)arg1;
- (id)backdropViewLayer;
- (id)graphicsQualityChangeDelegate;
- (BOOL)wantsColorSettings;
- (void)setWantsColorSettings:(BOOL)arg1;
- (BOOL)computesColorSettings;
- (BOOL)allowsColorSettingsSuppression;
- (void)didCallRenderInContextOnBackdropViewLayer;
- (void)willCallRenderInContextOnBackdropViewLayer;
- (void)setAppliesOutputSettingsAnimationDuration:(double)arg1;
- (void)setUsesGroupFilters:(BOOL)arg1;
- (float)_saturationDeltaFactor;
- (id)_blurQuality;
- (float)_blurRadius;
- (BOOL)_zoomsBack;
- (BOOL)_backdropVisible;
- (BOOL)blursWithHardEdges;
- (void)setBlursWithHardEdges:(BOOL)arg1;
- (void)settingsDidChange:(id)arg1;
- (int)blurHardEdges;
- (id)blurQuality;
- (BOOL)isBackdropVisible;
- (void)setZoomsBack:(BOOL)arg1;
- (void)setBlurQuality:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (void)transitionToSettings:(id)arg1;
- (void)transitionToPrivateStyle:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 privateStyle:(int)arg2;
- (void)setFilterMaskImage:(id)arg1;
- (void)setSaturationDeltaFactor:(float)arg1;
- (void)setColorTintMaskImage:(id)arg1;
- (void)setGrayscaleTintMaskImage:(id)arg1;
- (void)setBackdropVisible:(BOOL)arg1;
- (void)transitionToStyle:(int)arg1;
- (void)applySettings:(id)arg1;
- (void)setComputesColorSettings:(BOOL)arg1;
- (void)updateMaskViewsForView:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (void)setBlurHardEdges:(int)arg1;
- (id)inputSettings;
- (id)initWithPrivateStyle:(int)arg1;
- (id)outputSettings;
- (void)didMoveToSuperview;
- (void)setBlurRadius:(float)arg1;
- (float)saturationDeltaFactor;
- (float)blurRadius;
- (id)filterMaskImage;
- (id)colorTintMaskImage;
- (id)grayscaleTintMaskImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)addObserver:(id)arg1;
- (void)setObserver:(id)arg1;
- (BOOL)accessibilityElementsHidden;

@end
