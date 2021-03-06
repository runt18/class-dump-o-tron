//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"

@class NSString;

@interface BSMachPort : NSObject <NSCopying, BSXPCCoding>
{
    unsigned int _port;
    unsigned long long _sendRights;
    unsigned long long _recvRights;
    _Bool _invalidated;
    unsigned int _portNumber;
    NSString *_debugDescription;
}

+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)taskNamePortForPID:(int)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;
+ (id)createReceiveRight;
+ (id)createSendRight;
@property(readonly, nonatomic) unsigned int port; // @synthesize port=_port;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (_Bool)isUsable;
- (void)_addRight:(int)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(_Bool)arg2;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1 withRights:(CDUnknownBlockType)arg2;
- (id)initWithRight:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

