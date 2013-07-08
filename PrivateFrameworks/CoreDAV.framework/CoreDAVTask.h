/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLConnection, <CoreDAVTaskManager>, NSHTTPURLResponse, NSURLRequest, NSMutableArray, NSData, CoreDAVErrorItem, NSString, NSError, NSDate, NSDictionary, CoreDAVRequestLogger, <CoreDAVAccountInfoProvider>, <CoreDAVResponseBodyParser>, <CoreDAVTaskDelegate>, NSMutableDictionary, NSURL;

@interface CoreDAVTask : NSObject <CoreDAVSubmittable> {
    <CoreDAVTaskManager> *_taskManager;
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    int _numDownloadedElements;
    int _depth;
    NSHTTPURLResponse *_response;
    NSURLConnection *_connection;
    NSURLRequest *_request;
    double _timeoutInterval;
    int _responseStatusCode;
    NSDate *_dateConnectionWentOut;
    BOOL _didSendRequest;
    BOOL _didFailWithError;
    BOOL _didCancel;
    BOOL _didReceiveResponse;
    BOOL _didReceiveData;
    BOOL _didFinishLoading;
    BOOL _finished;
    void *_context;
    BOOL _receivedBadPasswordResponse;
    BOOL _justTriedTokenAuth;
    BOOL _everTriedTokenAuth;
    BOOL _requestIsCompressed;
    BOOL _compressedRequestFailed;
    NSError *_passwordNotificationError;
    <CoreDAVResponseBodyParser> *_responseBodyParser;
    CoreDAVRequestLogger *_logger;
    NSURL *_url;
    BOOL _allowAutomaticRedirects;
    <CoreDAVTaskDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSError *_error;
    unsigned int _totalBytesReceived;
    NSMutableDictionary *_overriddenHeaders;
    NSMutableArray *_redirectHistory;
    NSDictionary *_requestProperties;
    NSData *_fakeResponseData;
    BOOL _haveParsedFakeResponseData;
    CoreDAVErrorItem *_forbiddenErrorItem;
    NSString *_uniqueID;
}

@property(copy) id requestProgressBlock;
@property(copy) id responseProgressBlock;
@property(copy) id completionBlock;
@property(retain) NSError * error;
@property(getter=isFinished,readonly) BOOL finished;
@property <CoreDAVTaskManager> * taskManager;
@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property <CoreDAVTaskDelegate> * delegate;
@property void* context;
@property int depth;
@property double timeoutInterval;
@property BOOL allowAutomaticRedirects;
@property(retain) <CoreDAVResponseBodyParser> * responseBodyParser;
@property(readonly) NSDictionary * responseHeaders;
@property int responseStatusCode;
@property(readonly) NSURL * url;
@property(retain) NSDictionary * requestProperties;
@property unsigned int totalBytesReceived;

+ (id)stringFromDepth:(int)arg1;
+ (unsigned int)uniqueQueryID;

- (void)startModal;
- (void)setDepth:(int)arg1;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (int)numDownloadedElements;
- (void)_handleBadPasswordResponse;
- (void)setResponseStatusCode:(int)arg1;
- (id)credentialForOAuthChallenge:(id)arg1;
- (BOOL)allowAutomaticRedirects;
- (BOOL)_shouldHandleStatusCode:(int)arg1;
- (BOOL)shouldLogResponseBody;
- (id)responseProgressBlock;
- (void)setTotalBytesReceived:(unsigned int)arg1;
- (unsigned int)totalBytesReceived;
- (id)requestProgressBlock;
- (void)setResponseProgressBlock:(id)arg1;
- (void)setRequestProgressBlock:(id)arg1;
- (void)reportStatusWithError:(id)arg1;
- (id)_applyStorageSession:(struct __CFURLStorageSession { }*)arg1 toRequest:(id)arg2;
- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (int)depth;
- (BOOL)_includeGeneralHeaders;
- (id)_createBodyData;
- (void)_failImmediately;
- (id)_compressBodyData:(id)arg1;
- (void)setResponseBodyParser:(id)arg1;
- (void)tearDownResources;
- (id)_requestForLogging;
- (id)_connectionForLogging;
- (void)performCoreDAVTask;
- (id)requestBodyStream;
- (id)lastRedirectURL;
- (id)responseHeaders;
- (void)setAllowAutomaticRedirects:(BOOL)arg1;
- (int)responseStatusCode;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)setTaskManager:(id)arg1;
- (id)taskManager;
- (void)finishEarlyWithError:(id)arg1;
- (void)submitWithTaskManager:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)responseBodyParser;
- (id)accountInfoProvider;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setRequestProperties:(id)arg1;
- (id)requestProperties;
- (BOOL)validate:(id*)arg1;
- (BOOL)markAsFinished;
- (void)setTimeoutInterval:(double)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void*)context;
- (void)reset;
- (void)setContext:(void*)arg1;
- (void)loadRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (void)setError:(id)arg1;
- (id)error;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)url;
- (double)timeoutInterval;
- (unsigned int)cachePolicy;
- (id)completionBlock;
- (BOOL)isFinished;

@end
