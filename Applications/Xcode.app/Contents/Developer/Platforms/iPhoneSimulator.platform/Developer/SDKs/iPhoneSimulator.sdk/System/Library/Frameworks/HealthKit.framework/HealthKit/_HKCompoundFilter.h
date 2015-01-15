//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSArray;

@interface _HKCompoundFilter : _HKFilter
{
    NSArray *_subfilters;
    unsigned long long _compoundType;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterWithSubfilters:(id)arg1 compoundType:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long compoundType; // @synthesize compoundType=_compoundType;
@property(readonly, nonatomic) NSArray *subfilters; // @synthesize subfilters=_subfilters;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
