/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface NSBezierPathStub : NSObject <NSCopying> {
    int _segmentCount;
    int _segmentMax;
    struct PATHSEGMENT { unsigned char x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; } *_head;
    int _lastSubpathIndex;
    int _elementCount;
    float _lineWidth;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _controlPointBounds;
    float _miterLimit;
    float _flatness;
    float *_dashedLinePattern;
    unsigned int _dashedLineCount;
    float _dashedLinePhase;
    void *_path;
    id _private[4];
    struct { 
        unsigned int _flags : 8; 
        unsigned int _pathState : 2; 
        unsigned int _unused : 22; 
    } _bpFlags;
}

+ (void)drawString:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 withFontName:(id)arg3 andHeight:(float)arg4 color:(id)arg5 alignToTop:(BOOL)arg6 currentTransformStruct:(struct { float x1; float x2; float x3; float x4; float x5; float x6; })arg7;
+ (float)defaultLineWidth;
+ (void)setDefaultLineWidth:(float)arg1;
+ (unsigned int)defaultLineJoinStyle;
+ (void)setDefaultLineJoinStyle:(unsigned int)arg1;
+ (unsigned int)defaultLineCapStyle;
+ (void)setDefaultLineCapStyle:(unsigned int)arg1;
+ (unsigned int)defaultWindingRule;
+ (void)setDefaultWindingRule:(unsigned int)arg1;
+ (float)defaultFlatness;
+ (void)setDefaultFlatness:(float)arg1;
+ (float)defaultMiterLimit;
+ (void)setDefaultMiterLimit:(float)arg1;
+ (void)drawPackedGlyphs:(const char *)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (void)strokeLineFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (void)clipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)strokeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xRadius:(float)arg2 yRadius:(float)arg3;
+ (void)setCurrentCGContext:(struct CGContext { }*)arg1;
+ (void)setWindingRule:(unsigned int)arg1;
+ (unsigned int)windingRule;
+ (void)setMiterLimit:(float)arg1;
+ (float)miterLimit;
+ (float)lineWidth;
+ (struct CGContext { }*)currentCGContext;
+ (void)initialize;
+ (void)fillRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)setFlatness:(float)arg1;
+ (float)flatness;
+ (void)setLineJoinStyle:(unsigned int)arg1;
+ (unsigned int)lineJoinStyle;
+ (void)setLineCapStyle:(unsigned int)arg1;
+ (unsigned int)lineCapStyle;
+ (void)setLineWidth:(float)arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPath;

- (void)_addPathSegment:(int)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (void)setCachesBezierPath:(BOOL)arg1;
- (BOOL)cachesBezierPath;
- (BOOL)isStrokeHitByPath:(id)arg1;
- (BOOL)isStrokeHitByRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isStrokeHitByPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isHitByPath:(id)arg1;
- (BOOL)isHitByRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHitByPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)_locationOfPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3;
- (void)appendBezierPathWithPoints:(struct CGPoint { float x1; float x2; }*)arg1 count:(int)arg2;
- (void)setAssociatedPoints:(struct CGPoint { float x1; float x2; }*)arg1 atIndex:(int)arg2;
- (id)bezierPathByFlatteningPath;
- (void)setClip;
- (void)relativeCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)relativeLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)relativeMoveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_copyFlattenedPath;
- (void)curveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)_appendArcSegmentWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)transformUsingAffineTransform:(id)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4;
- (int)_segmentIndexForElementIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })controlPointBounds;
- (void)_doPath;
- (void)flattenIntoPath:(id)arg1;
- (void)subdivideBezierWithFlatness:(float)arg1 startPoint:(struct CGPoint { float x1; float x2; })arg2 controlPoint1:(struct CGPoint { float x1; float x2; })arg3 controlPoint2:(struct CGPoint { float x1; float x2; })arg4 endPoint:(struct CGPoint { float x1; float x2; })arg5;
- (void)_doUserPathWithOp:(unsigned char)arg1 inContext:(struct CGContext { }*)arg2;
- (unsigned int)elementAtIndex:(int)arg1 associatedPoints:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)_deviceLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_deviceMoveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)appendBezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xRadius:(float)arg2 yRadius:(float)arg3;
- (int)elementCount;
- (void)setWindingRule:(unsigned int)arg1;
- (unsigned int)windingRule;
- (void)setMiterLimit:(float)arg1;
- (float)miterLimit;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)lineWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (unsigned int)elementAtIndex:(int)arg1;
- (id)init;
- (BOOL)isEmpty;
- (void)finalize;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFlatness:(float)arg1;
- (float)flatness;
- (void)setLineJoinStyle:(unsigned int)arg1;
- (unsigned int)lineJoinStyle;
- (void)setLineCapStyle:(unsigned int)arg1;
- (unsigned int)lineCapStyle;
- (void)setLineWidth:(float)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPath:(id)arg1;
- (void)lineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stroke;
- (void)fill;
- (void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3;
- (void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (id)bezierPathByReversingPath;
- (void)removeAllPoints;
- (void)addClip;
- (void)closePath;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
