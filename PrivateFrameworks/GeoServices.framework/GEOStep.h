/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEONameInfo, NSString, NSMutableArray;

@interface GEOStep : PBCodable  {
    struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; } *_laneGuidances;
    unsigned int _laneGuidancesCount;
    unsigned int _laneGuidancesSpace;
    struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } *_junctionElements;
    unsigned int _junctionElementsCount;
    unsigned int _junctionElementsSpace;
    unsigned int _distance;
    GEONameInfo *_exitNumber;
    unsigned int _expectedTime;
    int _hintFirstAnnouncementZilchIndex;
    NSString *_instructions;
    int _junctionType;
    int _maneuverEndBasicIndex;
    int _maneuverEndZilchIndex;
    NSMutableArray *_maneuverNames;
    int _maneuverStartZilchIndex;
    int _maneuverType;
    NSString *_notice;
    int _overrideDrivingSide;
    int _overrideTransportType;
    NSMutableArray *_signposts;
    unsigned int _stepID;
    NSMutableArray *_substeps;
    BOOL _endsOnFwy;
    BOOL _toFreeway;
    BOOL _tollAhead;
    BOOL _tollPrior;
    struct { 
        unsigned int distance : 1; 
        unsigned int expectedTime : 1; 
        unsigned int hintFirstAnnouncementZilchIndex : 1; 
        unsigned int junctionType : 1; 
        unsigned int maneuverEndBasicIndex : 1; 
        unsigned int maneuverEndZilchIndex : 1; 
        unsigned int maneuverStartZilchIndex : 1; 
        unsigned int maneuverType : 1; 
        unsigned int overrideDrivingSide : 1; 
        unsigned int overrideTransportType : 1; 
        unsigned int stepID : 1; 
        unsigned int endsOnFwy : 1; 
        unsigned int toFreeway : 1; 
        unsigned int tollAhead : 1; 
        unsigned int tollPrior : 1; 
    } _has;
}

@property(readonly) unsigned int maneuverEndIndex;
@property(readonly) unsigned int maneuverStartIndex;
@property(readonly) BOOL hasHintFirstAnnouncementIndex;
@property(readonly) int hintFirstAnnouncementIndex;
@property BOOL hasStepID;
@property unsigned int stepID;
@property BOOL hasManeuverEndBasicIndex;
@property int maneuverEndBasicIndex;
@property BOOL hasManeuverStartZilchIndex;
@property int maneuverStartZilchIndex;
@property BOOL hasManeuverEndZilchIndex;
@property int maneuverEndZilchIndex;
@property BOOL hasDistance;
@property unsigned int distance;
@property BOOL hasExpectedTime;
@property unsigned int expectedTime;
@property BOOL hasManeuverType;
@property int maneuverType;
@property(retain) NSMutableArray * maneuverNames;
@property(readonly) unsigned int laneGuidancesCount;
@property(readonly) struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; }* laneGuidances;
@property BOOL hasJunctionType;
@property int junctionType;
@property(readonly) unsigned int junctionElementsCount;
@property(readonly) struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }* junctionElements;
@property(retain) NSMutableArray * signposts;
@property BOOL hasHintFirstAnnouncementZilchIndex;
@property int hintFirstAnnouncementZilchIndex;
@property BOOL hasOverrideTransportType;
@property int overrideTransportType;
@property BOOL hasOverrideDrivingSide;
@property int overrideDrivingSide;
@property(readonly) BOOL hasExitNumber;
@property(retain) GEONameInfo * exitNumber;
@property BOOL hasTollPrior;
@property BOOL tollPrior;
@property BOOL hasTollAhead;
@property BOOL tollAhead;
@property BOOL hasEndsOnFwy;
@property BOOL endsOnFwy;
@property(retain) NSMutableArray * substeps;
@property BOOL hasToFreeway;
@property BOOL toFreeway;
@property(readonly) BOOL hasInstructions;
@property(retain) NSString * instructions;
@property(readonly) BOOL hasNotice;
@property(retain) NSString * notice;


