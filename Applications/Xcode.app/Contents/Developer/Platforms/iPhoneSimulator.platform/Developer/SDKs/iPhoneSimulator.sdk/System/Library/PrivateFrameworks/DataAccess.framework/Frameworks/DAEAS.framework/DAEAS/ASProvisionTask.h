//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class ASPolicy, NSDictionary, NSString;

@interface ASProvisionTask : ASTask
{
    int _type;
    NSDictionary *_deviceInfo;
    ASPolicy *_policy;
    NSString *_key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) ASPolicy *policy; // @synthesize policy=_policy;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (id)requestBody;
- (_Bool)requiresEASVersionUpdate;
- (id)_provisioningType;
- (int)commandCode;
- (id)_policyID;
- (id)initWithRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2;
- (id)initWithPolicyAcknowledgement:(id)arg1 withKey:(id)arg2;
- (id)initWithOriginalKeyForPolicyRequest:(id)arg1;
- (id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3;

@end
