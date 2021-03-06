//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "IDEFilePickerViewDelegate.h"

@class DVTBorderedView, IDESourceControlStructureViewController, NSArray, NSMutableArray, NSProgressIndicator, NSString;

@interface IDESourceControlFilePickerViewController : DVTViewController <IDEFilePickerViewDelegate>
{
    DVTBorderedView *_borderedView;
    IDESourceControlStructureViewController *_filePickerViewController;
    NSProgressIndicator *_spinner;
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_loadingObservations;
    id _tmpItemToScrollToVisible;
    BOOL _needsToWaitForChildren;
    BOOL _onlySelectGroups;
    BOOL _hasLoadedRequiredChildren;
}

@property(nonatomic) BOOL hasLoadedRequiredChildren; // @synthesize hasLoadedRequiredChildren=_hasLoadedRequiredChildren;
@property(nonatomic) BOOL onlySelectGroups; // @synthesize onlySelectGroups=_onlySelectGroups;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)choose:(id)arg1;
- (void)setRootRepository:(id)arg1 withExpandedItems:(id)arg2 visibleItem:(id)arg3;
- (void)scrollItemToVisible:(id)arg1;
@property(copy) NSArray *expandedItems;
- (void)setRootRepository:(id)arg1;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

