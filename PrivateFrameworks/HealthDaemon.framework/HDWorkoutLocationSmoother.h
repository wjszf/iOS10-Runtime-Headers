/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate> {
    NSMutableArray * _listOfSmoothingTasks;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    CLLocationSmoother * _smoother;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_hkLocationDataFromLocations:(id)arg1;
- (bool)_queue_containsWorkoutObject:(id)arg1 containsWorkout:(bool*)arg2;
- (bool)_queue_createNewLocationSeriesWithMetadata:(id)arg1 sourceEntity:(id)arg2 withLocations:(id)arg3 error:(id*)arg4 newSeries:(id*)arg5;
- (bool)_queue_createNewSeriesFromTask:(id)arg1 withLocations:(id)arg2 error:(id*)arg3;
- (bool)_queue_deleteSample:(id)arg1;
- (bool)_queue_fetchLocationsForSampleUUID:(id)arg1 fetchedLocations:(id*)arg2;
- (id)_queue_nextSmoothingTask;
- (void)_queue_smoothLocationSample:(id)arg1;
- (bool)_workoutExistsForSample:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)locationManager:(id)arg1 didSmoothLocations:(id)arg2 ofType:(int)arg3;
- (void)smoothLocationSample:(id)arg1;

@end
