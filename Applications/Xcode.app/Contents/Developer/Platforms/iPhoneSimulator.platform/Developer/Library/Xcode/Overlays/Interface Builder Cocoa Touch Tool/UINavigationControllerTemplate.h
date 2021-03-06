//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerTemplate.h"

#import "UINavigationBarDelegate.h"

@class NSMutableArray, NSString, UINavigationBar, UIToolbar;

@interface UINavigationControllerTemplate : UIViewControllerTemplate <UINavigationBarDelegate>
{
    NSMutableArray *viewControllers;
    UINavigationBar *navigationBar;
    UIToolbar *toolbar;
    id delegate;
    _Bool navigationBarHidden;
    _Bool toolbarHidden;
    _Bool hidesBarsWhenKeyboardAppears;
    _Bool hidesBarsOnSwipe;
    _Bool hidesBarsWhenVerticallyCompact;
    _Bool hidesBarsOnTap;
}

@property _Bool hidesBarsOnTap; // @synthesize hidesBarsOnTap;
@property _Bool hidesBarsWhenVerticallyCompact; // @synthesize hidesBarsWhenVerticallyCompact;
@property _Bool hidesBarsOnSwipe; // @synthesize hidesBarsOnSwipe;
@property _Bool hidesBarsWhenKeyboardAppears; // @synthesize hidesBarsWhenKeyboardAppears;
@property _Bool toolbarHidden; // @synthesize toolbarHidden;
@property _Bool navigationBarHidden; // @synthesize navigationBarHidden;
@property __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(retain) UIToolbar *toolbar; // @synthesize toolbar;
@property(retain) UINavigationBar *navigationBar; // @synthesize navigationBar;
- (id)viewControllers;
- (void)setViewControllers:(id)arg1;
- (void)syncNavigationItems;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

