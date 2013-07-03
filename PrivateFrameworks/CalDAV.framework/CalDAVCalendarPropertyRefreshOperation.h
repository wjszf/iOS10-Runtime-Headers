/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSError, NSString, NSMutableSet, NSObject<OS_dispatch_group>, <CalDAVCalendarPropertyRefreshDelegate>, NSMutableDictionary;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {
    NSError *_savedError;
    NSMutableDictionary *_ctags;
    NSMutableDictionary *_syncTokens;
    BOOL _forceClearCalendarHomeSyncToken;
    NSString *_calendarHomeSyncToken;
    BOOL _useCalendarHomeSyncReport;
    NSMutableDictionary *_pathToLocalCalendar;
    NSMutableSet *_localCalendarsWithNoPath;
    NSMutableSet *_updatedCalendars;
    BOOL _didFinish;
    BOOL _didMakeCalendars;
    BOOL _isSecondRefresh;
    int _nextCalendarOrder;
    NSObject<OS_dispatch_group> *_outstandingTasksGroup;
}

@property <CalDAVCalendarPropertyRefreshDelegate> * delegate;
@property BOOL useCalendarHomeSyncReport;
@property(retain) NSString * calendarHomeSyncToken;


- (void)setUseCalendarHomeSyncReport:(BOOL)arg1;
- (void)_finishRefresh;
- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)setCalendarHomeSyncToken:(id)arg1;
- (id)_getDefaultMkCalendarForPrincipalTask:(id)arg1 isEventCalendar:(BOOL)arg2;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1;
- (BOOL)_handleUpdateForCalendar:(id)arg1;
- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4;
- (int)_sharingStatusForContainer:(id)arg1;
- (id)_generateTimeZoneString:(id)arg1;
- (void)_prepareCalendarsBeforeRefresh;
- (void)_sendShareActionTasks;
- (void)_handleCalendarPublish;
- (void)_sendAddsForCalendars;
- (void)_sendDeletesForCalendars;
- (id)_getMkcalendarTaskForCalendar:(id)arg1;
- (void)_reallyRefreshCalendarProperties;
- (void)_initializePrincipalCalendarCache;
- (BOOL)useCalendarHomeSyncReport;
- (id)calendarHomeSyncToken;
- (void)refreshCalendarProperties;
- (id)initWithPrincipal:(id)arg1;
- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;
- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)dealloc;

@end