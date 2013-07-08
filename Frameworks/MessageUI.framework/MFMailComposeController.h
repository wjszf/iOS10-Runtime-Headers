/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeViewControllerDelegate>, NSDictionary, MFModernComposeRecipientAtom, MFMutableMessageHeaders, _MFMailCompositionContext, NSString, MFLock, MFComposeBodyField, UIAlertView, MFSecureMIMECompositionManager, ABUnknownPersonViewController, UIKeyCommand, MFOutgoingMessageDelivery, MFMailPopoverManager, MFMailComposeRecipientView, MFComposeImageSizeView, UIImagePickerController, MFComposeTextContentView, UIBarButtonItem, MFMailAccountProxyGenerator, MFGenericAttachmentStore, MFAddressPickerReformatter, <NSCoding>, MFMailboxUid, ABPersonViewController, MFRecentComposeRecipient, NSArray, MFComposeSubjectView, ABPeoplePickerNavigationController, UIView, UIActionSheet;

@interface MFMailComposeController : UIViewController <UINavigationControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, ABPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABUnknownPersonViewControllerDelegate, MFMailPopoverManagerDelegate, MFMailComposeViewDelegate, MFComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFComposeRecipientViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate, MFGroupDetailViewControllerDelegate> {
    <MFMailComposeViewControllerDelegate> *_delegate;
    id _autorotationDelegate;
    id _remoteViewControllerProxy;
    MFMailAccountProxyGenerator *_accountProxyGenerator;
    _MFMailCompositionContext *_compositionContext;
    unsigned int _options;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSArray *_originalBccAddresses;
    NSString *_subject;
    NSString *_originalSendingEmailAddress;
    NSString *_primaryAddressForForcedSendingAccount;
    NSString *_sendingEmailAddress;
    int _sendingEmailAddressIndex;
    id _content;
    MFGenericAttachmentStore *_attachmentStore;
    unsigned int _initialAttachmentCount;
    UIView *_alternateTitleView;
    UIBarButtonItem *_sendButtonItem;
    UIBarButtonItem *_closeButtonItem;
    ABPeoplePickerNavigationController *_peoplePicker;
    ABPersonViewController *_personViewController;
    ABUnknownPersonViewController *_unknownPersonViewController;
    UIImagePickerController *_photosImagePickerController;
    MFMailComposeRecipientView *_toField;
    MFMailComposeRecipientView *_ccField;
    MFMailComposeRecipientView *_lastFocusedRecipientView;
    MFModernComposeRecipientAtom *_atomPresentingCard;
    MFComposeSubjectView *_subjectField;
    MFComposeImageSizeView *_imageSizeField;
    MFComposeBodyField *_bodyField;
    MFComposeTextContentView *_bodyTextView;
    MFRecentComposeRecipient *_recentRecipientPresentingCard;
    MFMailPopoverManager *_popoverManager;
    UIActionSheet *_activeSheet;
    UIAlertView *_activeAlertView;
    MFOutgoingMessageDelivery *_delivery;
    MFMutableMessageHeaders *_savedHeaders;
    NSString *_lastDraftMessageID;
    MFMailboxUid *_lastDraftMailboxUid;
    NSString *_initialTitle;
    MFLock *_autosaveLock;
    id _autosaveIdentifier;
    MFSecureMIMECompositionManager *_secureCompositionManager;
    NSDictionary *_certificatesByRecipient;
    NSDictionary *_errorsByRecipient;
    NSString *_addressForMissingIdentity;
    int _signingIdentityStatus;
    int _encryptionIdentityStatus;
    BOOL _encryptionStatusIsKnown;
    int _resolution;
    int _recipientFieldWhileViewUnloaded;
    unsigned int _isDirty : 1;
    unsigned int _bodyTextChanged : 1;
    unsigned int _shouldAutosaveWithSuspendInfo : 1;
    unsigned int _isSuspended : 1;
    unsigned int _viewWasUnloaded : 1;
    unsigned int _fromAddressPickerWasVisible : 1;
    unsigned int _stillLoading : 1;
    unsigned int _hosted : 1;
    unsigned int _hasViewAppeared : 1;
    unsigned int _rotationSnapshotTaken : 1;
    unsigned int _isPopoverVisible : 1;
    unsigned int _useSuspended : 1;
    MFAddressPickerReformatter *_addressPickerReformatter;
    BOOL _contentVisible;
    BOOL _allowRestrictedAccounts;
    UIKeyCommand *_sendKeyCommand;
    UIKeyCommand *_escapeKeyCommand;
    NSString *_originatingBundleID;
    int _sourceAccountManagement;
}

