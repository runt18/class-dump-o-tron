//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIApplicationDelegate.h"

@class NSString, UIWindow;

@interface iAdOptOutAppDelegate : UIResponder <MFMailComposeViewControllerDelegate, UIAlertViewDelegate, UIApplicationDelegate>
{
    UIWindow *_window;
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

