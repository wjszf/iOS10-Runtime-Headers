/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UITableView, MFMailComposeRecipientView, NSMutableIndexSet, NSArray, NSMutableArray;

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    NSMutableIndexSet *_selectedIndexes;
    NSMutableArray *_recipients;
    MFMailComposeRecipientView *_recipientView;
}

@property(readonly) NSArray * recipients;
@property(retain) MFMailComposeRecipientView * recipientView;


- (id)recipientView;
- (void)_dismissAndAddSelectedContacts;
- (void)_didTapDoneButton:(id)arg1;
- (void)setRecipientView:(id)arg1;
- (id)initWithRecentComposeRecipients:(id)arg1;
- (id)recipients;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
