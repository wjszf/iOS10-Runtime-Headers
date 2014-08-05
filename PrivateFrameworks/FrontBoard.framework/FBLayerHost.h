/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class FBWindowContext;

@interface FBLayerHost : CALayerHost  {
    FBWindowContext *_windowContext;
    double _scale;
    double _rotation;
    struct CGPoint { 
        double x; 
        double y; 
    } _translation;
}

@property(retain,readonly) FBWindowContext * windowContext;
@property double scale;
@property double rotation;
@property struct CGPoint { double x1; double x2; } translation;


- (id)windowContext;
- (id)initWithWindowContext:(id)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })translation;
- (void)setScale:(double)arg1;
- (double)rotation;
- (void)setDebug:(bool)arg1;
- (void)dealloc;
- (id)description;
- (double)scale;
- (void)setRotation:(double)arg1;

@end