//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ACAccount, ACDAccountStore, NSDictionary, NSString;

@protocol AAAuthenticationDelegateProtocol

@optional
- (NSString *)delegateServiceIdentifier;
- (void)didReceiveAuthenticationResponseParameters:(NSDictionary *)arg1 accountStore:(ACDAccountStore *)arg2 account:(ACAccount *)arg3 completion:(void (^)(void))arg4;
- (void)didReceiveAuthenticationResponseParameters:(NSDictionary *)arg1 accountStore:(ACDAccountStore *)arg2 completion:(void (^)(void))arg3;
@end
