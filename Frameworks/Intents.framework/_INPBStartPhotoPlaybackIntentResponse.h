/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartPhotoPlaybackIntentResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int searchResultsCount : 1; 
    }  _has;
    int  _searchResultsCount;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSearchResultsCount;
@property (nonatomic) int searchResultsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchResultsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)searchResultsCount;
- (void)setHasSearchResultsCount:(bool)arg1;
- (void)setSearchResultsCount:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
