/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEODirectionsRouteRequest, GEOClientETARequest, NSString, GEOQuickETARequest;

@interface GEOQuickETARequester : NSObject  {
    GEOQuickETARequest *_request;
    GEOClientETARequest *_simpleETARequest;
    GEODirectionsRouteRequest *_directionsETARequest;
    NSString *_loggingFacility;
}

@property(copy) NSString * loggingFacility;


- (void)setLoggingFacility:(id)arg1;
- (id)loggingFacility;
- (void)calculateETAWithHandler:(id)arg1;
- (void)_calculateRoutingETAWithHandler:(id)arg1;
- (void)_calculateSimpleETAWithHandler:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (id)initWithRequest:(id)arg1;

@end
