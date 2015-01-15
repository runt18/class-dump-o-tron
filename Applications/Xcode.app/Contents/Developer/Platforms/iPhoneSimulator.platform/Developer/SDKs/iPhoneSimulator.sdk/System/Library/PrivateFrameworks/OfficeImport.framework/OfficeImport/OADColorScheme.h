//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorScheme : NSObject <NSCopying>
{
    NSMutableDictionary *mColors;
}

- (_Bool)isEqual:(id)arg1;
- (void)addDefaultColors;
- (void)setColor:(id)arg1 index:(int)arg2;
- (void)addColor:(id)arg1 index:(int)arg2;
- (id)colorForIndex:(int)arg1;
- (unsigned long long)colorCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
