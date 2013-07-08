/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSMutableDictionary, NSString, NSData;

@interface AceObject : NSObject <AceObject> {
    NSString *_aceId;
    NSString *_refId;
    NSData *_plistData;
    NSMutableDictionary *_dict;
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;
@property(readonly) NSData * plistData;
@property(readonly) NSMutableDictionary * dict;

+ (id)aceObjectWithPlistData:(id)arg1;
+ (id)dictionaryWithAceObjectDictionary:(id)arg1;
+ (id)dictionaryArrayWithAceObjectArray:(id)arg1;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)_newAceObjectWithMutableDictionary:(id)arg1;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void)forceEagerDeserialization;
- (BOOL)hasArrayForPropertyForKey:(id)arg1;
- (void)setTopLevelProperty:(id)arg1 forKey:(id)arg2;
- (void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(int)arg3 withPrefixes:(id)arg4;
- (id)_dict;
- (id)topLevelPropertyForKey:(id)arg1;
- (void)_deserializeFromPlistData;
- (id)_initWithMutableDictionary:(id)arg1;
- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3;
- (void)setRefId:(id)arg1;
- (id)refId;
- (void)setAceId:(id)arg1;
- (id)aceId;
- (id)encodedClassName;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)dict;
- (id)plistData;
- (id)init;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)groupIdentifier;
- (id)properties;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
