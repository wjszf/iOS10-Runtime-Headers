/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, GKAchievementInternal, UIImage;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {
    GKAchievementInternal *_internal;
    UIImage *_image;
}

@property(readonly) UIImage * image;
@property(readonly) NSString * identifier;
@property(readonly) NSString * groupIdentifier;
@property(readonly) NSString * title;
@property(readonly) NSString * achievedDescription;
@property(readonly) NSString * unachievedDescription;
@property(readonly) int maximumPoints;
@property(getter=isHidden,readonly) BOOL hidden;
@property(getter=isReplayable,readonly) BOOL replayable;
@property(retain) UIImage * image;
@property(retain) GKAchievementInternal * internal;

+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)placeholderCompletedAchievementImage;
+ (id)incompleteAchievementImage;

- (void)setInternal:(id)arg1;
- (id)internal;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (id)imageURL;
- (void)showBanner;

@end
