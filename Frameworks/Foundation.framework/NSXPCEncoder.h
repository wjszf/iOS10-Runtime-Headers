/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSXPCEncoderDelegate>, NSXPCConnection, NSObject<OS_xpc_object>, NSMutableSet;

@interface NSXPCEncoder : NSXPCCoder  {
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCConnection *_connection;
    struct __CFDictionary { } *_replacedObjects;
    struct __CFDictionary { } *_replacedByDelegateObjects;
    <NSXPCEncoderDelegate> *_delegate;
    BOOL _askForReplacement;
    void **_encoder;
    unsigned long long _genericIndex;
    NSMutableSet *_cache;
}

@property NSXPCConnection * _connection;
@property <NSXPCEncoderDelegate> * delegate;


- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (id)init;
- (id)debugDescription;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (BOOL)allowsKeyedCoding;
- (void)finalize;
- (void)dealloc;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (id)delegate;
- (void)_encodeObject:(id)arg1;
- (void)_checkObject:(id)arg1;
- (id)_replaceObject:(id)arg1;
- (void)_encodeCString:(const char *)arg1 forKey:(id)arg2;
- (id)_createRootXPCObject;
- (void)_setCache:(id)arg1;
- (void)set_connection:(id)arg1;
- (void)encodeInvocation:(id)arg1;
- (id)_connection;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;

@end
