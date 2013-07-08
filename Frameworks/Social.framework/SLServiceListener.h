/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class Protocol, NSArray, NSString, NSXPCListener, NSXPCInterface;

@interface SLServiceListener : NSObject <NSXPCListenerDelegate> {
    Class _sessionClass;
    Protocol *_serviceProtocol;
    NSXPCInterface *_clientInterface;
    NSXPCListener *_listener;
    NSString *_persistentStoreName;
    NSString *_managedObjectModelPath;
    NSArray *_allowedEntitlements;
    NSString *_serviceName;
}

@property(retain) NSString * serviceName;
@property(retain) NSXPCInterface * clientInterface;
@property(retain) NSString * persistentStoreName;
@property(retain) NSString * managedObjectModelPath;


- (void)setClientInterface:(id)arg1;
- (id)clientInterface;
- (void)setManagedObjectModelPath:(id)arg1;
- (id)managedObjectModelPath;
- (void)setPersistentStoreName:(id)arg1;
- (void)beginAcceptingConnections;
- (void)restrictToClientsWithEntitlements:(id)arg1;
- (id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2;
- (BOOL)_verifyAuthorizationForConnection:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void).cxx_destruct;
- (id)persistentStoreName;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)serviceName;

@end
