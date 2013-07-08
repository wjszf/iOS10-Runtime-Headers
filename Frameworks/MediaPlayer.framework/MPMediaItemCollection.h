/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaQuery, NSArray;

@interface MPMediaItemCollection : MPMediaEntity  {
    unsigned int _containedMediaTypes;
    NSArray *_items;
    unsigned int _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}

@property(readonly) NSArray * items;
@property(readonly) MPMediaItem * representativeItem;
@property(readonly) unsigned int count;
@property(readonly) unsigned int mediaTypes;

+ (id)representativePersistentIDPropertyForGroupingType:(int)arg1;
+ (id)collectionWithItems:(id)arg1;
+ (id)sortTitlePropertyForGroupingType:(int)arg1;
+ (id)titlePropertyForGroupingType:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)MPSD_hasDownloadableItem;
- (BOOL)MPSD_hasDownloadingItem;
- (id)initWithItemsQuery:(id)arg1;
- (id)SAMPMediaEntityRepresentation;
- (id)SAMPCollectionRepresentationWithItems;
- (id)SAMPCollectionRepresentation;
- (id)representativeItem;
- (int)groupingType;
- (id)itemsQuery;
- (id)items;
- (id)init;
- (unsigned int)count;
- (void).cxx_destruct;
- (unsigned int)mediaTypes;
- (id)initWithItems:(id)arg1;
- (id)_init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
