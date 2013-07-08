/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOSource : PBCodable  {
    NSString *_sourceId;
    NSString *_sourceName;
    NSString *_sourceVersion;
}

@property(retain) NSString * sourceName;
@property(retain) NSString * sourceId;
@property(readonly) BOOL hasSourceVersion;
@property(retain) NSString * sourceVersion;


- (BOOL)hasSourceVersion;
- (id)sourceId;
- (id)sourceName;
- (void)setSourceVersion:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setSourceName:(id)arg1;
- (id)sourceVersion;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
