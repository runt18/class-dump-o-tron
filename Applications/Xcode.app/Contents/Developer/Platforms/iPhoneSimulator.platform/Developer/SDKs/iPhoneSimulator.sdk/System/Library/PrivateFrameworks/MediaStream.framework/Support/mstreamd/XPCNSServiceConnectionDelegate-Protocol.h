//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XPCNSRequest, XPCNSServiceConnection;

@protocol XPCNSServiceConnectionDelegate <NSObject>
- (void)XPCNSServiceConnectionDidDisconnect:(XPCNSServiceConnection *)arg1;
- (void)XPCNSServiceConnection:(XPCNSServiceConnection *)arg1 didReceiveRequest:(XPCNSRequest *)arg2 sequenceNumber:(unsigned long long)arg3;
@end
