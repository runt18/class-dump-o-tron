//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverClientInterface.h"
#import "BBObserverServerInterface.h"

@class BBServer, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface BBObserverClientProxy : NSObject <BBObserverServerInterface, BBObserverClientInterface>
{
    NSXPCConnection *_connection;
    BBServer *_serverWeak;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_bulletinIDsToTransaction;
    NSString *_clientBundleIdentifier;
}

+ (id)xpcInterface;
@property(retain, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(retain, nonatomic) NSMutableDictionary *bulletinIDsToTransaction; // @synthesize bulletinIDsToTransaction=_bulletinIDsToTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BBServer *serverWeak; // @synthesize serverWeak=_serverWeak;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)getBulletinsForPublisherBulletinIDs:(id)arg1 sectionID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPrivilegedSenderTypesWithHandler:(CDUnknownBlockType)arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(CDUnknownBlockType)arg1;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSectionOrderRuleWithHandler:(CDUnknownBlockType)arg1;
- (void)getActiveAlertBehaviorOverridesWithHandler:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForCategory:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)requestFutureBulletinsForSectionID:(id)arg1;
- (void)requestTodayBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)clearSection:(id)arg1;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)handleResponse:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (void)getObserverDebugInfo:(CDUnknownBlockType)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1 inCategory:(long long)arg2;
- (void)updateSectionOrder:(id)arg1 forCategory:(long long)arg2;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2;
- (unsigned long long)incrementedTransactionIDForBulletinID:(id)arg1;
- (id)currentTransactionForBulletinID:(id)arg1;
- (id)transactionBulletinIDs;
- (void)removeTransaction:(id)arg1;
- (id)description;
- (id)server;
- (void)dealloc;
- (id)initWithServer:(id)arg1 connection:(id)arg2 queue:(id)arg3;

@end
