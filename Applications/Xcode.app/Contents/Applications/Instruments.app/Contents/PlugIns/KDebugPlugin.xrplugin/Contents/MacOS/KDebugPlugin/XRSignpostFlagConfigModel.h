//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRUIModel.h"

#import "NSCoding.h"

@class NSColor, NSString;

@interface XRSignpostFlagConfigModel : XRUIModel <NSCoding>
{
    NSString *_title;
    NSString *_eventCode;
    NSColor *_color;
}

@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *eventCode; // @synthesize eventCode=_eventCode;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)eventCodeNumber;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
