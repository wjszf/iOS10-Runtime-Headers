/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLGenericView, QLProgressView, <QLPreviewItemInteractionDelegate>, NSTimer, UIView, <QLPreviewItem>, NSString, QLDisplayBundle, UIDocumentPasswordView;

@interface QLPreviewViewController : UIViewController <QLPreviewItemInteractionDelegate, UIDocumentPasswordViewDelegate, QLSwippableItemProtocol> {
    <QLPreviewItemInteractionDelegate> *_displayBundleDelegate;
    <QLPreviewItem> *_previewItem;
    int _index;
    struct { 
        int pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } contentFrame; 
    } _clientContext;
    int _previewMode;
    BOOL _needsReload;
    BOOL _swiping;
    BOOL _shouldSwapDisplayBundles;
    UIView *_scalingView;
    UIView *_contentContainerView;
    UIView *_accessoryContainerView;
    float _aspectRatio;
    float _scaleFactor;
    QLDisplayBundle *_displayBundle;
    QLDisplayBundle *_newDisplayBundle;
    NSTimer *_progressTimer;
    QLProgressView *_progressView;
    NSString *_loadingTextForMissingFiles;
    BOOL _overlayHidden;
    UIDocumentPasswordView *_documentPasswordView;
    QLGenericView *_airPlayPasswordView;
    BOOL _loadedWithPassword;
}

@property(readonly) QLDisplayBundle * displayBundle;
@property <QLPreviewItemInteractionDelegate> * displayBundleDelegate;
@property int previewMode;
@property struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property(readonly) int airPlayMode;
@property(readonly) UIView * airPlayView;
@property(readonly) UIView * snapshotView;
@property int index;
@property(retain) <QLPreviewItem> * previewItem;


- (void)setDisplayBundleDelegate:(id)arg1;
- (id)displayBundleDelegate;
- (void)preloadIfNeeded;
- (id)airPlayView;
- (id)displayBundle;
- (void)setAspectRatio:(float)arg1 scaleFactor:(float)arg2;
- (void)didFinishSwiping;
- (void)willStartSwiping;
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (void)_showPasswordView;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
- (void)_swapDisplayBundles;
- (void)_scheduleShowProgressiveUI;
- (void)_showGenericDisplayBundleForPreviewItem:(id)arg1;
- (void)_removeDisplayBundles;
- (void)_hideProgressiveUI;
- (void)_hidePasswordView;
- (void)_updateProgressUIWithDuration:(double)arg1;
- (void)refreshPreviewItem;
- (void)_refreshPreviewItem:(BOOL)arg1 withPassword:(id)arg2;
- (void)_showProgressUI;
- (void)_prepareDisplayBundle:(id)arg1 preload:(BOOL)arg2 withHints:(id)arg3;
- (void)_cancelScheduledShowProgressiveUI;
- (void)_layoutViews;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)showContentsWasTappedForPreviewItem:(id)arg1;
- (void)setClientContext:(struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1;
- (struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (void)endTrackingViewUpdates;
- (void)beginTrackingViewUpdates;
- (int)airPlayMode;
- (int)previewMode;
- (void)setPreviewMode:(int)arg1;
- (void)cancelLoadIfNeeded;
- (void)viewDidUpdateForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItemDidLoad:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (id)previewItem;
- (void)setIndex:(int)arg1;
- (int)index;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)_adjustContentOffsetForKeyboardIfNeeded;
- (void)_keyboardDidShow:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)loadView;
- (id)snapshotView;

@end
