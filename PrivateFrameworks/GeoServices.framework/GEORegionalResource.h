/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEORegionalResource : PBCodable  {
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *_tileRanges;
    unsigned int _tileRangesCount;
    unsigned int _tileRangesSpace;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _validSubManifestVersions;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct { 
        unsigned int x : 1; 
        unsigned int y : 1; 
        unsigned int z : 1; 
    } _has;
}

@property BOOL hasX;
@property unsigned int x;
@property BOOL hasY;
@property unsigned int y;
@property BOOL hasZ;
@property unsigned int z;
@property(retain) NSMutableArray * icons;
@property(retain) NSMutableArray * attributions;
@property(retain) NSMutableArray * iconChecksums;
@property(readonly) unsigned int tileRangesCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }* tileRanges;
@property(readonly) unsigned int validSubManifestVersionsCount;
@property(readonly) unsigned int* validSubManifestVersions;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setValidSubManifestVersions:(unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int*)validSubManifestVersions;
- (void)setHasZ:(BOOL)arg1;
- (void)setHasY:(BOOL)arg1;
- (void)setHasX:(BOOL)arg1;
- (void)addValidSubManifestVersion:(unsigned int)arg1;
- (unsigned int)validSubManifestVersionAtIndex:(unsigned int)arg1;
- (void)clearValidSubManifestVersions;
- (unsigned int)validSubManifestVersionsCount;
- (void)addTileRange:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)clearTileRanges;
- (BOOL)hasZ;
- (BOOL)hasY;
- (BOOL)hasX;
- (void)setTileRanges:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned int)arg2;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)tileRanges;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })tileRangeAtIndex:(unsigned int)arg1;
- (unsigned int)tileRangesCount;
- (id)iconChecksums;
- (id)iconChecksumAtIndex:(unsigned int)arg1;
- (void)clearIconChecksums;
- (unsigned int)iconChecksumsCount;
- (id)iconAtIndex:(unsigned int)arg1;
- (void)clearIcons;
- (unsigned int)iconsCount;
- (void)addIconChecksum:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)setIconChecksums:(id)arg1;
- (id)attributions;
- (id)attributionAtIndex:(unsigned int)arg1;
- (void)clearAttributions;
- (unsigned int)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)icons;
- (void)setIcons:(id)arg1;
- (void)setZ:(unsigned int)arg1;
- (unsigned int)z;
- (void)setY:(unsigned int)arg1;
- (unsigned int)y;
- (void)setX:(unsigned int)arg1;
- (unsigned int)x;
- (id)dictionaryRepresentation;

@end