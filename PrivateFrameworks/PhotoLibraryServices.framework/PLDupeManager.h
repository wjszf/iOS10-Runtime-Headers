/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet, PLPhotoLibrary, NSMutableArray, NSMutableDictionary;

@interface PLDupeManager : NSObject  {
    NSMutableArray *_normalAssetsObjectIDsToAnalyze;
    NSMutableDictionary *_cloudAssetsToAnalyze;
    NSMutableArray *_assetsWithUpdatedVisibility;
    BOOL _doneWithCloudAssets;
    BOOL _isRebuilding;
    NSMutableSet *_normalInserts;
    NSMutableSet *_cloudInserts;
    PLPhotoLibrary *_photoLibrary;
    long _once;
}

@property(readonly) PLPhotoLibrary * photoLibrary;

+ (BOOL)_computeHashForAsset:(id)arg1;
+ (void)_setPlaceHolderHashOnAsset:(id)arg1;
+ (id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2;
+ (id)placeholderHash;
+ (BOOL)_resetDupesAnalysisInManagedObjectContext:(id)arg1 resetHashes:(BOOL)arg2;
+ (BOOL)resetDupesAnalysisForOfflineStore:(id)arg1 resetHashes:(BOOL)arg2;
+ (id)hashForAsset:(id)arg1;
+ (id)sharedInstance;

- (void)resetDupesAnalysisResetHashes:(BOOL)arg1;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1;
- (void)_continueAnalysis;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1;
- (void)_analyzeDupes;
- (BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3;
- (void)_performAnalysisTransaction:(id)arg1 completionHandler:(id)arg2;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1;
- (short)_computeAssetHashesForManagedObjectContext:(id)arg1;
- (short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1;
- (void)_continueAnalysisForRebuild;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1;
- (void)_analyzeDupesForRebuild;
- (void)_analyzeDupeForNormalAsset:(id)arg1;
- (BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1;
- (void)_removeCloudAssetFromAnalysis:(id)arg1;
- (id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2;
- (void)_noteAssetVisibilityDidChange:(id)arg1;
- (void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2;
- (void)launchDupeAnalysisIfNeeded;
- (void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(id)arg3;
- (id)photoLibrary;
- (void)dealloc;

@end
