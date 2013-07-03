/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSURL, NSData, NSString;

@interface NSSubstituteWebResource : NSObject  {
    NSData *_data;
    NSURL *_url;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSString *_frameName;
}


- (id)textEncodingName;
- (id)webResource;
- (id)frameName;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (Class)_webResourceClass;
- (id)data;
- (id)MIMEType;
- (void)dealloc;
- (id)URL;

@end