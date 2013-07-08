/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, GEOStructuredAddress;

@interface GEOAddress : PBCodable  {
    NSMutableArray *_formattedAddressLines;
    int _formattedAddressType;
    GEOStructuredAddress *_structuredAddress;
    struct { 
        unsigned int formattedAddressType : 1; 
    } _has;
}

@property(retain) NSMutableArray * formattedAddressLines;
@property(readonly) BOOL hasStructuredAddress;
@property(retain) GEOStructuredAddress * structuredAddress;
@property BOOL hasFormattedAddressType;
@property int formattedAddressType;


- (void)setHasFormattedAddressType:(BOOL)arg1;
- (void)setFormattedAddressType:(int)arg1;
- (int)formattedAddressType;
- (BOOL)hasFormattedAddressType;
- (id)formattedAddressLineAtIndex:(unsigned int)arg1;
- (void)clearFormattedAddressLines;
- (unsigned int)formattedAddressLinesCount;
- (void)addFormattedAddressLine:(id)arg1;
- (id)addressDictionary;
- (id)initWithAddressString:(id)arg1;
- (id)structuredAddress;
- (BOOL)hasStructuredAddress;
- (id)formattedAddressLines;
- (void)setStructuredAddress:(id)arg1;
- (void)setFormattedAddressLines:(id)arg1;
- (id)initWithAddressDictionary:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
