/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class QLArchiveViewer, UILabel, MPVolumeView, _UIAsyncInvocation, NSNumberFormatter, QLPreviewItemsSource, UIDocumentInteractionController, UIBarButtonItem, UINavigationController, UIView, UIViewController<QLPreviewContentControllerProtocol>, <QLPreviewItem>, NSString, NSMutableDictionary, NSTimer;

@interface QLPreviewControllerReserved : NSObject  {
    <QLPreviewItem> *previewItem;
    id delegate;
    BOOL blockRemoteImages;
    BOOL useCustomActionButton;
    BOOL showActionAsDefaultButton;
    NSString *loadingTextForMissingFiles;
    int mode;
    int previousMode;
    QLPreviewItemsSource *itemsSource;
    UIViewController<QLPreviewContentControllerProtocol> *previewContentController;
    _UIAsyncInvocation *cancelViewServiceRequest;
    NSTimer *timeoutTimer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id readyBlock;

    int previousToolbarStyle;
    BOOL previousToolbarWasTranslucent;
    int previousStatusBarStyle;
    UINavigationController *navigationController;
    int overlayState;
    UIBarButtonItem *archiveItem;
    UIBarButtonItem *listItem;
    UIBarButtonItem *titleItem;
    UIBarButtonItem *actionItem;
    BOOL scrubbing;
    UIBarButtonItem *indexItem;
    UILabel *indexLabel;
    UIBarButtonItem *playPauseButton;
    UIBarButtonItem *routeButton;
    MPVolumeView *volumeView;
    BOOL internalViewsLoaded;
    UIView *mainView;
    unsigned int statusBarWasHidden : 1;
    unsigned int toolbarWasHidden : 1;
    unsigned int isInUIDICPopover : 1;
    NSNumberFormatter *indexFormatter;
    QLArchiveViewer *archiveViewer;
    UIDocumentInteractionController *interactionController;
    NSMutableDictionary *pdfPreviewDataCache;
    NSMutableDictionary *avStateForPreviewItems;
    BOOL sourceIsManaged;
}


- (id)init;
- (void)dealloc;

@end
