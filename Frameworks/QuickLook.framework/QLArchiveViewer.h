/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPreviewController, UIDocumentInteractionController, UIPopoverController, UINavigationController, UITableViewController;

@interface QLArchiveViewer : NSObject <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate> {
    QLPreviewController *_previewController;
    UIDocumentInteractionController *_documentInteractionController;
    UINavigationController *_navigationController;
    UIPopoverController *_popoverController;
    UITableViewController *_tableViewController;
    BOOL _visible;
}

@property(getter=isVisible,readonly) BOOL visible;


- (void)_updateIcon:(id)arg1 forCell:(id)arg2 template:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })_imageSize;
- (void)_cancelUpdateThumbnails;
- (void)_updateThumbnails;
- (void)dismiss:(id)arg1;
- (void)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (id)initWithPreviewController:(id)arg1;
- (BOOL)isVisible;
- (void)update;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
- (unsigned int)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
