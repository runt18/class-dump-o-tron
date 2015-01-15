//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXBreakpoint.h>

@class NSString;

@interface PBXCPPExceptionBreakpoint : PBXBreakpoint
{
    NSString *_exceptionName;
    BOOL _isThrow;
}

+ (id)breakpointForCPPCatch:(id)arg1;
+ (id)breakpointForCPPThrow:(id)arg1;
+ (id)archivableAttributes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_hashableStringValue;
- (BOOL)matchesAllExceptions;
- (BOOL)isThrow;
- (void)setIsThrow:(BOOL)arg1;
- (id)displayString;
- (id)locationDisplay;
- (id)exceptionName;
- (void)setExceptionName:(id)arg1;
- (void)dealloc;
- (id)initWithExceptionName:(id)arg1 isThrow:(BOOL)arg2;

@end
