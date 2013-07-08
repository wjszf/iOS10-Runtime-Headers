/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIColor, NSMutableDictionary;

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {
    UIColor *_barTintColor;
    NSMutableDictionary *_customBackgroundImages;
    NSMutableDictionary *_generatedBackgroundImages;
    int _barPosition;
    unsigned int _searchBarStyle;
    unsigned int _barStyle : 3;
    unsigned int _barTranslucence : 3;
    unsigned int _usesEmbeddedAppearance : 1;
    unsigned int _actingAsNavBar : 1;
    unsigned int _usesContiguousBarBackground : 1;
    unsigned int _barHasController;
}

@property int barStyle;
@property unsigned int searchBarStyle;
@property(retain) UIColor * barTintColor;
@property(getter=isTranslucent) BOOL translucent;
@property BOOL usesEmbeddedAppearance;
@property(readonly) UIImage * backgroundImage;
@property(readonly) UIImage * backgroundImagePrompt;
@property BOOL usesContiguousBarBackground;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)usesContiguousBarBackground;
- (id)backgroundImagePrompt;
- (id)_createBackgroundImageForBarStyle:(int)arg1 alpha:(float)arg2;
- (void)_updateBackgroundImageIfPossible;
- (unsigned int)searchBarStyle;
- (BOOL)usesEmbeddedAppearance;
- (void)setSearchBarStyle:(unsigned int)arg1;
- (id)_backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2;
- (void)_setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)setUsesContiguousBarBackground:(BOOL)arg1;
- (BOOL)_hasCustomBackgroundImage;
- (void)_setBehavesAsIfSearchBarHasController:(BOOL)arg1;
- (void)setUsesEmbeddedAppearance:(BOOL)arg1;
- (id)barTintColor;
- (int)_barPosition;
- (void)setBarTintColor:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (int)barStyle;
- (void)setBarStyle:(int)arg1;
- (void)_setBarPosition:(int)arg1;
- (void)_updateBackgroundImage;
- (id)backgroundImage;
- (BOOL)isTranslucent;

@end
