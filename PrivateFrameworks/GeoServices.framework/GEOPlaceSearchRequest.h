/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, GEOBusinessOptions, GEOLatLng, GEOLocation, GEOSuggestionsOptions, NSMutableArray, GEOAddress, NSString, GEOMapRegion, GEOClientCapabilities, GEOIndexQueryNode;

@interface GEOPlaceSearchRequest : PBRequest  {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionGUID;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _additionalPlaceTypes;
    struct { 
        unsigned long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _businessIDs;
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _placeIDs;
    struct { 
        int _beginIndex; 
        int _endIndex; 
        int _stringType; 
    } _searchContextSubstring;
    struct { int x1; int x2; int x3; } *_searchSubstrings;
    unsigned int _searchSubstringsCount;
    unsigned int _searchSubstringsSpace;
    double _distanceTraveled;
    long long _geoId;
    unsigned long long _intersectingGeoId;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    GEOAddress *_address;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceTimeZone;
    NSMutableArray *_filterByBusinessCategorys;
    NSMutableArray *_filterByBusinessTelephones;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    int _knownAccuracy;
    GEOLatLng *_knownLocation;
    int _localSearchProviderID;
    GEOLocation *_location;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    NSString *_phoneticLocaleIdentifier;
    int _placeTypeLimit;
    GEOAddress *_preserveFields;
    int _resultOffset;
    NSString *_search;
    NSString *_searchContext;
    int _searchSource;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    int _sessionID;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    int _transportTypeForTravelTimes;
    NSData *_zilchPoints;
    BOOL _allowABTestResponse;
    BOOL _excludeAddressInResults;
    BOOL _includeBusinessCategories;
    BOOL _includeBusinessRating;
    BOOL _includeEntryPoints;
    BOOL _includeFeatureSets;
    BOOL _includeGeoId;
    BOOL _includeMatchedToken;
    BOOL _includePhonetics;
    BOOL _includeQuads;
    BOOL _includeRevgeoRequestTemplate;
    BOOL _includeSpokenNames;
    BOOL _includeStatusCodeInfo;
    BOOL _includeSuggestionsOnly;
    BOOL _includeTravelTime;
    BOOL _includeUnmatchedStrings;
    BOOL _isFromAPI;
    BOOL _isStrictMapRegion;
    BOOL _structuredSearch;
    BOOL _suppressResultsRequiringAttribution;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int searchContextSubstring : 1; 
        unsigned int distanceTraveled : 1; 
        unsigned int geoId : 1; 
        unsigned int intersectingGeoId : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int timestamp : 1; 
        unsigned int businessSortOrder : 1; 
        unsigned int knownAccuracy : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int maxBusinessReviews : 1; 
        unsigned int maxResults : 1; 
        unsigned int placeTypeLimit : 1; 
        unsigned int resultOffset : 1; 
        unsigned int searchSource : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int sessionID : 1; 
        unsigned int transportTypeForTravelTimes : 1; 
        unsigned int allowABTestResponse : 1; 
        unsigned int excludeAddressInResults : 1; 
        unsigned int includeBusinessCategories : 1; 
        unsigned int includeBusinessRating : 1; 
        unsigned int includeEntryPoints : 1; 
        unsigned int includeFeatureSets : 1; 
        unsigned int includeGeoId : 1; 
        unsigned int includeMatchedToken : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeQuads : 1; 
        unsigned int includeRevgeoRequestTemplate : 1; 
        unsigned int includeSpokenNames : 1; 
        unsigned int includeStatusCodeInfo : 1; 
        unsigned int includeSuggestionsOnly : 1; 
        unsigned int includeTravelTime : 1; 
        unsigned int includeUnmatchedStrings : 1; 
        unsigned int isFromAPI : 1; 
        unsigned int isStrictMapRegion : 1; 
        unsigned int structuredSearch : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    } _has;
}

