/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFModernAddressAtomDelegate>, NSString, MFModernAtomView, UIFont;

@interface MFModernAddressAtom : UIControl  {
    <MFModernAddressAtomDelegate> *_delegate;
    MFModernAtomView *_atomView;
    void *_person;
    NSString *_fullAddress;
    NSString *_displayString;
    unsigned int _maxWidth;
    int _identifier;
    unsigned int _addressIsPhoneNumber : 1;
    unsigned int _updatedABPerson : 1;
    unsigned int _isDisplayStringFromAddressBook : 1;
    void *_addressBook;
}

@property unsigned int presentationOptions;
@property int separatorStyle;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property float scale;
@property BOOL hidesVIPIndicator;
@property(readonly) struct CGPoint { float x1; float x2; } baselinePoint;
@property(retain) UIFont * atomFont;
@property BOOL isPrimaryAddressAtom;

+ (id)copyDisplayStringForAddress:(id)arg1 usingAddressBook:(void*)arg2 useAbbreviatedName:(BOOL)arg3;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_accessibilityPerformValidations:(id)arg1;
+ (void)_initializeSafeCategory;

- (id)unmodifiedAddressString;
- (int)ABPropertyType;
- (BOOL)isDisplayStringFromAddressBook;
- (void)setAtomFont:(id)arg1;
- (id)atomFont;
- (void)addressBookDidChange:(id)arg1;
- (id)initWithAddress:(id)arg1 presentationOptions:(unsigned int)arg2 isPhoneNumber:(BOOL)arg3 maxWidth:(float)arg4 addressBook:(void*)arg5;
- (void)_updateABPerson;
- (void)_displayStringDidChange;
- (void)_updateDisplayStringIncludingABPerson:(BOOL)arg1;
- (void)setHidesVIPIndicator:(BOOL)arg1;
- (BOOL)hidesVIPIndicator;
- (void)setPresentationOptions:(unsigned int)arg1;
- (void)setIsPrimaryAddressAtom:(BOOL)arg1;
- (BOOL)isPrimaryAddressAtom;
- (unsigned int)presentationOptions;
- (void)setAddress:(id)arg1;
- (id)emailAddress;
- (void*)ABPerson;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setMaxWidth:(unsigned int)arg1;
- (void)setScale:(float)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (int)identifier;
- (id)displayString;
- (struct CGPoint { float x1; float x2; })baselinePoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_highlightBounds;
- (int)separatorStyle;
- (void)setSeparatorStyle:(int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (float)scale;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end
