/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UILazyMapTable, NSOperationQueue, NSArray, NSMapTable, CMMotionManager, CADisplayLink, _UIMotionEffectEngineLogger, NSMutableSet, _UIAssociationTable;

@interface _UIMotionEffectEngine : NSObject  {
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_analyzersToHistories;
    NSMapTable *_suspendedViewsToEffectSets;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
    BOOL _hasPendingDeviceMotionData;
    struct { 
        struct { 
            double w; 
            double x; 
            double y; 
            double z; 
        } quaternion; 
        struct { 
            float x; 
            float y; 
            float z; 
        } userAcceleration; 
        struct { 
            float x; 
            float y; 
            float z; 
        } rotationRate; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
        int magneticFieldCalibrationLevel; 
        booldoingYawCorrection; 
        booldoingBiasEstimation; 
        boolisInitialized; 
    } _pendingDeviceMotionStruct;
    double _pendingDeviceMotionTimestamp;
    int _pendingDeviceMotionLock;
    CADisplayLink *_displayLink;
    BOOL _generatingUpdates;
    NSMutableSet *_suspendReasons;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } _lastDeviceQuaternion;
    double _lastUpdateTimestamp;
    BOOL _slowUpdatesEnabled;
    BOOL _pendingSlowDown;
    int _sensorStatus;
    BOOL _allAnalyzersAreCentered;
    _UIMotionEffectEngineLogger *_motionLogger;
    int _thermalNotificationToken;
    int _screenBlankingNotificationToken;
    int _targetInterfaceOrientation;
}

@property(readonly) NSArray * suspensionReasons;
@property(setter=_setTargetInterfaceOrientation:) int _targetInterfaceOrientation;

+ (BOOL)_motionEffectsSupported;
+ (BOOL)_motionEffectsEnabled;

- (id)init;
- (id)debugDescription;
- (void)dealloc;
- (void)_setMotionManagerSensorStatus:(int)arg1;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)_handleLatestDeviceMotion;
- (void)_scheduleUpdateWithDeviceMotion:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; boolx6; boolx7; boolx8; }*)arg1 timestamp:(double)arg2;
- (void)_startGeneratingUpdates;
- (BOOL)_shouldGenerateUpdates;
- (void)_startOrStopGeneratingUpdates;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (BOOL)_shouldSuspendApplicationForHysteresisGivenLastAppliedViewerOffset:(struct UIOffset { float x1; float x2; })arg1 newViewerOffset:(struct UIOffset { float x1; float x2; })arg2 wasSuspendingApplicationForHysteresis:(BOOL)arg3;
- (void)_toggleSlowUpdates;
- (BOOL)_isSuspended;
- (void)_updateDisplayLinkInterval;
- (void)_unapplyAllEffects;
- (void)_stopGeneratingUpdates;
- (void)_reconsiderMotionEffectsEnabledSetting;
- (id)suspensionReasons;
- (int)_targetInterfaceOrientation;
- (void)_setTargetInterfaceOrientation:(int)arg1;
- (BOOL)_motionEffectsAreSuspendedForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)resetMotionAnalysis;
- (void)endSuspendingForReason:(id)arg1;
- (void)beginSuspendingForReason:(id)arg1;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (BOOL)_hasMotionEffectsForView:(id)arg1;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;

@end
