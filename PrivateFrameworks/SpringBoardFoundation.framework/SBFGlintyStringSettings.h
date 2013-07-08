/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFGlintyStringSettings : _UISettings  {
    BOOL _designMode;
    BOOL _debug;
    float _speed;
    float _overlayOpacity;
    float _overlayTint;
    float _animationIntervalDelay;
    float _spotlightOpacity;
    float _spotlightAnimationDuration;
    float _spotlightAnimationDelay;
    float _glintOpacity;
    float _glintAnimationDuration;
    float _leadingGlintAnimationDelay;
    float _trailingGlintAnimationDelay;
}

@property(setter=setDesignMode:) BOOL designMode;
@property float speed;
@property float overlayOpacity;
@property float overlayTint;
@property float animationIntervalDelay;
@property float spotlightOpacity;
@property float spotlightAnimationDuration;
@property float spotlightAnimationDelay;
@property float glintOpacity;
@property float glintAnimationDuration;
@property float leadingGlintAnimationDelay;
@property float trailingGlintAnimationDelay;
@property BOOL debug;

+ (id)archivedSettingsGroup;

- (float)trailingGlintAnimationDelay;
- (float)leadingGlintAnimationDelay;
- (float)glintAnimationDuration;
- (float)glintOpacity;
- (float)spotlightAnimationDelay;
- (float)spotlightAnimationDuration;
- (float)spotlightOpacity;
- (float)animationIntervalDelay;
- (void)setOverlayTint:(float)arg1;
- (float)overlayTint;
- (float)overlayOpacity;
- (id)settingsHUDConfiguration;
- (void)setTrailingGlintAnimationDelay:(float)arg1;
- (void)setLeadingGlintAnimationDelay:(float)arg1;
- (void)setGlintOpacity:(float)arg1;
- (void)setGlintAnimationDuration:(float)arg1;
- (void)setSpotlightAnimationDelay:(float)arg1;
- (void)setSpotlightAnimationDuration:(float)arg1;
- (void)setSpotlightOpacity:(float)arg1;
- (void)setAnimationIntervalDelay:(float)arg1;
- (void)setOverlayOpacity:(float)arg1;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (void)setDebug:(BOOL)arg1;
- (BOOL)debug;
- (void)setDesignMode:(BOOL)arg1;
- (BOOL)designMode;
- (void)setDefaultValues;

@end
