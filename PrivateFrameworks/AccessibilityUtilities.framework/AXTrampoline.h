/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface AXTrampoline : NSObject  {
    BOOL _warnAboutUnknownSelectors;
    id _caller;
    Class _targetClass;
}

@property BOOL warnAboutUnknownSelectors;
@property id caller;
@property Class targetClass;

+ (id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2;
+ (id)methodNotFoundSentinal;
+ (void)methodDoesNotExistSentinal;

- (void)setWarnAboutUnknownSelectors:(BOOL)arg1;
- (BOOL)callerIsClass;
- (int (*)())_findIMPForSelector:(SEL)arg1;
- (BOOL)warnAboutUnknownSelectors;
- (Class)targetClass;
- (void)setTargetClass:(Class)arg1;
- (void)setCaller:(id)arg1;
- (id)initWithCaller:(id)arg1 targetClass:(Class)arg2;
- (id)caller;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)description;

@end
