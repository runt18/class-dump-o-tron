//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface XRCountingArray : NSObject
{
    SEL _equalitySelector;
    BOOL _isSorted;
    NSMutableArray *_items;
    NSMutableArray *_addCounts;
}

- (void)sort;
- (unsigned long long)addCountForAllItems;
- (unsigned long long)addCountForItem:(id)arg1;
- (id)allItems;
- (void)increaseCount:(unsigned long long)arg1 forItem:(id)arg2;
- (void)addItem:(id)arg1;
- (void)addItem:(id)arg1 withCount:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithEqualitySelector:(SEL)arg1;
- (id)init;

@end

