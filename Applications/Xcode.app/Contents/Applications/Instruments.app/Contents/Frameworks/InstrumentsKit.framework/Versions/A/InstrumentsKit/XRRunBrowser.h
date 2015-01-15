//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTNibView.h"

@class NSButton, NSPathControl, NSTextField, NSView, PFTTraceDocument, XRCoverView;

@interface XRRunBrowser : PFTNibView
{
    NSView *_dataContainerView;
    XRCoverView *_coverView;
    NSTextField *_capturedTextView;
    NSTextField *_runTextView;
    NSTextField *_commentTextView;
    NSTextField *_durationtTextView;
    NSTextField *_architectureTextView;
    NSTextField *_osVersionTextView;
    NSTextField *_environmentTextView;
    NSTextField *_argumentsTextView;
    NSPathControl *_targetPathControl;
    NSButton *_closeButton;
    NSButton *_selectButton;
    NSButton *_deleteButton;
    PFTTraceDocument *_document;
}

- (void)validateControls;
- (void)close:(id)arg1;
- (void)endEditing:(id)arg1;
- (void)_deleteAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)deleteRun:(id)arg1;
- (void)selectRun:(id)arg1;
- (void)_selectionChanged:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)isOpaque;
- (void)setup;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end
