/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIRedeemStepViewController, NSString, SKUIClientContext;

@interface SKUIRedeemViewController : UINavigationController  {
    int _category;
    SKUIClientContext *_clientContext;
    NSString *_initialCode;
    SKUIRedeemStepViewController *_rootViewController;
    NSOperationQueue *_operationQueue;
}

@property(readonly) int category;
@property(copy) NSString * initialCode;
@property(retain) SKUIClientContext * clientContext;
@property(retain) NSOperationQueue * operationQueue;

+ (id)startingViewControllerForCategory:(int)arg1;

- (id)initialCode;
- (void)setInitialCode:(id)arg1;
- (id)initWithRedeemCategory:(int)arg1;
- (void)_showRootViewController;
- (void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2;
- (void)_cancelButtonAction:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (int)category;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;

@end
