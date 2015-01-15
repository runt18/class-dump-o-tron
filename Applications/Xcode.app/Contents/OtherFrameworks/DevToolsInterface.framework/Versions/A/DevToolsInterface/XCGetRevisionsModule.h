//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import "NSTableViewDelegate.h"

@class NSButton, NSObjectController, NSProgressIndicator, NSString, NSTextField, NSTextView, PBXExtendedTableView, PBXFileReference, XCExtendedArrayController;

@interface XCGetRevisionsModule : PBXModule <NSTableViewDelegate>
{
    NSTextField *_stateField;
    NSTextField *_tagField;
    NSTextField *_localRevField;
    NSTextField *_repositoryRevField;
    PBXExtendedTableView *_revisionsTableView;
    NSButton *_defaultButton;
    NSButton *_cancelButton;
    NSTextView *_logTextView;
    NSProgressIndicator *_progressIndicator;
    NSButton *_helpButton;
    NSObjectController *_scmInfoController;
    NSObjectController *_scmLogInfoController;
    XCExtendedArrayController *_scmRevisionsController;
    PBXFileReference *_fileReference;
    SEL _didEndSelector;
}

- (void)cancelDefaultAction;
- (void)performDefaultActionOnSelection:(id)arg1;
- (void)performDefaultAction;
- (void)runSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 withRef:(id)arg4 contextInfo:(void *)arg5;
- (void)setDefaultButtonTitle:(id)arg1;
- (id)revision;
- (void)setFileReference:(id)arg1;
- (id)fileReference;
- (void)setUpSCMNotifications;
- (void)refresh;
- (void)scmLogDidChange:(id)arg1;
- (void)scmStateDidChange:(id)arg1;
- (void)_scmRequestHadProgress:(id)arg1;
- (id)_sourceControlManager;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithModuleNibName:(id)arg1;
- (struct CGSize)viewMinSize;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (id)getRevisionsModule;
- (Class)moduleWindowClass;
- (id)loadModuleWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
