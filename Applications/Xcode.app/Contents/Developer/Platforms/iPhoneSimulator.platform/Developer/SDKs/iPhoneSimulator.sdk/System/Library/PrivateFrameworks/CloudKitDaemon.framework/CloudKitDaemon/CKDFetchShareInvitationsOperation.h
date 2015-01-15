//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDFetchShareInvitationsOperation : CKDOperation
{
    _Bool _queryAllContainers;
    NSArray *_shareInvitations;
    CDUnknownBlockType _shareInvitationFetchedProgressBlock;
    long long _fetchType;
}

@property(nonatomic) _Bool queryAllContainers; // @synthesize queryAllContainers=_queryAllContainers;
@property(nonatomic) long long fetchType; // @synthesize fetchType=_fetchType;
@property(copy, nonatomic) CDUnknownBlockType shareInvitationFetchedProgressBlock; // @synthesize shareInvitationFetchedProgressBlock=_shareInvitationFetchedProgressBlock;
@property(retain, nonatomic) NSArray *shareInvitations; // @synthesize shareInvitations=_shareInvitations;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleShareInvitationFetched:(id)arg1 responseCode:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
