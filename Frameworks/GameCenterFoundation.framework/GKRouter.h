/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSMutableArray;

@interface GKRouter : NSObject  {
    NSMutableArray *_routes;
    NSMutableArray *_handlers;
}


- (BOOL)dispatch:(id)arg1;
- (void)from:(id)arg1 to:(id)arg2;
- (void)scheme:(id)arg1 from:(id)arg2 to:(id)arg3;
- (id)init;
- (void)dealloc;

@end