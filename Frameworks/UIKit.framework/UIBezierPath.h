/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBezierPath : NSObject <NSCopying, NSCoding> {
    struct CGPath { } *_path;
    float *_lineDashPattern;
    unsigned int _lineDashPatternCount;
    float _lineWidth;
    float _miterLimit;
    float _flatness;
    float _lineDashPhase;
    int _lineCapStyle;
    int _lineJoinStyle;
    BOOL _usesEvenOddFillRule;
    struct CGPath { } *_immutablePath;
    BOOL _immutablePathIsValid;
}

@property struct CGPath { }* CGPath;
@property(getter=isEmpty,readonly) BOOL empty;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(readonly) struct CGPoint { float x1; float x2; } currentPoint;
@property float lineWidth;
@property int lineCapStyle;
@property int lineJoinStyle;
@property float miterLimit;
@property float flatness;
@property BOOL usesEvenOddFillRule;

+ (id)bezierPathWithCGPath:(struct CGPath { }*)arg1;
+ (id)shadowBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedEdges:(unsigned int)arg2;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(float)arg3 segments:(int)arg4;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 withCornerRadius:(float)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedEdges:(unsigned int)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTopCornerRadius:(float)arg2 withBottomCornerRadius:(float)arg3;
+ (id)bezierPathWithArcCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned int)arg2 cornerRadii:(struct CGSize { float x1; float x2; })arg3;
+ (id)_bezierPathWithArcRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cornerRadius:(float)arg2;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cornerRadius:(float)arg2;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 segments:(int)arg4;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(struct CGSize { float x1; float x2; })arg3 segments:(int)arg4;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 withCornerRadii:(id)arg3;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(float)arg3 segments:(int)arg4 legacyCorners:(BOOL)arg5;
+ (id)_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned int)arg2 cornerRadius:(float)arg3;
+ (id)bezierPath;

- (void)setMiterLimit:(float)arg1;
- (float)miterLimit;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)lineWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (BOOL)usesEvenOddFillRule;
- (struct CGPath { }*)CGPath;
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUsesEvenOddFillRule:(BOOL)arg1;
- (void)setFlatness:(float)arg1;
- (float)flatness;
- (void)setLineJoinStyle:(int)arg1;
- (int)lineJoinStyle;
- (void)setLineCapStyle:(int)arg1;
- (int)lineCapStyle;
- (void)setLineWidth:(float)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPath:(id)arg1;
- (void)clip;
- (void)lineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPath { }*)_pathRef;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint { float x1; float x2; })arg1 radius:(struct CGSize { float x1; float x2; })arg2 corner:(unsigned int)arg3 clockwise:(BOOL)arg4;
- (void)strokeWithBlendMode:(int)arg1 alpha:(float)arg2;
- (void)fillWithBlendMode:(int)arg1 alpha:(float)arg2;
- (void)stroke;
- (void)fill;
- (void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3;
- (void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (void)setCGPath:(struct CGPath { }*)arg1;
- (id)bezierPathByReversingPath;
- (void)removeAllPoints;
- (void)applyTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)appendPath:(id)arg1;
- (void)addArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)addClip;
- (void)addCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)addQuadCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)addLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)closePath;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPath { }*)_mutablePath;
- (struct CGPath { }*)_createMutablePathByDecodingData:(id)arg1;
- (id)_initWithCGMutablePath:(struct CGPath { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)ax_description;
- (void)ax_enumerateElementsUsingBlock:(id)arg1;
- (id)ax_descriptionForPathElement:(const struct CGPathElement { int x1; struct CGPoint {} *x2; }*)arg1;

@end
