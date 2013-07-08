/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, GEOWaypoint;

@interface GEOETARequest : PBRequest  {
    struct { 
        double _time; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    } _timepoint;
    NSMutableArray *_destinations;
    GEOWaypoint *_origin;
    NSMutableArray *_serviceTags;
    int _transportType;
    BOOL _includeHistoricTravelTime;
    struct { 
        unsigned int timepoint : 1; 
        unsigned int transportType : 1; 
        unsigned int includeHistoricTravelTime : 1; 
    } _has;
}

@property BOOL hasTransportType;
@property int transportType;
@property BOOL hasTimepoint;
@property struct { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } timepoint;
@property(readonly) BOOL hasOrigin;
@property(retain) GEOWaypoint * origin;
@property(retain) NSMutableArray * destinations;
@property BOOL hasIncludeHistoricTravelTime;
@property BOOL includeHistoricTravelTime;
@property(retain) NSMutableArray * serviceTags;


- (id)destinations;
- (void)setHasIncludeHistoricTravelTime:(BOOL)arg1;
- (void)setHasTimepoint:(BOOL)arg1;
- (void)setIncludeHistoricTravelTime:(BOOL)arg1;
- (BOOL)includeHistoricTravelTime;
- (BOOL)hasIncludeHistoricTravelTime;
- (id)destinationAtIndex:(unsigned int)arg1;
- (void)clearDestinations;
- (unsigned int)destinationsCount;
- (BOOL)hasOrigin;
- (void)setTimepoint:(struct { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timepoint;
- (BOOL)hasTimepoint;
- (void)addDestination:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (BOOL)hasTransportType;
- (id)serviceTags;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (void)clearServiceTags;
- (unsigned int)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setOrigin:(id)arg1;
- (id)origin;
- (id)dictionaryRepresentation;

@end
