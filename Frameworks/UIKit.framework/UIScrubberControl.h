/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIView, UIImage;

@interface UIScrubberControl : UIOldSliderControl  {

  /* Error parsing encoded ivar type info: (?="image"@"UIImage""view"@"UIView") */
    union { 
        UIImage *image; 
        id view; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*UIView; 
    } _sliderAvailableFill;

    double _duration;
    float _lastDisplayedWidth;
    float _maxTrackWidth;
    UIView *_elapsedTimeView;
    UIView *_remainingTimeView;
    id _delegate;
    double _trackingStartTime;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastUpdatedPoint;
    float _valueAvailable;
    unsigned int _didDrag : 1;
    unsigned int _sentScrubbingStart : 1;
    unsigned int _autoSizesToFitDuration : 1;
    unsigned int _layoutTimeParts : 2;
    unsigned int _remainingIsDuration : 1;
    unsigned int _delegateDidEnterScrubbingState : 1;
    unsigned int _delegateDidChangeScrubValue : 1;
    unsigned int _delegateShouldBeginScrubbing : 1;
    unsigned int _endingTracking : 1;
    unsigned int _showKnob : 1;
    unsigned int _largeKnob : 1;
    unsigned int _rightCapIsDownloadCap : 1;
    unsigned int _requireMomentaryDelay : 1;
    unsigned int _showFullWidthComponents : 1;
    unsigned int _alwaysShowAllComponentsForDuration : 1;
    unsigned int _timeLayoutDisabledCount : 7;
    unsigned int _timeLayoutSkippedLayout : 1;
    unsigned int _timeLayoutSkippedForcedLayout : 1;
    unsigned int _showTimeCentered : 1;
    unsigned int _leftCapIsDownloadCap : 1;
    unsigned int _allowsAnyValue : 1;
    unsigned int _unused : 3;
}

+ (BOOL)allowLayeredFillForKnob;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)setDuration:(double)arg1;
- (const struct { float x1; float x2; float x3; }*)metrics;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)setValueAvailable:(float)arg1;
- (void)setScrubbingRequiresMomentaryDelay:(BOOL)arg1;
- (void)setShowDuration:(BOOL)arg1;
- (void)setShowFullWidthComponents:(BOOL)arg1;
- (void)enableTimesLayout;
- (void)disableTimesLayout;
- (void)setAllowsAnyValue:(BOOL)arg1;
- (BOOL)pointInsideKnob:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (double)requiredAutoUpdateDurationForDuration:(double)arg1;
- (void)setShowTimeCenteredInAvailableArea:(BOOL)arg1;
- (void)setPinTimeToOutsideEdges:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 showKnob:(BOOL)arg4;
- (float)scrubValue;
- (void)_sendDelegateDidEnterScrubbingState:(BOOL)arg1;
- (BOOL)pointInsideKnob:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setValue:(float)arg1 animated:(BOOL)arg2 animationCurve:(int)arg3;
- (void)_updateAvailableFill;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sliderBounds;
- (BOOL)_notAllValueAvailable;
- (void)drawSliderPiece:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillBounds;
- (void)_updateTimes:(BOOL)arg1;
- (id)imageForSliderPiece:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectOfTrack;
- (void)_resetTimeFrames;
- (id)createSliderKnobView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 knobStyle:(int)arg4;
- (void)setTimeShadowColor:(id)arg1;
- (void)setTimeColor:(id)arg1;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)sizeToFit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (double)duration;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)_accessibilityBumpValue:(BOOL)arg1;
- (BOOL)_axInteractionEnabled;

@end
