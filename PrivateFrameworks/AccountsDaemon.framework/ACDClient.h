/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDTelemetryWatchdog, ACDDatabase, NSString, NSXPCConnection, NSNumber, NSMutableDictionary;

@interface ACDClient : NSObject  {
    NSXPCConnection *_connection;
    ACDDatabase *_database;
    struct __CFBundle { } *_bundle;
    NSString *_bundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
    ACDTelemetryWatchdog *_telemetry;
}

@property(retain) NSString * bundleID;
@property(readonly) struct __CFBundle { }* bundle;
@property(readonly) NSString * localizedAppName;
@property(readonly) NSString * adamOrDisplayID;
@property(readonly) NSString * name;
@property(readonly) NSNumber * pid;
@property(readonly) NSXPCConnection * connection;
@property(readonly) ACDDatabase * database;
@property(retain) ACDTelemetryWatchdog * telemetry;

+ (id)clientWithBundleID:(id)arg1;

- (void)setTelemetry:(id)arg1;
- (id)telemetry;
- (id)localizedAppName;
- (id)adamOrDisplayID;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (id)database;
- (void)setBundleID:(id)arg1;
- (struct __CFBundle { }*)bundle;
- (id)pid;
- (id)initWithConnection:(id)arg1;
- (id)bundleID;
- (BOOL)hasEntitlement:(id)arg1;
- (id)debugDescription;
- (id)name;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)connection;

@end
