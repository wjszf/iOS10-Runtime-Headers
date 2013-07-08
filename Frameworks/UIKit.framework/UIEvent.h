/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIEvent : NSObject  {
    double _timestamp;
}

@property(readonly) int type;
@property(readonly) int subtype;
@property(readonly) double timestamp;


- (double)timestamp;
- (int)subtype;
- (BOOL)isKeyDown;
- (void)_setTimestamp:(double)arg1;
- (id)_triggeringPhysicalButton;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_physicalButtonsForWindow:(id)arg1;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (id)_unmodifiedInput;
- (id)_modifiedInput;
- (int)_modifierFlags;
- (int)_moveDirection;
- (void)_sendEventToResponder:(id)arg1;
- (struct __IOHIDEvent { }*)_hidEvent;
- (BOOL)_isKeyDown;
- (id)_windows;
- (struct __GSEvent { }*)_gsEvent;
- (id)allTouches;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)_allPhysicalButtons;
- (id)_screen;
- (int)type;
- (id)_init;

@end
