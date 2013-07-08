/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOUsageCollectionRequest : PBRequest  {
    NSMutableArray *_directionsFeedbackCollections;
    NSMutableArray *_mapsUsageFeedbackCollections;
    NSMutableArray *_placeSearchFeedbackCollections;
    NSMutableArray *_suggestionsFeedbackCollections;
    NSMutableArray *_transitAppLaunchFeedbackCollections;
    NSMutableArray *_usageCollections;
}

@property(retain) NSMutableArray * usageCollections;
@property(retain) NSMutableArray * directionsFeedbackCollections;
@property(retain) NSMutableArray * placeSearchFeedbackCollections;
@property(retain) NSMutableArray * transitAppLaunchFeedbackCollections;
@property(retain) NSMutableArray * mapsUsageFeedbackCollections;
@property(retain) NSMutableArray * suggestionsFeedbackCollections;


- (id)suggestionsFeedbackCollections;
- (id)mapsUsageFeedbackCollections;
- (id)transitAppLaunchFeedbackCollections;
- (id)placeSearchFeedbackCollections;
- (id)directionsFeedbackCollections;
- (id)usageCollections;
- (id)suggestionsFeedbackCollectionAtIndex:(unsigned int)arg1;
- (void)clearSuggestionsFeedbackCollections;
- (unsigned int)suggestionsFeedbackCollectionsCount;
- (id)mapsUsageFeedbackCollectionAtIndex:(unsigned int)arg1;
- (void)clearMapsUsageFeedbackCollections;
- (unsigned int)mapsUsageFeedbackCollectionsCount;
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned int)arg1;
- (void)clearTransitAppLaunchFeedbackCollections;
- (unsigned int)transitAppLaunchFeedbackCollectionsCount;
- (id)placeSearchFeedbackCollectionAtIndex:(unsigned int)arg1;
- (void)clearPlaceSearchFeedbackCollections;
- (unsigned int)placeSearchFeedbackCollectionsCount;
- (id)directionsFeedbackCollectionAtIndex:(unsigned int)arg1;
- (void)clearDirectionsFeedbackCollections;
- (unsigned int)directionsFeedbackCollectionsCount;
- (id)usageCollectionAtIndex:(unsigned int)arg1;
- (void)clearUsageCollections;
- (unsigned int)usageCollectionsCount;
- (void)addSuggestionsFeedbackCollection:(id)arg1;
- (void)addPlaceSearchFeedbackCollection:(id)arg1;
- (void)setSuggestionsFeedbackCollections:(id)arg1;
- (void)setMapsUsageFeedbackCollections:(id)arg1;
- (void)setTransitAppLaunchFeedbackCollections:(id)arg1;
- (void)setPlaceSearchFeedbackCollections:(id)arg1;
- (void)setDirectionsFeedbackCollections:(id)arg1;
- (void)setUsageCollections:(id)arg1;
- (void)addMapsUsageFeedbackCollection:(id)arg1;
- (void)addTransitAppLaunchFeedbackCollection:(id)arg1;
- (void)addDirectionsFeedbackCollection:(id)arg1;
- (void)addUsageCollection:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
