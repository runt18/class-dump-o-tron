//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"
#import "PKVoIPXPCServer.h"

@class APSConnection, NSMutableDictionary, NSString, NSXPCListener;

@interface TUCallServicesVoIP : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, PKVoIPXPCServer>
{
    NSXPCListener *_xpcListener;
    APSConnection *_productionConnection;
    APSConnection *_developmentConnection;
    NSMutableDictionary *_bundleIdToInfo;
}

+ (_Bool)bundleIdIsRunning:(id)arg1;
+ (_Bool)hasVoIPEntitlement:(id)arg1;
+ (id)topicFromBundleId:(id)arg1;
+ (id)bundleIdFromTopic:(id)arg1;
+ (id)bundleIdFromPid:(int)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *bundleIdToInfo; // @synthesize bundleIdToInfo=_bundleIdToInfo;
@property(retain, nonatomic) APSConnection *developmentConnection; // @synthesize developmentConnection=_developmentConnection;
@property(retain, nonatomic) APSConnection *productionConnection; // @synthesize productionConnection=_productionConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void).cxx_destruct;
- (void)deliverMessageForBundleId:(id)arg1;
- (void)deliverTokenForBundleId:(id)arg1;
- (void)unregisterForBundleId:(id)arg1 environment:(id)arg2;
- (void)registerForBundleId:(id)arg1 environment:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)voipUnregister;
- (void)voipRegister;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)_apsConnectionForEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
