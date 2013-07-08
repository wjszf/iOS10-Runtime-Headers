/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSProgress, LSApplicationProxy, NSUUID, NSDictionary, NSString, NSURL, NSArray;

@interface LSApplicationProxy : LSResourceProxy <NSSecureCoding> {
    unsigned int _flags;
    unsigned int _bundleFlags;
    NSArray *_privateDocumentIconNames;
    LSApplicationProxy *_privateDocumentTypeOwner;
    NSArray *_directionsModes;
    NSArray *_UIBackgroundModes;
    NSArray *_audioComponents;
    BOOL _profileValidated;
    BOOL _isInstalled;
    BOOL _isPlaceholder;
    BOOL _isAppUpdate;
    BOOL _isNewsstandApp;
    BOOL _isRestricted;
    BOOL _foundBackingBundle;
    NSString *_applicationType;
    NSString *_signerIdentity;
    NSDictionary *_entitlements;
    NSDictionary *_environmentVariables;
    NSDictionary *_groupContainers;
    NSArray *_machOUUIDs;
    NSString *_vendorID;
    NSString *_vendorName;
    NSString *_bundleVersion;
    NSString *_shortVersionString;
    NSURL *_bundleURL;
    unsigned int _installType;
}

@property(readonly) BOOL _gkIsInstalled;
@property(readonly) BOOL _gkIsAppleInternal;
@property(readonly) NSString * applicationIdentifier;
@property(readonly) NSArray * machOUUIDs;
@property(readonly) NSString * roleIdentifier;
@property(readonly) NSURL * bundleURL;
@property(readonly) NSURL * containerURL;
@property(readonly) NSString * vendorName;
@property(readonly) NSString * vendorID;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * shortVersionString;
@property(readonly) NSString * applicationType;
@property(readonly) NSString * signerIdentity;
@property(readonly) BOOL profileValidated;
@property(readonly) NSDictionary * entitlements;
@property(readonly) NSDictionary * environmentVariables;
@property(readonly) NSArray * directionsModes;
@property(readonly) NSArray * UIBackgroundModes;
@property(readonly) NSArray * audioComponents;
@property(readonly) NSDictionary * groupContainers;
@property(readonly) NSUUID * deviceIdentifierForVendor;
@property(readonly) NSProgress * installProgress;
@property(readonly) BOOL isInstalled;
@property(readonly) unsigned int installType;
@property(readonly) BOOL isPlaceholder;
@property(readonly) BOOL isAppUpdate;
@property(readonly) BOOL isNewsstandApp;
@property(readonly) BOOL isRestricted;
@property(readonly) BOOL foundBackingBundle;

+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(BOOL)arg2 server:(BOOL)arg3;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)_gkMetadataForBundleURL:(id)arg1;

- (id)audioComponents;
- (id)bundleVersion;
- (id)containerURL;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isRestricted;
- (unsigned int)installType;
- (BOOL)isInstalled;
- (BOOL)profileValidated;
- (id)privateDocumentTypeOwner;
- (id)installProgressSync;
- (id)UIBackgroundModes;
- (id)directionsModes;
- (id)groupContainers;
- (id)environmentVariables;
- (id)entitlements;
- (id)signerIdentity;
- (id)shortVersionString;
- (id)vendorName;
- (id)vendorID;
- (id)applicationType;
- (id)machOUUIDs;
- (id)roleIdentifier;
- (BOOL)isNewsstandApp;
- (id)_plistValueForKey:(id)arg1;
- (unsigned char)_createContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 andGetBundle:(unsigned int*)arg2 withData:(const struct LSBundleData {}**)arg3;
- (id)localizedName;
- (id)iconDataForVariant:(int)arg1;
- (id)privateDocumentIconNames;
- (id)resourcesDirectoryURL;
- (id)iconStyleDomain;
- (BOOL)privateDocumentIconAllowOverride;
- (id)_initWithApplicationIdentifier:(id)arg1 bundleType:(unsigned int)arg2 name:(id)arg3 containerURL:(id)arg4 resourcesDirectoryURL:(id)arg5 iconsDictionary:(id)arg6 iconFileNames:(id)arg7 iconIsPrerendered:(BOOL)arg8 server:(BOOL)arg9;
- (id)installProgress;
- (BOOL)isAppUpdate;
- (BOOL)isPlaceholder;
- (BOOL)foundBackingBundle;
- (id)applicationIdentifier;
- (void)setPrivateDocumentTypeOwner:(id)arg1;
- (void)setPrivateDocumentIconAllowOverride:(BOOL)arg1;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifierForVendor;
- (id)bundleURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;
- (struct CGSize { float x1; float x2; })_defaultStyleSize:(id)arg1;
- (id)_gkGameDescriptor;
- (id)_gkPurchaseDate;
- (id)_gkExternalVersion;
- (id)_gkAdamID;
- (BOOL)_gkIsGameCenterEverEnabled;
- (BOOL)_gkIsGameCenterEnabled;
- (id)_gkItemName;
- (id)_gkBundle;
- (void)_gkDetachITunesMetadata;
- (BOOL)_gkIsAppleInternal;
- (BOOL)_gkIsInstalled;
- (id)_gkITunesMetadata;

@end
