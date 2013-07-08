/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebBrowserView, UIWebPDFViewHandler, NSMutableArray, UIView, NSString, <UIWebFindOnPageHighlighterDelegate>, NSArray;

@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {
    NSMutableArray *_highlightBubbleViews;
    NSArray *_pdfHighlightViews;
    UIView *_highlightHostView;
    UIWebBrowserView *_browserView;
    UIWebPDFViewHandler *_pdfHandler;
    BOOL _zoomToHighlightSelection;
    <UIWebFindOnPageHighlighterDelegate> *_delegate;
    NSString *_searchText;
    unsigned int _numberOfMatches;
    unsigned int _highlightedMatchIndex;
}

@property(readonly) NSString * searchText;
@property <UIWebFindOnPageHighlighterDelegate> * delegate;
@property(readonly) unsigned int numberOfMatches;
@property(readonly) unsigned int highlightedMatchIndex;

+ (BOOL)expandedRectsWouldIntersect:(id)arg1;

- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned int)highlightedMatchIndex;
- (unsigned int)numberOfMatches;
- (void)highlightPreviousMatch;
- (void)highlightNextMatch;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4;
- (void)setSearchText:(id)arg1 matchLimit:(unsigned int)arg2;
- (void)_highlightFindOnPageMatch:(BOOL)arg1;
- (BOOL)_highlightSelection;
- (void)_highlightFindOnPageMatchForPDF:(BOOL)arg1 withPDFHandler:(id)arg2;
- (id)_currentPDFSearchResult;
- (BOOL)_updateHighlightedMatchIndex:(BOOL)arg1;
- (unsigned int)findOnPageOptions;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textRects:(id)arg2 contentImage:(struct CGImage { }*)arg3 wobble:(BOOL)arg4;
- (void)_setSelectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textRects:(id)arg2 contentImage:(struct CGImage { }*)arg3 contentViews:(id)arg4 wobble:(BOOL)arg5;
- (void)_addContentViewAtIndex:(unsigned int)arg1 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_clearHighlightViews;
- (void)_commonInitialize;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchDidBegin:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (void)searchDidFinish:(id)arg1;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (void)searchWasCancelled:(id)arg1;
- (id)initWithPDFViewHandler:(id)arg1;
- (BOOL)updateHighlightBubbleWobble:(BOOL)arg1;
- (id)initWithBrowserView:(id)arg1;
- (void)clearBrowserView;
- (id)searchText;

@end
