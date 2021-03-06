//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXUIContentViewControllerDelegate.h"
#import "AXUIService.h"

@class AXHearingAidDisplayController, NSString, UIAlertController, UIViewController;

@interface HearingAidUIServer : NSObject <AXUIService, AXUIContentViewControllerDelegate>
{
    UIAlertController *_handoffAlertController;
    UIViewController *_emptyViewController;
    AXHearingAidDisplayController *_displayController;
}

@property(retain, nonatomic) AXHearingAidDisplayController *displayController; // @synthesize displayController=_displayController;
- (double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(_Bool)arg2;
- (id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id *)arg4;
- (void)setNewDisplayController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

