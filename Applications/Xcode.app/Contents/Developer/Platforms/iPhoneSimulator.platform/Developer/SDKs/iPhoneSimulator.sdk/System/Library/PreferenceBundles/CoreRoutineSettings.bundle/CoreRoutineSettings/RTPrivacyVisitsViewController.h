//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RTMapAndTableViewController.h"

@class RTPrivacyLOI;

@interface RTPrivacyVisitsViewController : RTMapAndTableViewController
{
    RTPrivacyLOI *_privacyLOI;
}

@property(retain, nonatomic) RTPrivacyLOI *privacyLOI; // @synthesize privacyLOI=_privacyLOI;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (void)_removePrivacyLOI:(id)arg1;
- (void)_displayPrivacyLOI:(id)arg1;

@end
