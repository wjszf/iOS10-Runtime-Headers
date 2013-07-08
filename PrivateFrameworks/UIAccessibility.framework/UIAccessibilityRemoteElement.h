/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@class <UIAccessibilityRemoteElementChildrenDelegate>, NSString, NSMutableSet;

@interface UIAccessibilityRemoteElement : NSObject  {
    NSString *_uuid;
    int _remotePid;
    unsigned int _contextId;
    BOOL _onClientSide;
    id _remoteChildrenDelegate;
    NSMutableSet *_allChildren;
    unsigned int _machPort;
}

@property(retain) NSString * uuid;
@property(readonly) unsigned long long uuidHash;
@property int remotePid;
@property unsigned int contextId;
@property unsigned int machPort;
@property BOOL onClientSide;
@property <UIAccessibilityRemoteElementChildrenDelegate> * remoteChildrenDelegate;

+ (id)remoteElementForContextId:(unsigned int)arg1;
+ (BOOL)registerRemoteElement:(id)arg1;
+ (id)remoteElementForBlock:(id)arg1;
+ (void)initialize;

- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;
- (id)remoteChildrenDelegate;
- (id)_remoteElementWithAttribute:(int)arg1;
- (void)setRemotePid:(int)arg1;
- (void)setUuid:(id)arg1;
- (BOOL)onClientSide;
- (id)accessibilityContainerElements;
- (int)remotePid;
- (unsigned long long)uuidHash;
- (void)setMachPort:(unsigned int)arg1;
- (void)setOnClientSide:(BOOL)arg1;
- (void)setRemoteChildrenDelegate:(id)arg1;
- (id)_accessibilityLastElement;
- (id)_accessibilityFirstElement;
- (id)_accessibilityResponderElement;
- (id)uuid;
- (unsigned int)contextId;
- (unsigned int)machPort;
- (void)dealloc;
- (id)description;
- (void)setContextId:(unsigned int)arg1;
- (void)unregister;
- (BOOL)accessibilityViewIsModal;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;

@end
