/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDAContent, WDText, WDDocument;

@interface WDATextBox : NSObject  {
    WDText *mText;
    unsigned long mNextTextBoxId;
    boolmOle;
    WDDocument *mDocument;
    WDAContent *mParent;
}


- (BOOL)isOle;
- (void)setNextTextBoxId:(unsigned long)arg1;
- (void)setOle:(BOOL)arg1;
- (unsigned long)nextTextBoxId;
- (void)setParent:(id)arg1;
- (id)document;
- (void)setDocument:(id)arg1;
- (id)text;
- (id)init;
- (void)dealloc;
- (void)setText:(id)arg1;
- (id)parent;

@end
