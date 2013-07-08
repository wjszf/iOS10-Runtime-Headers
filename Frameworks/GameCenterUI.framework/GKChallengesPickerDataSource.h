/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKChallenge;

@interface GKChallengesPickerDataSource : GKFriendsSplittingDataSource  {
    GKChallenge *_challenge;
}

@property(retain) GKChallenge * challenge;


- (id)initWithChallenge:(id)arg1;
- (BOOL)canSelectPlayerInfo:(id)arg1;
- (void)configureDataSource;
- (id)challenge;
- (void)setChallenge:(id)arg1;
- (void)dealloc;

@end
