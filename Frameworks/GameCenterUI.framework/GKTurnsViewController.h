/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSIndexPath, GKGameTurnInfo, GKTurnsDataSource;

@interface GKTurnsViewController : GKCollectionViewController <UICollectionViewDelegate> {
    GKGameTurnInfo *_selectedTurnInfo;
    GKTurnsDataSource *_turnsDataSource;
    NSIndexPath *_selectedIndexPath;
}

@property(retain) GKGameTurnInfo * selectedTurnInfo;
@property(retain) GKTurnsDataSource * turnsDataSource;
@property(retain) NSIndexPath * selectedIndexPath;


- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)turnsDataSource;
- (void)showMatchesViewControllerForTurnInfo:(id)arg1;
- (void)showSubcontroller:(id)arg1;
- (void)setSelectedTurnInfo:(id)arg1;
- (id)selectedTurnInfo;
- (void)restoreSelectedTurnInfo;
- (void)setTurnsDataSource:(id)arg1;
- (void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didEnterNoContentState;
- (void)loadDataWithCompletionHandlerAndError:(id)arg1;
- (void)configureDataSource;
- (id)init;
- (void)dealloc;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

@end