@property id delegate;
@property id autorotationDelegate;
@property(retain) id remoteViewControllerProxy;
@property(retain) MFGenericAttachmentStore * attachmentStore;
@property(readonly) MFOutgoingMessageDelivery * delivery;
@property(readonly) NSString * lastDraftMessageID;
@property(readonly) MFMailboxUid * lastDraftMailboxUid;
@property(copy) NSString * originatingBundleID;
@property int sourceAccountManagement;
@property(retain) UIAlertView * activeAlertView;
@property(retain) UIActionSheet * activeSheet;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;
@property(retain) ABPersonViewController * personViewController;
@property(retain) ABUnknownPersonViewController * unknownPersonViewController;
@property(retain) MFModernComposeRecipientAtom * atomPresentingCard;
@property(retain) MFRecentComposeRecipient * recentRecipientPresentingCard;
@property(retain) NSDictionary * certificatesByRecipient;
@property(retain) NSDictionary * errorsByRecipient;
@property(copy) NSString * addressForMissingIdentity;
@property(retain) <NSCoding> * autosaveIdentifier;

+ (BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg1;
+ (BOOL)useAccountSignatures;
+ (id)defaultSignature;
+ (id)preferenceForKey:(id)arg1;
+ (BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (id)signatureMarkupForSendingEmailAddress:(id)arg1;
+ (void)initialize;
+ (id)signature;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)secureMIMECompositionManager:(id)arg1 encryptionStatusDidChange:(int)arg2 context:(id)arg3;
- (void)secureMIMECompositionManager:(id)arg1 signingStatusDidChange:(int)arg2 context:(id)arg3;
- (void)setOriginatingBundleID:(id)arg1;
- (id)delivery;
- (id)lastDraftMailboxUid;
- (id)lastDraftMessageID;
- (id)atomPresentingCard;
- (void)setRemoteViewControllerProxy:(id)arg1;
- (void)setAutorotationDelegate:(id)arg1;
- (id)autorotationDelegate;
- (void)hostApplicationWillEnterForeground;
- (void)hostApplicationDidEnterBackground;
- (void)composeShortcutInvoked:(id)arg1;
- (void)setRecipientsKeyboardType:(int)arg1;
- (BOOL)isSavingAsDraft;
- (void)forceSaveAsDraft;
- (void)_unscaleImages;
- (void)addInlineAttachment:(id)arg1;
- (void)_insertInlineAttachmentWithWrapper:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfAttachment:(id)arg1;
- (void)_updateOriginalBccStatusForRestore;
- (void)_tryAddSenderToBccRecipients;
- (BOOL)_shouldPrependBlankLineForAttachments;
- (void)setCompositionContext:(id)arg1;
- (void)setInitialTitle:(id)arg1;
- (BOOL)hosted;
- (id)initWithCompositionContext:(id)arg1 options:(unsigned int)arg2;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (BOOL)hasAnyHiddenTrailingEmptyQuote;
- (id)addInlinedElementToStore:(id)arg1 onlyIfNecessary:(BOOL)arg2;
- (void)setSavedHeaders:(id)arg1;
- (id)bccRecipients;
- (id)accountProxyGenerator;
- (BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(id)arg1;
- (BOOL)presentSearchResultsForComposeRecipientView:(id)arg1;
- (BOOL)composeRecipientViewShowingSearchResults:(id)arg1;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)imageSizeView:(id)arg1 changedSelectedScaleTo:(unsigned int)arg2;
- (BOOL)sendingEmailDirtied;
- (void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(BOOL)arg2;
- (void)_updateIdentityStatus:(int*)arg1 withPolicy:(int)arg2 identity:(struct __SecIdentity { }*)arg3 error:(id)arg4;
- (id)_missingIdentityErrorWithFormat:(id)arg1 title:(id)arg2;
- (id)addressForMissingIdentity;
- (void)_showMissingIdentityAlert;
- (id)errorsByRecipient;
- (id)certificatesByRecipient;
- (unsigned int)_defaultAtomPresentationOptions;
- (void)_setTitleBarSubtitleText:(id)arg1 style:(unsigned int)arg2;
- (BOOL)_hasRecipients;
- (BOOL)_hasEncryptionIdentityError;
- (void)_updateTitleBarForEncryptionStatus:(int)arg1;
- (void)setAddressForMissingIdentity:(id)arg1;
- (void)setErrorsByRecipient:(id)arg1;
- (void)setCertificatesByRecipient:(id)arg1;
- (void)_updateTableCell:(id)arg1 isChecked:(BOOL)arg2;
- (void)didSelectCellAtRow:(unsigned int)arg1;
- (id)_reformattedAddressAtIndex:(unsigned int)arg1;
- (unsigned int)_reloadNumberOfReformattedAddressesWithMaximumWidth:(float)arg1 defaultFontSize:(float)arg2;
- (id)activeAlertView;
- (void)setActiveAlertView:(id)arg1;
- (void)_showPersonCardForRecent:(id)arg1 showDeleteButton:(BOOL)arg2;
- (id)navigationControllerForRecentPersonCard;
- (void)_removeRecent;
- (id)recentRecipientPresentingCard;
- (void)_updatePersonCard;
- (BOOL)isShowingRecentPersonCard;
- (void)_setLastFocusedRecipientView:(id)arg1;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (BOOL)_anyRecipientViewContainsAddress:(id)arg1;
- (void)_updateAutoBccWithSendingAddress:(id)arg1;
- (void)_dismissPersonCard;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (void)_popoverWillBePresented:(id)arg1;
- (void)_applicationDidResume;
- (void)_updateRecipientAtomStyles;
- (void)_finishEnteringRecipients;
- (void)_dismissPeoplePicker:(id)arg1;
- (void)clearInitialTitle;
- (void)setRecentRecipientPresentingCard:(id)arg1;
- (void)setAtomPresentingCard:(id)arg1;
- (void)setUnknownPersonViewController:(id)arg1;
- (void)setPersonViewController:(id)arg1;
- (id)unknownPersonViewController;
- (id)personViewController;
- (int)_fieldForAddressField:(id)arg1;
- (void)_saveMessageValues;
- (void)_restoreMessageValues;
- (void)_focusGained:(id)arg1;
- (void)_composeViewDidDraw:(id)arg1;
- (void)_searchEnded:(id)arg1;
- (void)_searchBegan:(id)arg1;
- (void)attachmentFinishedLoading:(id)arg1;
- (void)attachmentsRemoved:(id)arg1;
- (void)_bodyTextChanged:(id)arg1;
- (int)deliverMessageRemotely;
- (BOOL)needsDelivery;
- (void)_explainAirplaneMode;
- (id)_messageForDraft;
- (id)_messageForRemoteDelivery;
- (void)_setupForSaveAsDraft;
- (void)_setUpDeliveryObject;
- (unsigned long)_estimateMessageSize;
- (void)sendMessage;
- (void)_physicallyScaleImagesToScale:(unsigned int)arg1;
- (void)_prepareImagesForSend;
- (void)_checkForEmptySubject;
- (void)_presentAlertView:(id)arg1;
- (id)_newAlertView;
- (void)_checkForInvalidAddresses;
- (id)_messageUseSuspendInfo:(BOOL)arg1 endingEditing:(BOOL)arg2;
- (id)sendingAccountProxy;
- (void)_leaveMessageInOutbox;
- (void)_displayAlertSheet:(id)arg1;
- (void)_finishedComposing;
- (int)resolution;
- (id)_messageForAutosave;
- (void)_prepareForSuspend;
- (void)_scaleImages;
- (void)_insertInlineAttachment:(id)arg1;
- (void)_unthrottleScalingWithAttachmentStore:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAttachmentWithIdentifier:(id)arg1;
- (BOOL)hasAttachments;
- (BOOL)_wantsEncryption;
- (BOOL)_isPopoverOrActionSheetOrAlertVisible;
- (BOOL)_isSetupForDelivery;
- (BOOL)_shouldEnableCloseButton;
- (BOOL)_shouldEnableSendButton;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_optimalRectForPresentingPopoverInWebView:(id)arg1;
- (id)popoverManagerCreateIfNeeded:(BOOL)arg1;
- (id)compositionContext;
- (id)_allRecipientViews;
- (void)removeAddressAtIndex:(unsigned int)arg1 field:(int)arg2;
- (void)addAddress:(id)arg1 field:(int)arg2;
- (id)addressesForField:(int)arg1;
- (void)_setRecipients:(id)arg1 forField:(int)arg2;
- (id)_addressFieldForField:(int)arg1;
- (id)_attachmentStoreCreateIfNecessary;
- (void)_finishedLoadingAllContentAndAttachments;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setDraftMessageID:(id)arg1 mailbox:(id)arg2;
- (id)savedHeaders;
- (BOOL)_isReplyOrForward;
- (void)_updateImageSizeTitles;
- (void)_pickInitialFirstResponder;
- (void)_loadAttachments;
- (void)_loadingContextDidLoad:(id)arg1;
- (void)_setIsLoading:(BOOL)arg1;
- (void)_updateOriginalBccStatusForRestoreAddingAddress:(BOOL)arg1;
- (BOOL)_isRestoredComposition;
- (void)_checkForReplyAndForwardRestriction;
- (void)_updateSendAndCloseEnabled;
- (id)ccRecipients;
- (id)toRecipients;
- (void)_setupForAutosavedMessage:(id)arg1;
- (void)_setupForOutbox:(id)arg1;
- (void)_setupForExistingNewMessage:(id)arg1 content:(id)arg2;
- (void)_setupForDraft:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (id)originatingBundleID;
- (void)_prepareCompositionContextForLoading:(id)arg1;
- (void)_loadCompositionContext;
- (void)clearAllFields;
- (id)_availableAccountProxies;
- (id)_emailAddresses;
- (void)_resetSecureCompositionManager;
- (void)_resetProxyGenerator;
- (id)_defaultAccount;
- (id)navigationBarTitle;
- (id)_alternateTitleView;
- (void)_updateNavigationBarTitleAnimated:(BOOL)arg1;
- (int)composeType;
- (void)setAddresses:(id)arg1 field:(int)arg2;
- (void)setActiveSheet:(id)arg1;
- (id)activeSheet;
- (void)_attachmentCachedSizesChanged:(id)arg1;
- (void)_unthrottleScalingAfterDelayIfVisible;
- (id)mailComposeView;
- (void)_preferredContentSizeCategoryDidChange:(id)arg1;
- (void)_attachmentLoaderFinished:(id)arg1;
- (int)sourceAccountManagement;
- (void)composeHeaderViewDidConfirmValue:(id)arg1;
- (void)composeHeaderViewDidChangeValue:(id)arg1;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1;
- (void)setAttachmentStore:(id)arg1;
- (id)attachmentStore;
- (int)compositionType;
- (void)composeRecipientView:(id)arg1 showPersonCardForRecent:(id)arg2;
- (BOOL)bccAddressesDirtied;
- (void)setSendingEmailAddress:(id)arg1;
- (id)sendingEmailAddress;
- (void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
- (void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
- (id)currentScaleImageSize;
- (id)bodyField;
- (id)sendingEmailAddressIfExists;
- (BOOL)canShowImageSizeField;
- (BOOL)canShowFromField;
- (id)popoverManager;
- (void)insertPhotoOrVideo;
- (void)dismissSheet;
- (void)setSheet:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (void)_textChanged:(id)arg1;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)remoteViewControllerProxy;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)emailAddresses;
- (void)setHosted:(BOOL)arg1;
- (BOOL)isDirty;
- (id)attachments;
- (void)send:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;
- (void)close:(id)arg1;
- (void)_close;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (id)peoplePicker;
- (id)autosaveIdentifier;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)autosaveWithHandler:(id)arg1;
- (void)_showPhotoPickerWithSourceType:(int)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)keyCommands;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)shouldAutorotate;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (BOOL)pickerView:(id)arg1 shouldUseCheckSelectionForRow:(int)arg2 forComponent:(int)arg3;
- (id)pickerView:(id)arg1 attributedTitleForRow:(int)arg2 forComponent:(int)arg3;
- (unsigned int)pickerView:(id)arg1 numberOfRowsInComponent:(unsigned int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;

@end