@property(readonly) unsigned int placeIDsCount;
@property(readonly) long long* placeIDs;
@property(readonly) unsigned int businessIDsCount;
@property(readonly) unsigned long long* businessIDs;
@property(readonly) BOOL hasAddress;
@property(retain) GEOAddress * address;
@property(readonly) BOOL hasLocation;
@property(retain) GEOLocation * location;
@property(readonly) BOOL hasSearch;
@property(retain) NSString * search;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) unsigned int additionalPlaceTypesCount;
@property(readonly) int* additionalPlaceTypes;
@property BOOL hasIncludePhonetics;
@property BOOL includePhonetics;
@property BOOL hasMaxResults;
@property int maxResults;
@property BOOL hasResultOffset;
@property int resultOffset;
@property BOOL hasSessionID;
@property int sessionID;
@property BOOL hasSessionGUID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property BOOL hasBusinessSortOrder;
@property int businessSortOrder;
@property BOOL hasIncludeBusinessRating;
@property BOOL includeBusinessRating;
@property BOOL hasIncludeBusinessCategories;
@property BOOL includeBusinessCategories;
@property BOOL hasMaxBusinessReviews;
@property int maxBusinessReviews;
@property(retain) NSMutableArray * filterByBusinessCategorys;
@property BOOL hasIsStrictMapRegion;
@property BOOL isStrictMapRegion;
@property BOOL hasTimestamp;
@property double timestamp;
@property(readonly) BOOL hasZilchPoints;
@property(retain) NSData * zilchPoints;
@property BOOL hasIncludeEntryPoints;
@property BOOL includeEntryPoints;
@property(readonly) BOOL hasBusinessOptions;
@property(retain) GEOBusinessOptions * businessOptions;
@property BOOL hasLocalSearchProviderID;
@property int localSearchProviderID;
@property BOOL hasIncludeSuggestionsOnly;
@property BOOL includeSuggestionsOnly;
@property BOOL hasStructuredSearch;
@property BOOL structuredSearch;
@property BOOL hasAllowABTestResponse;
@property BOOL allowABTestResponse;
@property(readonly) BOOL hasSuggestionsPrefix;
@property(retain) NSString * suggestionsPrefix;
@property(readonly) BOOL hasDeviceCountryCode;
@property(retain) NSString * deviceCountryCode;
@property(readonly) BOOL hasDeviceLocation;
@property(retain) GEOLatLng * deviceLocation;
@property(readonly) BOOL hasInputLanguage;
@property(retain) NSString * inputLanguage;
@property(readonly) BOOL hasPhoneticLocaleIdentifier;
@property(retain) NSString * phoneticLocaleIdentifier;
@property BOOL hasSequenceNumber;
@property int sequenceNumber;
@property BOOL hasSuppressResultsRequiringAttribution;
@property BOOL suppressResultsRequiringAttribution;
@property BOOL hasIsFromAPI;
@property BOOL isFromAPI;
@property(retain) NSMutableArray * filterByBusinessTelephones;
@property BOOL hasTimeSinceMapEnteredForeground;
@property double timeSinceMapEnteredForeground;
@property BOOL hasTimeSinceMapViewportChanged;
@property double timeSinceMapViewportChanged;
@property BOOL hasDistanceTraveled;
@property double distanceTraveled;
@property BOOL hasIncludeSpokenNames;
@property BOOL includeSpokenNames;
@property(readonly) BOOL hasDeviceTimeZone;
@property(retain) NSString * deviceTimeZone;
@property(readonly) BOOL hasClientCapabilities;
@property(retain) GEOClientCapabilities * clientCapabilities;
@property BOOL hasIncludeTravelTime;
@property BOOL includeTravelTime;
@property BOOL hasTransportTypeForTravelTimes;
@property int transportTypeForTravelTimes;
@property(readonly) BOOL hasSuggestionsOptions;
@property(retain) GEOSuggestionsOptions * suggestionsOptions;
@property BOOL hasPlaceTypeLimit;
@property int placeTypeLimit;
@property BOOL hasGeoId;
@property long long geoId;
@property BOOL hasIncludeQuads;
@property BOOL includeQuads;
@property BOOL hasExcludeAddressInResults;
@property BOOL excludeAddressInResults;
@property(readonly) unsigned int searchSubstringsCount;
@property(readonly) struct { int x1; int x2; int x3; }* searchSubstrings;
@property BOOL hasIncludeGeoId;
@property BOOL includeGeoId;
@property(readonly) BOOL hasSearchContext;
@property(retain) NSString * searchContext;
@property BOOL hasSearchContextSubstring;
@property struct { int x1; int x2; int x3; } searchContextSubstring;
@property BOOL hasIncludeStatusCodeInfo;
@property BOOL includeStatusCodeInfo;
@property(readonly) BOOL hasPreserveFields;
@property(retain) GEOAddress * preserveFields;
@property BOOL hasIncludeUnmatchedStrings;
@property BOOL includeUnmatchedStrings;
@property(readonly) BOOL hasIndexFilter;
@property(retain) GEOIndexQueryNode * indexFilter;
@property BOOL hasIncludeFeatureSets;
@property BOOL includeFeatureSets;
@property(retain) NSMutableArray * serviceTags;
@property BOOL hasIntersectingGeoId;
@property unsigned long long intersectingGeoId;
@property(readonly) BOOL hasKnownLocation;
@property(retain) GEOLatLng * knownLocation;
@property BOOL hasKnownAccuracy;
@property int knownAccuracy;
@property BOOL hasIncludeRevgeoRequestTemplate;
@property BOOL includeRevgeoRequestTemplate;
@property BOOL hasIncludeMatchedToken;
@property BOOL includeMatchedToken;
@property BOOL hasSearchSource;
@property int searchSource;


