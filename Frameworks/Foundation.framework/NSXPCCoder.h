/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSObject>;

@interface NSXPCCoder : NSCoder  {
    <NSObject> *_userInfo;
    id _reserved1;
}

@property(retain) <NSObject> * userInfo;


- (id)init;
- (id)userInfo;
- (void)dealloc;
- (id)decodeXPCObjectForKey:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (BOOL)requiresSecureCoding;

@end
