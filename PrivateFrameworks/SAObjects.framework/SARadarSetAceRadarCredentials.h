/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARadarSetAceRadarCredentials : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *originatorUsername;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setAceRadarCredentials;
+ (id)setAceRadarCredentialsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originatorUsername;
- (void)setOriginatorUsername:(id)arg1;

@end