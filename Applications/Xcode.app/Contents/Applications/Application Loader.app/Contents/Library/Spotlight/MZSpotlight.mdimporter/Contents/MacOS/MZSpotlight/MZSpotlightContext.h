//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITunesPackage, NSMutableDictionary;

@interface MZSpotlightContext : NSObject
{
    NSMutableDictionary *_attributes;
    ITunesPackage *_package;
}

@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) ITunesPackage *package; // @synthesize package=_package;
- (id)packageElement;
- (void)dealloc;
- (id)initWithPackage:(id)arg1 attributes:(id)arg2;

@end
