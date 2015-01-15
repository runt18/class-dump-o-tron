//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTileEditionUpdate : NSObject
{
    NSMutableArray *_entries;
    _Bool _flushEverything;
}

@property(nonatomic) _Bool flushEverything; // @synthesize flushEverything=_flushEverything;
- (void)dealloc;
- (void)tileset:(unsigned int *)arg1 edition:(unsigned int *)arg2 provider:(unsigned int *)arg3 invalidateOnly:(_Bool *)arg4 atIndex:(unsigned long long)arg5;
- (unsigned long long)tilesetCount;
- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(_Bool)arg4;
- (id)init;

@end
