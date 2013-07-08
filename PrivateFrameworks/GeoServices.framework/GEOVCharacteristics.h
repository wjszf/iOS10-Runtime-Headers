/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOVCharacteristics : PBCodable  {
    NSMutableArray *_pointCharacteristics;
}

@property(retain) NSMutableArray * pointCharacteristics;


- (id)pointCharacteristics;
- (id)pointCharacteristicAtIndex:(unsigned int)arg1;
- (void)clearPointCharacteristics;
- (unsigned int)pointCharacteristicsCount;
- (void)addPointCharacteristic:(id)arg1;
- (void)setPointCharacteristics:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
