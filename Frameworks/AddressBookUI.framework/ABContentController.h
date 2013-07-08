/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIView;

@interface ABContentController : NSObject <ABContentControllerProtocol> {
    void *_addressBook;
    id _contentControllerDelegate;
    UIView *_contentLayer;
}

@property void* addressBook;


- (void)preloadController;
- (BOOL)contentViewIsVisible;
- (void)cleanUpContentLayer;
- (void)setContentControllerDelegate:(id)arg1;
- (id)contentControllerDelegate;
- (void)back:(BOOL)arg1 save:(BOOL)arg2;
- (id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2;
- (void)reload;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)contentView;
- (id)init;
- (void)dealloc;
- (void)displayScrollerIndicators;

@end
