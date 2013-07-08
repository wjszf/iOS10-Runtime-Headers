/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSIndexSet, NSOrderedSet, PLAssetContainerChangeNotification, PLShuffledAlbum;

@interface PLShuffledAlbumChangeNotification : PLAssetContainerChangeNotification  {
    PLShuffledAlbum *_album;
    PLAssetContainerChangeNotification *_backingNotification;
    NSIndexSet *_changedIndexes;
    NSOrderedSet *_newSet;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)initWithShuffledAlbum:(id)arg1 albumChangeNotification:(id)arg2;
- (BOOL)countDidChange;
- (BOOL)keyAssetDidChange;
- (BOOL)titleDidChange;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)_diffDescription;
- (void)_calculateDiffs;
- (id)changedIndexes;
- (id)deletedIndexes;
- (BOOL)shouldReload;
- (id)album;
- (id)insertedIndexes;
- (id)init;
- (id)object;
- (void)dealloc;
- (id)description;

@end
