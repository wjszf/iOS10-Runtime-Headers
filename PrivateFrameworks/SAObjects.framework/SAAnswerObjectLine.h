/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSNumber, NSString;

@interface SAAnswerObjectLine : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * image;
@property(copy) NSNumber * imageInverted;
@property(copy) NSString * text;

+ (id)objectLineWithDictionary:(id)arg1 context:(id)arg2;
+ (id)objectLine;

- (void)setImageInverted:(id)arg1;
- (id)imageInverted;
- (id)encodedClassName;
- (id)text;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setText:(id)arg1;
- (id)groupIdentifier;

@end
