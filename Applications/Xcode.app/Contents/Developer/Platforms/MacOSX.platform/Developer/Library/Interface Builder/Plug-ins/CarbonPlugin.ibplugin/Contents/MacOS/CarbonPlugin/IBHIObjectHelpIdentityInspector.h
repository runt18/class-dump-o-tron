//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBBoundInspector.h"

@class NSPopUpButton, NSTextField, NSTextView;

@interface IBHIObjectHelpIdentityInspector : IBBoundInspector
{
    NSTextField *helpTextField;
    NSTextView *extendedHelpText;
    NSPopUpButton *helpDisplayPopUp;
}

- (void)awakeFromNib;

@end

