/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification  {
    BOOL _allDay;
    BOOL _hasRecurrenceRules;
    BOOL _timeChanged;
    BOOL _dateChanged;
    BOOL _locationChanged;
    NSString *_location;
    NSString *_calendarName;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    NSDate *_endDate;
    NSDate *_participationStatusModifiedDate;
    int _participationStatus;
    int _status;
}

@property(retain) NSString * location;
@property(retain) NSString * calendarName;
@property(retain) NSDate * startDate;
@property(retain) NSDate * startDateForNextOccurrence;
@property(retain) NSDate * endDate;
@property(retain) NSDate * participationStatusModifiedDate;
@property int participationStatus;
@property int status;
@property(getter=isAllDay) BOOL allDay;
@property BOOL hasRecurrenceRules;
@property BOOL timeChanged;
@property BOOL dateChanged;
@property BOOL locationChanged;


- (BOOL)isAllDay;
- (id)startDateForNextOccurrence;
- (BOOL)needsAlert;
- (void)setLocationChanged:(BOOL)arg1;
- (void)setTimeChanged:(BOOL)arg1;
- (void)setDateChanged:(BOOL)arg1;
- (id)calendarName;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)setHasRecurrenceRules:(BOOL)arg1;
- (void)setStartDateForNextOccurrence:(id)arg1;
- (void)setCalendarName:(id)arg1;
- (BOOL)locationChanged;
- (BOOL)timeChanged;
- (BOOL)dateChanged;
- (void)setParticipationStatus:(int)arg1;
- (id)participationStatusModifiedDate;
- (BOOL)hasRecurrenceRules;
- (int)participationStatus;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)endDate;
- (id)eventFromEventStore:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (id)location;
- (id)startDate;
- (id)initWithType:(int)arg1;
- (int)status;
- (void)setLocation:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)dealloc;

@end