- (BOOL)maneuverIsHighwayExit;
- (void)shieldInfo:(id)arg1;
- (id)intersectionNameInfo;
- (int)hintFirstAnnouncementIndex;
- (BOOL)hasHintFirstAnnouncementIndex;
- (id)firstNameInfo;
- (id)maneuverDescription;
- (unsigned int)maneuverEndIndex;
- (unsigned int)maneuverStartIndex;
- (id)substeps;
- (id)signposts;
- (id)maneuverNames;
- (void)setHasToFreeway:(BOOL)arg1;
- (void)setHasEndsOnFwy:(BOOL)arg1;
- (void)setHasTollAhead:(BOOL)arg1;
- (void)setHasTollPrior:(BOOL)arg1;
- (void)setHasOverrideDrivingSide:(BOOL)arg1;
- (void)setHasOverrideTransportType:(BOOL)arg1;
- (void)setHasHintFirstAnnouncementZilchIndex:(BOOL)arg1;
- (void)setJunctionElements:(struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned int)arg2;
- (struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)junctionElements;
- (void)setHasJunctionType:(BOOL)arg1;
- (void)setLaneGuidances:(struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; }*)arg1 count:(unsigned int)arg2;
- (struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; }*)laneGuidances;
- (void)setHasManeuverType:(BOOL)arg1;
- (void)setHasManeuverEndZilchIndex:(BOOL)arg1;
- (void)setHasManeuverStartZilchIndex:(BOOL)arg1;
- (void)setHasManeuverEndBasicIndex:(BOOL)arg1;
- (void)setHasStepID:(BOOL)arg1;
- (BOOL)hasInstructions;
- (void)setToFreeway:(BOOL)arg1;
- (BOOL)toFreeway;
- (BOOL)hasToFreeway;
- (id)substepsAtIndex:(unsigned int)arg1;
- (void)clearSubsteps;
- (unsigned int)substepsCount;
- (void)setEndsOnFwy:(BOOL)arg1;
- (BOOL)endsOnFwy;
- (BOOL)hasEndsOnFwy;
- (void)setTollAhead:(BOOL)arg1;
- (BOOL)tollAhead;
- (BOOL)hasTollAhead;
- (void)setTollPrior:(BOOL)arg1;
- (BOOL)tollPrior;
- (BOOL)hasTollPrior;
- (id)exitNumber;
- (BOOL)hasExitNumber;
- (void)setOverrideDrivingSide:(int)arg1;
- (int)overrideDrivingSide;
- (BOOL)hasOverrideDrivingSide;
- (void)setOverrideTransportType:(int)arg1;
- (int)overrideTransportType;
- (BOOL)hasOverrideTransportType;
- (void)setHintFirstAnnouncementZilchIndex:(int)arg1;
- (int)hintFirstAnnouncementZilchIndex;
- (BOOL)hasHintFirstAnnouncementZilchIndex;
- (id)signpostAtIndex:(unsigned int)arg1;
- (void)clearSignposts;
- (unsigned int)signpostsCount;
- (void)addJunctionElement:(struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (struct { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })junctionElementAtIndex:(unsigned int)arg1;
- (unsigned int)junctionElementsCount;
- (void)setJunctionType:(int)arg1;
- (int)junctionType;
- (BOOL)hasJunctionType;
- (void)addLaneGuidance:(struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; })arg1;
- (struct { int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; int x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; } x7; })laneGuidanceAtIndex:(unsigned int)arg1;
- (unsigned int)laneGuidancesCount;
- (id)maneuverNameAtIndex:(unsigned int)arg1;
- (void)clearManeuverNames;
- (unsigned int)maneuverNamesCount;
- (void)setManeuverType:(int)arg1;
- (int)maneuverType;
- (BOOL)hasManeuverType;
- (void)setManeuverEndZilchIndex:(int)arg1;
- (int)maneuverEndZilchIndex;
- (BOOL)hasManeuverEndZilchIndex;
- (void)setManeuverStartZilchIndex:(int)arg1;
- (int)maneuverStartZilchIndex;
- (BOOL)hasManeuverStartZilchIndex;
- (void)setManeuverEndBasicIndex:(int)arg1;
- (int)maneuverEndBasicIndex;
- (BOOL)hasManeuverEndBasicIndex;
- (void)setStepID:(unsigned int)arg1;
- (unsigned int)stepID;
- (BOOL)hasStepID;
- (void)addSubsteps:(id)arg1;
- (void)addSignpost:(id)arg1;
- (void)addManeuverName:(id)arg1;
- (void)setSubsteps:(id)arg1;
- (void)setExitNumber:(id)arg1;
- (void)setSignposts:(id)arg1;
- (void)clearJunctionElements;
- (void)clearLaneGuidances;
- (void)setManeuverNames:(id)arg1;
- (void)setHasExpectedTime:(BOOL)arg1;
- (void)setHasDistance:(BOOL)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (unsigned int)expectedTime;
- (BOOL)hasExpectedTime;
- (void)setDistance:(unsigned int)arg1;
- (BOOL)hasDistance;
- (id)notice;
- (BOOL)hasNotice;
- (void)setNotice:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setInstructions:(id)arg1;
- (id)instructions;
- (unsigned int)distance;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
