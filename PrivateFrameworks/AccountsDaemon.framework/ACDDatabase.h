/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSString, NSManagedObjectContext, NSPersistentStore, NSManagedObjectModel;

@interface ACDDatabase : NSObject  {
    NSString *_path;
    NSManagedObjectContext *_context;
    NSManagedObjectModel *_model;
    NSPersistentStore *_store;
}

@property(readonly) NSString * path;
@property(readonly) NSManagedObjectContext * managedObjectContext;
@property int version;

+ (void)_resetPeristentStoreCoordinator;
+ (void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
+ (void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2;
+ (BOOL)_isUnrecoverableDatabaseError:(id)arg1;
+ (BOOL)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id*)arg4;
+ (id)_optionsForOpeningPersistentStore;
+ (id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1;
+ (id)defaultPath;
+ (struct __CFString { }*)_copyRootPath;
+ (id)_managedObjectModel;

- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)_store;
- (void)_handleManagedObjectContextDidSaveNotification:(id)arg1;
- (void)_setupManagedObjectContext;
- (id)objectForObjectURI:(id)arg1;
- (id)managedObjectIDForURI:(id)arg1;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)existingObjectWithURI:(id)arg1;
- (unsigned int)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1;
- (BOOL)_databaseFileExists;
- (id)managedObjectContext;
- (id)initWithDefaultPath;
- (void)dealloc;
- (void).cxx_destruct;
- (id)path;
- (void)setVersion:(int)arg1;
- (int)version;
- (id)initWithPath:(id)arg1;

@end
