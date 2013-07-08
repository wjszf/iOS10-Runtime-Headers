/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebPreferences : NSObject <NSCoding> {
    struct WebPreferencesPrivate { struct RetainPtr<NSMutableDictionary> { struct NSMutableDictionary { Class x_1_2_1; } *x_1_1_1; } x1; struct RetainPtr<NSString> { struct NSString { Class x_1_2_1; } *x_2_1_1; } x2; BOOL x3; BOOL x4; unsigned int x5; id x6; } *_private;
}

+ (id)_IBCreatorID;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned int)arg1;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (unsigned long)_systemCFStringEncoding;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (id)standardPreferences;
+ (void)initialize;
+ (id)standardMailWebPreferencesForDisplayStyle:(int)arg1 regenerate:(BOOL)arg2;

- (void)setNotificationsEnabled:(BOOL)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(BOOL)arg1;
- (BOOL)hiddenPageCSSAnimationSuspensionEnabled;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(BOOL)arg1;
- (BOOL)hiddenPageDOMTimerThrottlingEnabled;
- (void)setPlugInSnapshottingEnabled:(BOOL)arg1;
- (BOOL)plugInSnapshottingEnabled;
- (int)storageBlockingPolicy;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setScreenFontSubstitutionEnabled:(BOOL)arg1;
- (BOOL)screenFontSubstitutionEnabled;
- (void)setDiagnosticLoggingEnabled:(BOOL)arg1;
- (BOOL)diagnosticLoggingEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setRequestAnimationFrameEnabled:(BOOL)arg1;
- (BOOL)requestAnimationFrameEnabled;
- (BOOL)shouldRespectImageOrientation;
- (void)setShouldRespectImageOrientation:(BOOL)arg1;
- (BOOL)regionBasedColumnsEnabled;
- (void)setRegionBasedColumnsEnabled:(BOOL)arg1;
- (BOOL)notificationsEnabled;
- (BOOL)shouldDisplayTextDescriptions;
- (void)setShouldDisplayTextDescriptions:(BOOL)arg1;
- (BOOL)shouldDisplayCaptions;
- (void)setShouldDisplayCaptions:(BOOL)arg1;
- (BOOL)shouldDisplaySubtitles;
- (void)setShouldDisplaySubtitles:(BOOL)arg1;
- (BOOL)wantsBalancedSetDefersLoadingBehavior;
- (void)setWantsBalancedSetDefersLoadingBehavior:(BOOL)arg1;
- (void)setBackspaceKeyNavigationEnabled:(BOOL)arg1;
- (void)_invalidateCachedPreferences;
- (void)setPageCacheSupportsPlugins:(BOOL)arg1;
- (BOOL)pageCacheSupportsPlugins;
- (void)setPictographFontFamily:(id)arg1;
- (id)pictographFontFamily;
- (void)setSeamlessIFramesEnabled:(BOOL)arg1;
- (BOOL)seamlessIFramesEnabled;
- (void)setMockScrollbarsEnabled:(BOOL)arg1;
- (BOOL)mockScrollbarsEnabled;
- (BOOL)mediaPlaybackAllowsInline;
- (BOOL)mediaPlaybackRequiresUserGesture;
- (id)networkInterfaceName;
- (void)setNetworkDataUsageTrackingEnabled:(bool)arg1;
- (BOOL)networkDataUsageTrackingEnabled;
- (unsigned int)audioSessionCategoryOverride;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)isHixie76WebSocketProtocolEnabled;
- (void)setHixie76WebSocketProtocolEnabled:(BOOL)arg1;
- (BOOL)isQTKitEnabled;
- (void)setQTKitEnabled:(BOOL)arg1;
- (BOOL)isAVFoundationEnabled;
- (void)setAVFoundationEnabled:(BOOL)arg1;
- (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)arg1;
- (BOOL)asynchronousSpellCheckingEnabled;
- (void)setAsynchronousSpellCheckingEnabled:(BOOL)arg1;
- (BOOL)fullScreenEnabled;
- (void)setFullScreenEnabled:(BOOL)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)willAddToWebView;
- (void)didRemoveFromWebView;
- (void)setUsePreHTML5ParserQuirks:(BOOL)arg1;
- (BOOL)usePreHTML5ParserQuirks;
- (void)setHyperlinkAuditingEnabled:(BOOL)arg1;
- (BOOL)hyperlinkAuditingEnabled;
- (void)setPaginateDuringLayoutEnabled:(BOOL)arg1;
- (BOOL)paginateDuringLayoutEnabled;
- (void)setSpatialNavigationEnabled:(BOOL)arg1;
- (BOOL)isSpatialNavigationEnabled;
- (void)setFrameFlatteningEnabled:(BOOL)arg1;
- (BOOL)isFrameFlatteningEnabled;
- (void)setDiskImageCacheMaximumCacheSize:(unsigned int)arg1;
- (unsigned int)diskImageCacheMaximumCacheSize;
- (void)setDiskImageCacheMinimumImageSize:(unsigned int)arg1;
- (unsigned int)diskImageCacheMinimumImageSize;
- (BOOL)diskImageCacheEnabled;
- (void)setAccelerated2dCanvasEnabled:(BOOL)arg1;
- (BOOL)accelerated2dCanvasEnabled;
- (void)setWebGLEnabled:(BOOL)arg1;
- (BOOL)webGLEnabled;
- (void)setWebAudioEnabled:(BOOL)arg1;
- (BOOL)webAudioEnabled;
- (void)setShowRepaintCounter:(BOOL)arg1;
- (BOOL)showRepaintCounter;
- (void)setShowDebugBorders:(BOOL)arg1;
- (BOOL)showDebugBorders;
- (void)setCSSGridLayoutEnabled:(BOOL)arg1;
- (BOOL)cssGridLayoutEnabled;
- (void)setCSSCompositingEnabled:(BOOL)arg1;
- (BOOL)cssCompositingEnabled;
- (void)setCSSRegionsEnabled:(BOOL)arg1;
- (BOOL)cssRegionsEnabled;
- (void)setCSSCustomFilterEnabled:(BOOL)arg1;
- (BOOL)cssCustomFilterEnabled;
- (void)setAcceleratedCompositingEnabled:(BOOL)arg1;
- (BOOL)acceleratedCompositingEnabled;
- (void)setCanvasUsesAcceleratedDrawing:(BOOL)arg1;
- (BOOL)canvasUsesAcceleratedDrawing;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (BOOL)acceleratedDrawingEnabled;
- (void)_setForceFTPDirectoryListings:(BOOL)arg1;
- (BOOL)_forceFTPDirectoryListings;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (id)_ftpDirectoryTemplatePath;
- (id)_localStorageDatabasePath;
- (void)setDOMPasteAllowed:(BOOL)arg1;
- (BOOL)isDOMPasteAllowed;
- (void)_postPreferencesChangedAPINotification;
- (void)setExperimentalNotificationsEnabled:(BOOL)arg1;
- (BOOL)experimentalNotificationsEnabled;
- (BOOL)localStorageEnabled;
- (void)setStorageTrackerEnabled:(BOOL)arg1;
- (BOOL)storageTrackerEnabled;
- (BOOL)databasesEnabled;
- (void)_setUseSiteSpecificSpoofing:(BOOL)arg1;
- (BOOL)_useSiteSpecificSpoofing;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (int)textDirectionSubmenuInclusionBehavior;
- (void)setEditableLinkBehavior:(int)arg1;
- (int)editableLinkBehavior;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (long long)applicationCacheDefaultOriginQuota;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (long long)applicationCacheTotalQuota;
- (float)_passwordEchoDuration;
- (BOOL)_allowPasswordEcho;
- (int)_interpolationQuality;
- (void)_setInterpolationQuality:(int)arg1;
- (BOOL)_allowCompositingLayerVisualDegradation;
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)arg1;
- (BOOL)_alwaysUseAcceleratedOverflowScroll;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)arg1;
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)arg1;
- (BOOL)_allowMultiElementImplicitFormSubmission;
- (BOOL)_alwaysUseBaselineOfPrimaryFont;
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)arg1;
- (int)_NSURLDiskCacheSize;
- (void)_setNSURLDiskCacheSize:(int)arg1;
- (int)_NSURLMemoryCacheSize;
- (void)_setNSURLMemoryCacheSize:(int)arg1;
- (int)_objectCacheSize;
- (void)_setObjectCacheSize:(int)arg1;
- (int)_pageCacheSize;
- (void)_setPageCacheSize:(int)arg1;
- (float)_maxParseDuration;
- (void)_setMaxParseDuration:(float)arg1;
- (int)_layoutInterval;
- (void)_setLayoutInterval:(int)arg1;
- (float)_minimumZoomFontSize;
- (BOOL)_telephoneNumberParsingEnabled;
- (void)_setTelephoneNumberParsingEnabled:(BOOL)arg1;
- (void)_setStandalone:(BOOL)arg1;
- (BOOL)_standalone;
- (unsigned long)_maximumImageSize;
- (double)_backForwardCacheExpirationInterval;
- (void)setAllowFileAccessFromFileURLs:(BOOL)arg1;
- (BOOL)allowFileAccessFromFileURLs;
- (void)setAllowUniversalAccessFromFileURLs:(BOOL)arg1;
- (BOOL)allowUniversalAccessFromFileURLs;
- (void)setWebSecurityEnabled:(BOOL)arg1;
- (BOOL)isWebSecurityEnabled;
- (void)setUsesEncodingDetector:(BOOL)arg1;
- (BOOL)usesEncodingDetector;
- (BOOL)shrinksStandaloneImagesToFit;
- (void)setXSSAuditorEnabled:(BOOL)arg1;
- (BOOL)isXSSAuditorEnabled;
- (void)setJavaScriptCanAccessClipboard:(BOOL)arg1;
- (BOOL)javaScriptCanAccessClipboard;
- (void)setZoomsTextOnly:(BOOL)arg1;
- (BOOL)zoomsTextOnly;
- (BOOL)offlineWebApplicationCacheEnabled;
- (void)setLocalFileContentSniffingEnabled:(BOOL)arg1;
- (BOOL)localFileContentSniffingEnabled;
- (void)setWebArchiveDebugModeEnabled:(BOOL)arg1;
- (BOOL)webArchiveDebugModeEnabled;
- (void)setApplicationChromeModeEnabled:(BOOL)arg1;
- (BOOL)applicationChromeModeEnabled;
- (BOOL)authorAndUserStylesEnabled;
- (void)setDeveloperExtrasEnabled:(BOOL)arg1;
- (BOOL)javaScriptExperimentsEnabled;
- (void)setJavaScriptExperimentsEnabled:(BOOL)arg1;
- (void)setDNSPrefetchingEnabled:(BOOL)arg1;
- (BOOL)isDNSPrefetchingEnabled;
- (BOOL)suppressesIncrementalRendering;
- (BOOL)privateBrowsingEnabled;
- (void)setPrivateBrowsingEnabled:(BOOL)arg1;
- (BOOL)autosaves;
- (BOOL)loadsImagesAutomatically;
- (BOOL)allowsAnimatedImageLooping;
- (BOOL)allowsAnimatedImages;
- (BOOL)javaScriptCanOpenWindowsAutomatically;
- (BOOL)isJavaScriptEnabled;
- (BOOL)isJavaEnabled;
- (void)setUserStyleSheetLocation:(id)arg1;
- (id)userStyleSheetLocation;
- (BOOL)userStyleSheetEnabled;
- (void)setDefaultTextEncodingName:(id)arg1;
- (id)defaultTextEncodingName;
- (int)minimumLogicalFontSize;
- (int)defaultFixedFontSize;
- (void)setFantasyFontFamily:(id)arg1;
- (id)fantasyFontFamily;
- (void)setCursiveFontFamily:(id)arg1;
- (id)cursiveFontFamily;
- (void)setSansSerifFontFamily:(id)arg1;
- (id)sansSerifFontFamily;
- (void)setSerifFontFamily:(id)arg1;
- (id)serifFontFamily;
- (void)setFixedFontFamily:(id)arg1;
- (id)fixedFontFamily;
- (void)setStandardFontFamily:(id)arg1;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)_setUnsignedIntValue:(unsigned int)arg1 forKey:(id)arg2;
- (void)setAutomaticallyDetectsCacheModel:(BOOL)arg1;
- (void)_setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (long long)_longLongValueForKey:(id)arg1;
- (BOOL)_boolValueForKey:(id)arg1;
- (float)_floatValueForKey:(id)arg1;
- (unsigned int)_unsignedIntValueForKey:(id)arg1;
- (int)_integerValueForKey:(id)arg1;
- (id)_stringValueForKey:(id)arg1;
- (id)_valueForKey:(id)arg1;
- (void)_postCacheModelChangedNotification;
- (void)_postPreferencesChangedNotification;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(BOOL)arg2;
- (void)setMinimumLogicalFontSize:(int)arg1;
- (void)setMinimumFontSize:(int)arg1;
- (void)setAuthorAndUserStylesEnabled:(BOOL)arg1;
- (BOOL)developerExtrasEnabled;
- (BOOL)_alwaysRequestGeolocationPermission;
- (BOOL)backspaceKeyNavigationEnabled;
- (unsigned int)cacheModel;
- (BOOL)automaticallyDetectsCacheModel;
- (id)_diskImageCacheSavedCacheDirectory;
- (void)_setDiskImageCacheSavedCacheDirectory:(id)arg1;
- (BOOL)arePlugInsEnabled;
- (BOOL)usesPageCache;
- (int)minimumFontSize;
- (id)standardFontFamily;
- (int)defaultFontSize;
- (void)setCacheModel:(unsigned int)arg1;
- (void)setUsesPageCache:(BOOL)arg1;
- (void)setAutosaves:(BOOL)arg1;
- (void)setLoadsImagesAutomatically:(BOOL)arg1;
- (void)setAllowsAnimatedImageLooping:(BOOL)arg1;
- (void)setAllowsAnimatedImages:(BOOL)arg1;
- (void)setPlugInsEnabled:(BOOL)arg1;
- (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1;
- (void)setJavaScriptEnabled:(BOOL)arg1;
- (void)setJavaEnabled:(BOOL)arg1;
- (void)setUserStyleSheetEnabled:(BOOL)arg1;
- (void)setDefaultFixedFontSize:(int)arg1;
- (void)setDefaultFontSize:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)identifier;
- (void)setMediaPlaybackRequiresUserGesture:(BOOL)arg1;
- (void)setMediaPlaybackAllowsInline:(BOOL)arg1;
- (void)setShrinksStandaloneImagesToFit:(BOOL)arg1;
- (void)setNetworkInterfaceName:(id)arg1;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)arg1;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (void)setSuppressesIncrementalRendering:(BOOL)arg1;
- (void)setDiskImageCacheEnabled:(BOOL)arg1;
- (void)setOfflineWebApplicationCacheEnabled:(BOOL)arg1;
- (void)setLocalStorageEnabled:(BOOL)arg1;
- (void)setDatabasesEnabled:(BOOL)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
