/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebFixedPositionContent, <WebFormDelegate>, WebVideoFullscreenController, <WebCaretChangeListener>, WebPreferences, <WebNotificationProvider>, WAKWindow, NSMutableSet, <WebGeolocationProvider>, WebIndicateLayer, NSDictionary, <WebDeviceOrientationProvider>, WebNodeHighlight, WebInspector, NSString, NSURL;

@interface WebViewPrivate : NSObject  {
    struct Page { } *page;
    id UIDelegate;
    id UIDelegateForwarder;
    id resourceProgressDelegate;
    id downloadDelegate;
    id policyDelegate;
    id policyDelegateForwarder;
    id frameLoadDelegate;
    id frameLoadDelegateForwarder;
    <WebFormDelegate> *formDelegate;
    id editingDelegate;
    id editingDelegateForwarder;
    id scriptDebugDelegate;
    id historyDelegate;
    id resourceProgressDelegateForwarder;
    id formDelegateForwarder;
    WebInspector *inspector;
    WebNodeHighlight *currentNodeHighlight;
    BOOL allowsRemoteInspection;
    NSString *hostApplicationBundleId;
    NSString *hostApplicationName;
    NSDictionary *remoteInspectorUserInfo;
    WebIndicateLayer *indicateLayer;
    BOOL allowsUndo;
    float zoomMultiplier;
    BOOL zoomsTextOnly;
    NSString *applicationNameForUserAgent;
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    } userAgent;
    BOOL userAgentOverridden;
    WebPreferences *preferences;
    BOOL useSiteSpecificSpoofing;
    NSURL *userStyleSheetLocation;
    WAKWindow *hostWindow;
    int programmaticFocusCount;
    struct WebResourceDelegateImplementationCache { 
        int (*didCancelAuthenticationChallengeFunc)(); 
        int (*didReceiveAuthenticationChallengeFunc)(); 
        int (*canAuthenticateAgainstProtectionSpaceFunc)(); 
        int (*connectionPropertiesFunc)(); 
        int (*webThreadDidFinishLoadingFromDataSourceFunc)(); 
        int (*webThreadDidFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*webThreadIdentifierForRequestFunc)(); 
        int (*webThreadDidLoadResourceFromMemoryCacheFunc)(); 
        int (*webThreadWillSendRequestFunc)(); 
        int (*webThreadDidReceiveResponseFunc)(); 
        int (*webThreadDidReceiveContentLengthFunc)(); 
        int (*webThreadWillCacheResponseFunc)(); 
        int (*identifierForRequestFunc)(); 
        int (*willSendRequestFunc)(); 
        int (*didReceiveResponseFunc)(); 
        int (*didReceiveContentLengthFunc)(); 
        int (*didFinishLoadingFromDataSourceFunc)(); 
        int (*didFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*didLoadResourceFromMemoryCacheFunc)(); 
        int (*willCacheResponseFunc)(); 
        int (*plugInFailedWithErrorFunc)(); 
        int (*shouldUseCredentialStorageFunc)(); 
        int (*shouldPaintBrokenImageForURLFunc)(); 
    } resourceLoadDelegateImplementations;
    struct WebFrameLoadDelegateImplementationCache { 
        int (*didCreateJavaScriptContextForFrameFunc)(); 
        int (*didClearWindowObjectForFrameFunc)(); 
        int (*didClearWindowObjectForFrameInScriptWorldFunc)(); 
        int (*didClearInspectorWindowObjectForFrameFunc)(); 
        int (*windowScriptObjectAvailableFunc)(); 
        int (*didHandleOnloadEventsForFrameFunc)(); 
        int (*didReceiveServerRedirectForProvisionalLoadForFrameFunc)(); 
        int (*didCancelClientRedirectForFrameFunc)(); 
        int (*willPerformClientRedirectToURLDelayFireDateForFrameFunc)(); 
        int (*didChangeLocationWithinPageForFrameFunc)(); 
        int (*didPushStateWithinPageForFrameFunc)(); 
        int (*didReplaceStateWithinPageForFrameFunc)(); 
        int (*didPopStateWithinPageForFrameFunc)(); 
        int (*willCloseFrameFunc)(); 
        int (*didStartProvisionalLoadForFrameFunc)(); 
        int (*didReceiveTitleForFrameFunc)(); 
        int (*didCommitLoadForFrameFunc)(); 
        int (*didFailProvisionalLoadWithErrorForFrameFunc)(); 
        int (*didFailLoadWithErrorForFrameFunc)(); 
        int (*didFinishLoadForFrameFunc)(); 
        int (*didFirstLayoutInFrameFunc)(); 
        int (*didFirstVisuallyNonEmptyLayoutInFrameFunc)(); 
        int (*didLayoutFunc)(); 
        int (*didReceiveIconForFrameFunc)(); 
        int (*didFinishDocumentLoadForFrameFunc)(); 
        int (*didDisplayInsecureContentFunc)(); 
        int (*didRunInsecureContentFunc)(); 
        int (*didDetectXSSFunc)(); 
        int (*didRemoveFrameFromHierarchyFunc)(); 
        int (*webThreadDidLayoutFunc)(); 
    } frameLoadDelegateImplementations;
    struct WebScriptDebugDelegateImplementationCache { 
        BOOL didParseSourceExpectsBaseLineNumber; 
        BOOL exceptionWasRaisedExpectsHasHandlerFlag; 
        int (*didParseSourceFunc)(); 
        int (*failedToParseSourceFunc)(); 
        int (*didEnterCallFrameFunc)(); 
        int (*willExecuteStatementFunc)(); 
        int (*willLeaveCallFrameFunc)(); 
        int (*exceptionWasRaisedFunc)(); 
    } scriptDebugDelegateImplementations;
    struct WebHistoryDelegateImplementationCache { 
        int (*navigatedFunc)(); 
        int (*clientRedirectFunc)(); 
        int (*serverRedirectFunc)(); 
        int (*deprecatedSetTitleFunc)(); 
        int (*setTitleFunc)(); 
        int (*populateVisitedLinksFunc)(); 
    } historyDelegateImplementations;
    void *observationInfo;
    BOOL closed;
    BOOL closing;
    BOOL shouldCloseWithWindow;
    BOOL mainFrameDocumentReady;
    BOOL drawsBackground;
    BOOL tabKeyCyclesThroughElementsChanged;
    BOOL becomingFirstResponder;
    BOOL becomingFirstResponderFromOutside;
    BOOL usesPageCache;
    struct CGColor { } *backgroundColor;
    NSString *mediaStyle;
    BOOL hasSpellCheckerDocumentTag;
    int spellCheckerDocumentTag;
    BOOL isStopping;
    id UIKitDelegate;
    id UIKitDelegateForwarder;
    id WebMailDelegate;
    BOOL allowsMessaging;
    NSMutableSet *_caretChangeListeners;
    <WebCaretChangeListener> *_caretChangeListener;
    struct CGSize { 
        float width; 
        float height; 
    } fixedLayoutSize;
    BOOL mainViewIsScrollingOrZooming;
    int didDrawTiles;
    struct Mutex { 
        struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } m_mutex; 
    } pendingFixedPositionLayoutRectMutex;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } pendingFixedPositionLayoutRect;
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > > { 
        struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> > >, WTF::IntHash<unsigned long>, WTF::HashMapValueTraits<WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > >, WTF::HashTraits<unsigned long> > { 
            struct KeyValuePair<unsigned long, WTF::RetainPtr<id> > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } identifierMap;
    BOOL _keyboardUIModeAccessed;
    int _keyboardUIMode;
    BOOL shouldUpdateWhileOffscreen;
    BOOL includesFlattenedCompositingLayersWhenDrawingToBitmap;
    BOOL needsOneShotDrawingSynchronization;
    BOOL postsAcceleratedCompositingNotifications;
    struct OwnPtr<LayerFlushController> { 
        struct LayerFlushController {} *m_ptr; 
    } layerFlushController;
    struct CGSize { 
        float width; 
        float height; 
    } lastLayoutSize;
    WebVideoFullscreenController *fullscreenController;
    <WebGeolocationProvider> *_geolocationProvider;
    <WebDeviceOrientationProvider> *m_deviceOrientationProvider;
    <WebNotificationProvider> *_notificationProvider;
    struct RefPtr<WebCore::HistoryItem> { 
        struct HistoryItem {} *m_ptr; 
    } _globalHistoryItem;
    BOOL interactiveFormValidationEnabled;
    int validationMessageTimerMagnification;
    float customDeviceScaleFactor;
    WebFixedPositionContent *_fixedPositionContent;
    struct RetainPtr<NSData> { 
        struct NSData { Class x_0_1_1; } *m_ptr; 
    } sourceApplicationAuditData;
}

+ (void)initialize;

- (id)init;
- (void)finalize;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
