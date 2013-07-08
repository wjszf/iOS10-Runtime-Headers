/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSExternalRefCountedData : NSObject  {
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st { 
        unsigned int _invalidToOnes : 1; 
        unsigned int _hasTemporaryID : 1; 
        unsigned int _backgroundDealloc : 1; 
        unsigned int _reservedFlags : 1; 
        unsigned int _virtualfk_count : 14; 
        unsigned int _ordkey_count : 14; 
    } _externalRefFlags;
    id *_toManyMap;
    double _birth;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setAncillaryOrderKeys:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (id)ancillaryOrderKeysForProperty:(id)arg1;
- (void)setRelatedObjectIDs:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (double)timestampForProperty:(id)arg1;
- (id)relatedObjectIDsForProperty:(id)arg1;
- (void)updateMissingRelationshipCachesFromOriginal:(id)arg1;
- (void)releaseRelationshipCaches;
- (void)copyRelationshipCachesFrom:(id)arg1;
- (void)incrementExternalReferenceCount:(int)arg1;
- (int)externalReferenceCount;
- (int)decrementRefCount;
- (void)incrementRefCount;
- (double)timestamp;
- (id)initWithOptions:(unsigned int)arg1 andTimestamp:(double)arg2;
- (void)_initializeRelationshipCaches;
- (id)objectID;
- (void)setTimestamp:(double)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned int)options;

@end
