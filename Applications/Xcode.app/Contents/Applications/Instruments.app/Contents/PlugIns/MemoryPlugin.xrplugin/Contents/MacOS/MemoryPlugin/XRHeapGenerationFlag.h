//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRTimeFlag.h"

@class XRHeapGeneration, XRObjectAllocRun;

@interface XRHeapGenerationFlag : XRTimeFlag
{
    XRHeapGeneration *_generation;
    XRObjectAllocRun *_run;
}

- (id)_run;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (id)generation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithGeneration:(id)arg1 run:(id)arg2;

@end
