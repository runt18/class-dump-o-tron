//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSRequestDelegate.h"

@class NSString, NSTimer, SSRequest;

@interface MCSSRequestDelegate : NSObject <SSRequestDelegate>
{
    SSRequest *_request;
    CDUnknownBlockType _completionBlock;
    NSTimer *_timeoutTimer;
}

@property(readonly, retain, nonatomic) SSRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_timerDidFire:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)cancel;
- (void)_startTimeout:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

