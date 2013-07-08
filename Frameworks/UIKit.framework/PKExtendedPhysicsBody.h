/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface PKExtendedPhysicsBody : PKPhysicsBody  {
    int _associations;
    float _areaFactor;
}

@property float normalizedDensity;

+ (id)bodyWithEdgeChainFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithCircleOfRadius:(float)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { float x1; float x2; })arg1;

- (id)initWithRectangleOfSize:(struct CGSize { float x1; float x2; })arg1;
- (id)init;
- (id)description;
- (void)associate;
- (BOOL)dissociate;
- (float)normalizedDensity;
- (void)setNormalizedDensity:(float)arg1;

@end
