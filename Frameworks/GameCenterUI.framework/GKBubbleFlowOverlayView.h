/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKValueWithCaptionBubbleControl, NSArray;

@interface GKBubbleFlowOverlayView : UIView  {
    GKValueWithCaptionBubbleControl *_gamesBubble;
    GKValueWithCaptionBubbleControl *_friendsBubble;
    GKValueWithCaptionBubbleControl *_requestsBubble;
    GKValueWithCaptionBubbleControl *_challengesBubble;
    GKValueWithCaptionBubbleControl *_turnsBubble;
    NSArray *_bubbles;
}

@property(retain) GKValueWithCaptionBubbleControl * gamesBubble;
@property(retain) GKValueWithCaptionBubbleControl * friendsBubble;
@property(retain) GKValueWithCaptionBubbleControl * requestsBubble;
@property(retain) GKValueWithCaptionBubbleControl * challengesBubble;
@property(retain) GKValueWithCaptionBubbleControl * turnsBubble;
@property(retain) NSArray * bubbles;

+ (id)sharedBubbleOverlayView;
+ (id)sharedBubbleOverlayViewForWindow:(id)arg1;

- (void)setBubbles:(id)arg1;
- (void)setTurnsBubble:(id)arg1;
- (id)turnsBubble;
- (void)setChallengesBubble:(id)arg1;
- (id)challengesBubble;
- (void)setRequestsBubble:(id)arg1;
- (id)requestsBubble;
- (void)setFriendsBubble:(id)arg1;
- (id)friendsBubble;
- (void)setGamesBubble:(id)arg1;
- (id)gamesBubble;
- (id)bubbleForType:(int)arg1;
- (void)willBeginTransition;
- (struct CGSize { float x1; float x2; })defaultSizeForBubbleOfType:(int)arg1;
- (struct CGPoint { float x1; float x2; })defaultPositionForBubbleOfType:(int)arg1;
- (BOOL)anyVisibleBubbles;
- (void)_updateBubblesForOrientation:(int)arg1 evenIfBubblesAreVisible:(BOOL)arg2;
- (void)orientationChanged:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultRectForBubbleOfType:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)bubbles;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
