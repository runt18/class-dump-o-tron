//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "PDDistributedNotificationConsumer.h"

@class CLLocation, CLLocationManager, NSArray, NSDate, NSMutableSet, NSString, NSTimer, PDDatabaseManager, PDDistributedNotificationManager, SBSCardItemsController;

@interface PDRelevantPassProvider : NSObject <CLLocationManagerDelegate, PDDistributedNotificationConsumer>
{
    PDDatabaseManager *_databaseManager;
    id <PDRelevantPassProviderDelegate> _delegate;
    CLLocationManager *_proximityManager;
    CLLocationManager *_backingManager;
    CLLocation *_lastLocation;
    CLLocation *_roughLocation;
    int _locationSearchState;
    long long _locationSearchMode;
    NSDate *_locationSearchStartDate;
    NSTimer *_locationSearchTimer;
    NSArray *_lastBeacons;
    int _beaconSearchState;
    NSTimer *_beaconSearchTimer;
    NSMutableSet *_dateRelevantCards;
    NSMutableSet *_proxPendingCards;
    SBSCardItemsController *_cardItemsController;
    PDDistributedNotificationManager *_notificationManager;
}

@property(nonatomic) id <PDRelevantPassProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (_Bool)_locationIsNewEnoughAndHasGoodAccuracy:(id)arg1;
- (void)handleNotificationWithName:(id)arg1;
- (id)notificationNames;
- (void)_sendGroups:(id)arg1;
- (_Bool)_findMatchingLocation:(id *)arg1 beacon:(id *)arg2 forPass:(id)arg3 passStyleRadius:(double)arg4 usingNearbyLocations:(id)arg5;
- (void)_updateAndSendRelevantCards;
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forBeacon:(id)arg3;
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forLocation:(id)arg3;
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forDate:(id)arg3;
- (id)_groupForPass:(id)arg1 inGroups:(id)arg2;
- (_Bool)_proxPendingPassExistsWithBeacon;
- (_Bool)_proxPendingPassExistsWithLocation;
- (void)_addDateRelevantAndLocationPendingCardsForStyle:(long long)arg1 locationAvailable:(_Bool)arg2;
- (void)_beaconSearchTimerFired:(id)arg1;
- (void)_clearBeaconSearchTimer;
- (void)_beginBeaconSearchTimer;
- (void)_stopBeaconSearch;
- (void)_handleNewBeacons:(id)arg1;
- (_Bool)_isDoingBeaconSearch;
- (void)_startBeaconSearchIfNecessary;
- (void)_locationSearchTimerFired:(id)arg1;
- (void)_clearLocationSearchTimer;
- (void)_beginLocationSearchTimer;
- (void)_stopLocationSearch;
- (_Bool)_isDoingLocationSearch;
- (_Bool)_handleNewLocation:(id)arg1 forceAcceptance:(_Bool)arg2 from:(id)arg3;
- (void)_startLocationSearchIfNecessaryWithSearchMode:(long long)arg1;
- (void)_unscheduleEagerRecalculation;
- (void)_scheduleEagerRecalculationWithPasses:(id)arg1 fenceLocation:(_Bool)arg2 minRadius:(double)arg3 beaconUUIDs:(id)arg4;
- (_Bool)_shouldScheduleEagerRecalculation;
- (void)_clearPersistedProximityInfo;
- (void)_loadPersistedLocationInfoIfNecessary;
- (void)_startCardSearchUpdatingWithCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2 searchMode:(long long)arg3;
- (void)_startCardSearchUpdatingWithCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2;
- (void)_tearDownExitFenceTimerFired;
- (void)_relevantCardExpirationTimerFired;
- (void)_handleDimmedEvent:(_Bool)arg1;
- (void)_handleSignifigantTimeChangedEvent;
- (void)handleSignificantTimeChangedEvent;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)startObservingEvents;
- (void)dealloc;
- (id)initWithDatabaseManager:(id)arg1 notificationManager:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
