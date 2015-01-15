//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAMStillImageCaptureRequestDelegate.h"
#import "UIAlertViewDelegate.h"

@class CAMLowDiskSpaceAlertView, CAMTimelapseState, NSCountedSet, NSDate, NSMutableSet, NSObject<OS_dispatch_source>, NSString;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate>
{
    _Bool __ignoringTimerCallbacksForTearDown;
    _Bool __ignoringTimerCallbacksWaitingForCaptureResponse;
    _Bool __backendRecoveryNeeded;
    _Bool __previewStarted;
    CAMTimelapseState *__state;
    NSObject<OS_dispatch_source> *__captureTimer;
    NSCountedSet *__inFlightTimelapseUUIDs;
    NSMutableSet *__pendingCompletedStates;
    CAMLowDiskSpaceAlertView *__diskSpaceAlert;
}

+ (void)recoverFromCrashIfNeededForceEndLastSession:(_Bool)arg1;
+ (id)_videoPreviewImageForTimelapseState:(id)arg1;
+ (id)createPlaceholderAssetResponseForTimelapseState:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic, setter=_setPreviewStarted:) _Bool _previewStarted; // @synthesize _previewStarted=__previewStarted;
@property(nonatomic, setter=_setBackendRecoveryNeeded:) _Bool _backendRecoveryNeeded; // @synthesize _backendRecoveryNeeded=__backendRecoveryNeeded;
@property(readonly, nonatomic) CAMLowDiskSpaceAlertView *_diskSpaceAlert; // @synthesize _diskSpaceAlert=__diskSpaceAlert;
@property(readonly, nonatomic) NSMutableSet *_pendingCompletedStates; // @synthesize _pendingCompletedStates=__pendingCompletedStates;
@property(readonly, nonatomic) NSCountedSet *_inFlightTimelapseUUIDs; // @synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs;
@property(readonly, nonatomic) _Bool _ignoringTimerCallbacksWaitingForCaptureResponse; // @synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse;
@property(readonly, nonatomic) _Bool _ignoringTimerCallbacksForTearDown; // @synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *_captureTimer; // @synthesize _captureTimer=__captureTimer;
@property(readonly, nonatomic) CAMTimelapseState *_state; // @synthesize _state=__state;
- (void).cxx_destruct;
- (void)_updateLocationIfNecessary;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)_dismissDiskSpaceAlert;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (void)_previewStarted:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (id)_createPlaceholderAssetForTimelapseState:(id)arg1;
- (void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)_saveStateToDisk:(id)arg1;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)_updateFocusAndExposureForStopCapturing;
- (void)_updateFocusAndExposureForStartCapturing;
- (_Bool)_enqueueCaptureRequest;
- (void)_captureTimerFired;
- (void)_teardownCaptureTimer;
- (void)_startCaptureTimer;
@property(readonly, nonatomic) NSDate *captureStartTime;
- (_Bool)_reserveDiskSpaceForTimelapseUUID:(id)arg1;
- (void)_restoreCaptureStateFromDisk;
- (void)_setNewCaptureState;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (_Bool)_startCapturing;
- (void)stopCapturingWithReasons:(long long)arg1;
- (_Bool)startCapturing;
@property(readonly, nonatomic, getter=isCapturing) _Bool capturing;
- (void)_prepareForTimelapseCapture;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)restoreConfiguration;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
