/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPageOverlayController, SKUIIPhoneChartsViewController, SKUIChartsComponent, SKUIIPadChartsViewController;

@interface SKUIChartsPageSection : SKUIStorePageSection <SKUIChartsViewControllerDelegate, SKUIProductPageOverlayDelegate> {
    SKUIIPadChartsViewController *_ipadViewController;
    SKUIIPhoneChartsViewController *_iphoneViewController;
    SKUIProductPageOverlayController *_overlayController;
    int _selectedChartIndex;
    int _selectedItemIndex;
}

@property(readonly) SKUIChartsComponent * pageComponent;


- (id)cellForIndexPath:(id)arg1;
- (void)chartsViewController:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3 chartIndex:(int)arg4;
- (id)chartsViewController:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndex:(int)arg3 chartIndex:(int)arg4;
- (void)_recordClickEvent:(id)arg1 withItem:(id)arg2 itemIndex:(int)arg3 chartIndex:(int)arg4;
- (id)_chartsViewController;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (void)prefetchResourcesWithReason:(int)arg1;
- (BOOL)fitsToHeight;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