- (id)filterByBusinessTelephones;
- (id)filterByBusinessCategorys;
- (void)setHasSearchSource:(BOOL)arg1;
- (void)setHasIncludeMatchedToken:(BOOL)arg1;
- (void)setHasIncludeRevgeoRequestTemplate:(BOOL)arg1;
- (void)setHasKnownAccuracy:(BOOL)arg1;
- (void)setHasIntersectingGeoId:(BOOL)arg1;
- (void)setHasIncludeFeatureSets:(BOOL)arg1;
- (void)setHasIncludeUnmatchedStrings:(BOOL)arg1;
- (void)setHasIncludeStatusCodeInfo:(BOOL)arg1;
- (void)setHasSearchContextSubstring:(BOOL)arg1;
- (void)setHasIncludeGeoId:(BOOL)arg1;
- (void)setSearchSubstrings:(struct { int x1; int x2; int x3; }*)arg1 count:(unsigned int)arg2;
- (struct { int x1; int x2; int x3; }*)searchSubstrings;
- (void)setHasExcludeAddressInResults:(BOOL)arg1;
- (void)setHasIncludeQuads:(BOOL)arg1;
- (void)setHasPlaceTypeLimit:(BOOL)arg1;
- (void)setHasTransportTypeForTravelTimes:(BOOL)arg1;
- (void)setHasIncludeTravelTime:(BOOL)arg1;
- (void)setHasIncludeSpokenNames:(BOOL)arg1;
- (void)setHasDistanceTraveled:(BOOL)arg1;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1;
- (void)setHasIsFromAPI:(BOOL)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasAllowABTestResponse:(BOOL)arg1;
- (void)setHasStructuredSearch:(BOOL)arg1;
- (void)setHasIncludeSuggestionsOnly:(BOOL)arg1;
- (void)setHasIncludeEntryPoints:(BOOL)arg1;
- (void)setHasIsStrictMapRegion:(BOOL)arg1;
- (void)setHasMaxBusinessReviews:(BOOL)arg1;
- (void)setHasIncludeBusinessCategories:(BOOL)arg1;
- (void)setHasIncludeBusinessRating:(BOOL)arg1;
- (void)setHasBusinessSortOrder:(BOOL)arg1;
- (void)setHasSessionGUID:(BOOL)arg1;
- (void)setHasResultOffset:(BOOL)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned int)arg2;
- (int*)additionalPlaceTypes;
- (void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned int)arg2;
- (unsigned long long*)businessIDs;
- (void)setPlaceIDs:(long long*)arg1 count:(unsigned int)arg2;
- (long long*)placeIDs;
- (void)setSearchSource:(int)arg1;
- (int)searchSource;
- (BOOL)hasSearchSource;
- (void)setIncludeMatchedToken:(BOOL)arg1;
- (BOOL)includeMatchedToken;
- (BOOL)hasIncludeMatchedToken;
- (void)setIncludeRevgeoRequestTemplate:(BOOL)arg1;
- (BOOL)includeRevgeoRequestTemplate;
- (BOOL)hasIncludeRevgeoRequestTemplate;
- (void)setKnownAccuracy:(int)arg1;
- (int)knownAccuracy;
- (BOOL)hasKnownAccuracy;
- (id)knownLocation;
- (BOOL)hasKnownLocation;
- (void)setIntersectingGeoId:(unsigned long long)arg1;
- (unsigned long long)intersectingGeoId;
- (BOOL)hasIntersectingGeoId;
- (void)setIncludeFeatureSets:(BOOL)arg1;
- (BOOL)includeFeatureSets;
- (BOOL)hasIncludeFeatureSets;
- (id)indexFilter;
- (BOOL)hasIndexFilter;
- (void)setIncludeUnmatchedStrings:(BOOL)arg1;
- (BOOL)includeUnmatchedStrings;
- (BOOL)hasIncludeUnmatchedStrings;
- (id)preserveFields;
- (BOOL)hasPreserveFields;
- (void)setIncludeStatusCodeInfo:(BOOL)arg1;
- (BOOL)includeStatusCodeInfo;
- (BOOL)hasIncludeStatusCodeInfo;
- (void)setSearchContextSubstring:(struct { int x1; int x2; int x3; })arg1;
- (struct { int x1; int x2; int x3; })searchContextSubstring;
- (BOOL)hasSearchContextSubstring;
- (id)searchContext;
- (BOOL)hasSearchContext;
- (void)setIncludeGeoId:(BOOL)arg1;
- (BOOL)includeGeoId;
- (BOOL)hasIncludeGeoId;
- (void)addSearchSubstring:(struct { int x1; int x2; int x3; })arg1;
- (struct { int x1; int x2; int x3; })searchSubstringAtIndex:(unsigned int)arg1;
- (unsigned int)searchSubstringsCount;
- (void)setExcludeAddressInResults:(BOOL)arg1;
- (BOOL)excludeAddressInResults;
- (BOOL)hasExcludeAddressInResults;
- (void)setIncludeQuads:(BOOL)arg1;
- (BOOL)includeQuads;
- (BOOL)hasIncludeQuads;
- (void)setPlaceTypeLimit:(int)arg1;
- (int)placeTypeLimit;
- (BOOL)hasPlaceTypeLimit;
- (id)suggestionsOptions;
- (BOOL)hasSuggestionsOptions;
- (void)setTransportTypeForTravelTimes:(int)arg1;
- (int)transportTypeForTravelTimes;
- (BOOL)hasTransportTypeForTravelTimes;
- (void)setIncludeTravelTime:(BOOL)arg1;
- (BOOL)includeTravelTime;
- (BOOL)hasIncludeTravelTime;
- (id)deviceTimeZone;
- (BOOL)hasDeviceTimeZone;
- (void)setIncludeSpokenNames:(BOOL)arg1;
- (BOOL)includeSpokenNames;
- (BOOL)hasIncludeSpokenNames;
- (void)setDistanceTraveled:(double)arg1;
- (double)distanceTraveled;
- (BOOL)hasDistanceTraveled;
- (void)setTimeSinceMapViewportChanged:(double)arg1;
- (double)timeSinceMapViewportChanged;
- (BOOL)hasTimeSinceMapViewportChanged;
- (void)setTimeSinceMapEnteredForeground:(double)arg1;
- (double)timeSinceMapEnteredForeground;
- (BOOL)hasTimeSinceMapEnteredForeground;
- (id)filterByBusinessTelephoneAtIndex:(unsigned int)arg1;
- (void)clearFilterByBusinessTelephones;
- (unsigned int)filterByBusinessTelephonesCount;
- (void)setIsFromAPI:(BOOL)arg1;
- (BOOL)isFromAPI;
- (BOOL)hasIsFromAPI;
- (void)setSuppressResultsRequiringAttribution:(BOOL)arg1;
- (BOOL)suppressResultsRequiringAttribution;
- (BOOL)hasSuppressResultsRequiringAttribution;
- (BOOL)hasSequenceNumber;
- (id)phoneticLocaleIdentifier;
- (BOOL)hasPhoneticLocaleIdentifier;
- (id)inputLanguage;
- (BOOL)hasInputLanguage;
- (id)deviceLocation;
- (BOOL)hasDeviceLocation;
- (id)deviceCountryCode;
- (BOOL)hasDeviceCountryCode;
- (id)suggestionsPrefix;
- (BOOL)hasSuggestionsPrefix;
- (void)setAllowABTestResponse:(BOOL)arg1;
- (BOOL)allowABTestResponse;
- (BOOL)hasAllowABTestResponse;
- (void)setStructuredSearch:(BOOL)arg1;
- (BOOL)structuredSearch;
- (BOOL)hasStructuredSearch;
- (void)setIncludeSuggestionsOnly:(BOOL)arg1;
- (BOOL)includeSuggestionsOnly;
- (BOOL)hasIncludeSuggestionsOnly;
- (id)businessOptions;
- (BOOL)hasBusinessOptions;
- (void)setIncludeEntryPoints:(BOOL)arg1;
- (BOOL)includeEntryPoints;
- (BOOL)hasIncludeEntryPoints;
- (void)setIsStrictMapRegion:(BOOL)arg1;
- (BOOL)isStrictMapRegion;
- (BOOL)hasIsStrictMapRegion;
- (id)filterByBusinessCategoryAtIndex:(unsigned int)arg1;
- (void)clearFilterByBusinessCategorys;
- (unsigned int)filterByBusinessCategorysCount;
- (void)setMaxBusinessReviews:(int)arg1;
- (int)maxBusinessReviews;
- (BOOL)hasMaxBusinessReviews;
- (void)setIncludeBusinessCategories:(BOOL)arg1;
- (BOOL)includeBusinessCategories;
- (BOOL)hasIncludeBusinessCategories;
- (void)setIncludeBusinessRating:(BOOL)arg1;
- (BOOL)includeBusinessRating;
- (BOOL)hasIncludeBusinessRating;
- (void)setBusinessSortOrder:(int)arg1;
- (int)businessSortOrder;
- (BOOL)hasBusinessSortOrder;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (BOOL)hasSessionGUID;
- (void)setResultOffset:(int)arg1;
- (int)resultOffset;
- (BOOL)hasResultOffset;
- (BOOL)hasMaxResults;
- (void)setIncludePhonetics:(BOOL)arg1;
- (BOOL)includePhonetics;
- (BOOL)hasIncludePhonetics;
- (void)addAdditionalPlaceType:(int)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned int)arg1;
- (void)clearAdditionalPlaceTypes;
- (unsigned int)additionalPlaceTypesCount;
- (BOOL)hasSearch;
- (BOOL)hasLocation;
- (unsigned long long)businessIDAtIndex:(unsigned int)arg1;
- (void)clearBusinessIDs;
- (unsigned int)businessIDsCount;
- (void)addPlaceID:(long long)arg1;
- (long long)placeIDAtIndex:(unsigned int)arg1;
- (void)clearPlaceIDs;
- (unsigned int)placeIDsCount;
- (void)addFilterByBusinessTelephone:(id)arg1;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)setKnownLocation:(id)arg1;
- (void)setIndexFilter:(id)arg1;
- (void)setPreserveFields:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)clearSearchSubstrings;
- (void)setSuggestionsOptions:(id)arg1;
- (void)setDeviceTimeZone:(id)arg1;
- (void)setFilterByBusinessTelephones:(id)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setSuggestionsPrefix:(id)arg1;
- (void)setBusinessOptions:(id)arg1;
- (void)setFilterByBusinessCategorys:(id)arg1;
- (void)setSearch:(id)arg1;
- (id)zilchPoints;
- (BOOL)hasZilchPoints;
- (void)setZilchPoints:(id)arg1;
- (void)setHasGeoId:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setGeoId:(long long)arg1;
- (long long)geoId;
- (BOOL)hasGeoId;
- (void)setLocalSearchProviderID:(int)arg1;
- (int)localSearchProviderID;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasAddress;
- (id)serviceTags;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (void)clearServiceTags;
- (unsigned int)serviceTagsCount;
- (id)clientCapabilities;
- (BOOL)hasClientCapabilities;
- (void)addServiceTag:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)initWithPlace:(id)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (void)setAddress:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (BOOL)hasSessionID;
- (id)mapRegion;
- (BOOL)hasMapRegion;
- (void)setMapRegion:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)setSessionID:(int)arg1;
- (int)sessionID;
- (id)location;
- (double)timestamp;
- (void)setMaxResults:(int)arg1;
- (int)maxResults;
- (int)sequenceNumber;
- (id)search;
- (void)setLocation:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setSequenceNumber:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)address;
- (void)_applyDeviceLocation;
- (void)_setCLClientLocation:(const struct { int x1; int x2; struct { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; int x14; double x15; int x16; struct { double x_17_1_1; double x_17_1_2; } x17; double x18; }*)arg1;

@end
