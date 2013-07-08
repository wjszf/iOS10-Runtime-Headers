/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText, CMOutlineState, NSMutableDictionary;

@interface WMState : CMState  {
    CMOutlineState *currentListState;
    CMOutlineState *outlineState;
    NSMutableDictionary *listStates;
    WDText *mLastHeader;
    WDText *mLastFooter;
    unsigned int mCurrentPage;
    unsigned int mBlockIndex;
    unsigned int mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    BOOL mIsFrame;
    BOOL mIsFrameStart;
    BOOL mIsFrameEnd;
    BOOL mIsHeaderOrFooter;
    float mTotalPageHeight;
}


- (BOOL)isCurrentListStateOverridden;
- (void)clearCurrentListState;
- (id)lastFooter;
- (void)setLastFooter:(id)arg1;
- (void)setIsHeaderOrFooter:(BOOL)arg1;
- (id)lastHeader;
- (void)setLastHeader:(id)arg1;
- (void)setPageHeight:(float)arg1;
- (BOOL)isFrameStart;
- (BOOL)isFrameEnd;
- (void)setIsFrameEnd:(BOOL)arg1;
- (void)setIsFrameStart:(BOOL)arg1;
- (void)setIsFrame:(BOOL)arg1;
- (unsigned int)blockIndex;
- (BOOL)isFrame;
- (void)setBlockIndex:(unsigned int)arg1;
- (id)outlineState;
- (void)setCurrentListState:(id)arg1;
- (void)setListState:(id)arg1 forListId:(int)arg2;
- (id)listStateForListId:(int)arg1;
- (BOOL)isCurrentListId:(int)arg1;
- (id)currentListState;
- (void)setRunIndex:(unsigned int)arg1;
- (unsigned int)runIndex;
- (void)setTotalPageHeight:(float)arg1;
- (float)totalPageHeight;
- (float)pageOffset;
- (BOOL)isHeaderOrFooter;
- (float)pageHeight;
- (void)setTopMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (float)leftMargin;
- (float)topMargin;
- (id)init;
- (void)dealloc;
- (unsigned int)currentPage;
- (void)setCurrentPage:(unsigned int)arg1;

@end
