//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "DVTScopeBarContentController.h"
#import "NSTextViewDelegate.h"

@class DVTBorderedView, IDEDocContentAreaViewController, NSDictionary, NSString, NSTextView;

@interface IDEDocInheritanceHierarchyViewController : DVTViewController <NSTextViewDelegate, DVTScopeBarContentController>
{
    NSDictionary *_characterIndexesToIndexSymbols;
    DVTBorderedView *_borderedView;
    NSTextView *_textView;
    IDEDocContentAreaViewController *_hostContentAreaViewController;
}

+ (id)_indexQueriesSharedQueue;
@property IDEDocContentAreaViewController *hostContentAreaViewController; // @synthesize hostContentAreaViewController=_hostContentAreaViewController;
@property NSTextView *textView; // @synthesize textView=_textView;
@property DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)_selectClassMember:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_menuForMembersOfIndexClassOrProtocolSymbol:(id)arg1;
- (void)_collectMembersOfClass:(id)arg1 properties:(id)arg2 instMethods:(id)arg3 clMethods:(id)arg4;
- (void)updateWithIndexSymbol:(id)arg1;
- (id)_attributedStringForSeparatorString:(id)arg1;
- (id)_attributedStringForIndexSymbol:(id)arg1;
@property(readonly) double preferredViewHeight;
- (void)primitiveInvalidate;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
