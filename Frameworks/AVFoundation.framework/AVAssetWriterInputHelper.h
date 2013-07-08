/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVAssetWriterInputConfigurationState, AVWeakReference, AVOutputSettings, NSDictionary;

@interface AVAssetWriterInputHelper : NSObject  {
    AVAssetWriterInputConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriterInput;
}

@property(readonly) AVAssetWriterInputConfigurationState * configurationState;
@property(retain) AVWeakReference * weakReferenceToAssetWriterInput;
@property(readonly) int status;
@property(readonly) int trackID;
@property(readonly) NSString * mediaType;
@property(readonly) AVOutputSettings * outputSettings;
@property(readonly) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property(copy) NSArray * metadata;
@property int mediaTimeScale;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property BOOL expectsMediaDataInRealTime;
@property struct CGSize { float x1; float x2; } naturalSize;
@property(copy) NSString * languageCode;
@property(copy) NSString * extendedLanguageTag;
@property BOOL marksOutputTrackAsEnabled;
@property float preferredVolume;
@property int layer;
@property short alternateGroupID;
@property(readonly) NSDictionary * trackReferences;
@property(copy) NSDictionary * sourcePixelBufferAttributes;
@property(readonly) struct __CVPixelBufferPool { }* pixelBufferPool;


- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;
- (id)weakReferenceToAssetWriterInput;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (void)markAsFinished;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (BOOL)isReadyForMoreMediaData;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg1;
- (BOOL)prepareToFinishWritingReturningError:(id*)arg1;
- (void)prepareToEndSession;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)setWeakReferenceToAssetWriterInput:(id)arg1;
- (void)setAlternateGroupID:(short)arg1;
- (short)alternateGroupID;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (int)mediaTimeScale;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (id)sourcePixelBufferAttributes;
- (BOOL)marksOutputTrackAsEnabled;
- (BOOL)expectsMediaDataInRealTime;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)configurationState;
- (id)initWithConfigurationState:(id)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)extendedLanguageTag;
- (id)trackReferences;
- (float)preferredVolume;
- (id)mediaType;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (int)trackID;
- (void)setLayer:(int)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (int)layer;
- (int)status;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)languageCode;
- (id)outputSettings;

@end
