/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIProductPageHeaderViewDelegate>, UIImage, SSVLoadURLOperation, SKUIProductPageItem, SKUIFacebookLikeStatus, SKUIClientContext, SKUIProductPageHeaderFloatingView, SKUIProductPageHeaderView, SKUIItem, UIPopoverController, SKUIItemArtworkContext, NSOperationQueue;

@interface SKUIProductPageHeaderViewController : UIViewController <SKUIItemStateCenterObserver, UIPopoverControllerDelegate> {
    UIPopoverController *_activityPopoverController;
    SKUIItemArtworkContext *_artworkContext;
    SKUIClientContext *_clientContext;
    <SKUIProductPageHeaderViewDelegate> *_delegate;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIProductPageHeaderView *_headerView;
    UIImage *_iconImage;
    SKUIItem *_item;
    long long _itemIdentifier;
    SSVLoadURLOperation *_loadIconOperation;
    SSVLoadURLOperation *_loadUberOperation;
    NSOperationQueue *_operationQueue;
    UIImage *_placeholderImage;
    SKUIProductPageItem *_productPageItem;
    UIImage *_uberImage;
    BOOL _wantsActivityViewController;
    SKUIProductPageHeaderFloatingView *_floatingView;
    BOOL _performArtistActionOnLoad;
}

@property(readonly) SKUIItem * item;
@property(retain) SKUIClientContext * clientContext;
@property <SKUIProductPageHeaderViewDelegate> * delegate;
@property(copy) SKUIFacebookLikeStatus * facebookLikeStatus;
@property(readonly) UIImage * iconImage;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) SKUIProductPageHeaderFloatingView * floatingView;


- (void)_destroyPopoverController;
- (BOOL)_isRestricted;
- (void)_sectionControlAction:(id)arg1;
- (id)facebookLikeStatus;
- (void)setProductPageItem:(id)arg1;
- (void)setFacebookLikeStatus:(id)arg1;
- (void)_shareButtonAction:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_setItemState:(id)arg1 animated:(BOOL)arg2;
- (id)_ageBandString;
- (void)_artistButtonAction:(id)arg1;
- (void)_showActivityViewControllerFromView:(id)arg1;
- (id)_facebookFriendsString;
- (void)_setUberWithImage:(id)arg1 error:(id)arg2;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (id)floatingView;
- (id)_artworkContext;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (id)initWithItem:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)iconImage;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)item;
- (void)reloadData;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;

@end
