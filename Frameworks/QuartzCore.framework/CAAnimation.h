/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CAMediaTimingFunction, CAStateControllerTransition, NSString;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {
    void *_attr;
    unsigned int _flags;
}

@property(copy) id animationDidStartBlock;
@property(copy) id animationDidStopBlock;
@property CAStateControllerTransition * CAStateControllerTransition;
@property(getter=isEnabled) BOOL enabled;
@property(copy) NSString * beginTimeMode;
@property double frameInterval;
@property(retain) CAMediaTimingFunction * timingFunction;
@property(retain) id delegate;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property(copy) NSString * fillMode;

+ (int (*)())CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)())CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (BOOL)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (id)animation;
+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setSpeed:(float)arg1;
- (float)speed;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setBeginTimeMode:(id)arg1;
- (id)beginTimeMode;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (void)setDefaultDuration:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (BOOL)removedOnCompletion;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 layer:(id)arg2;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setFillMode:(id)arg1;
- (id)fillMode;
- (BOOL)autoreverses;
- (void)setRepeatDuration:(double)arg1;
- (double)repeatDuration;
- (float)repeatCount;
- (double)timeOffset;
- (double)frameInterval;
- (id)timingFunction;
- (BOOL)isRemovedOnCompletion;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)beginTime;
- (void)setDuration:(double)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)debugDescription;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)setFrameInterval:(double)arg1;
- (double)duration;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setAnimationDidStopBlock:(id)arg1;
- (id)animationDidStopBlock;
- (void)setAnimationDidStartBlock:(id)arg1;
- (id)animationDidStartBlock;

@end
