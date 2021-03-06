//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "WKObject.h"

@class NSString;

@interface _WKFrameHandle : NSObject <WKObject, NSCopying, NSSecureCoding>
{
    struct ObjectStorage<API::FrameHandle> _frameHandle;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
@property(readonly) struct Object *_apiObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long _frameID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

