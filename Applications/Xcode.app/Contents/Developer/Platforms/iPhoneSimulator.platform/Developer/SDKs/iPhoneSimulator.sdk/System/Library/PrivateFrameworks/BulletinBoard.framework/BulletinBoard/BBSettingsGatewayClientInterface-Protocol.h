//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol BBSettingsGatewayClientInterface <NSObject>
- (void)privilegedSenderTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg1 name:(NSString *)arg2 source:(unsigned long long)arg3;
- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverrideStatusChanged:(long long)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesEffectiveWhileUnlockedChanged:(_Bool)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesChanged:(NSArray *)arg1 source:(unsigned long long)arg2;
@end

