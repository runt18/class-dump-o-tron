//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCElementImp.h>

#import "XCElementTabberP.h"

@class NSString;

@interface XCElementTabberImp : XCElementImp <XCElementTabberP>
{
    struct NSObject *_marker;
    struct NSObject *_flexer;
    long long _phase;
}

- (void)dealloc;
- (void)clearView;
- (void)_releaseValuesTabber;
- (void)specialEffects;
- (void)prepareSpecialEffects;
- (void)preparePositioning;
- (long long)markPos;
- (struct NSObject *)flexElement;
- (void)setFlexElement:(struct NSObject *)arg1;
- (struct NSObject *)marker;
- (void)setMarker:(struct NSObject *)arg1;
- (BOOL)isTabber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

