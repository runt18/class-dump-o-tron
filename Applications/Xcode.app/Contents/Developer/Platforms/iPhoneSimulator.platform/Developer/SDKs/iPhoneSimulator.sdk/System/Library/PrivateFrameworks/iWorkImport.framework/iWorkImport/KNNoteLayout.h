//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

#import "TSKChangeSourceObserver.h"
#import "TSWPColumnMetrics.h"
#import "TSWPLayoutParent.h"

@class NSString, TSWPLayout, TSWPPadding;

__attribute__((visibility("hidden")))
@interface KNNoteLayout : TSDLayout <TSKChangeSourceObserver, TSWPLayoutParent, TSWPColumnMetrics>
{
    struct CGSize mSizeOfScrollViewEnclosingCanvas;
    TSWPLayout *mContainedLayout;
    TSWPPadding *mPadding;
}

@property(readonly, nonatomic) TSWPLayout *containedLayout; // @synthesize containedLayout=mContainedLayout;
- (id).cxx_construct;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (_Bool)supportsBoldItalicUnderlineShortcuts;
- (_Bool)textIsVertical;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) double textScaleFactor;
- (double)textScaleFactorForPrinting;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (id)p_adjustedPaddingForBodyWidth:(double)arg1;
@property(readonly, nonatomic) TSWPPadding *padding;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange)arg2;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (id)childSearchTargets;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)layoutGeometryFromInfo;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (void)updateChildrenFromInfo;
- (void)createContainedLayoutForEditing;
- (void)p_setSizeOfScrollViewEnclosingCanvasFromLayoutController:(id)arg1;
- (void)sizeOfScrollViewEnclosingCanvasDidChange;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)invalidateSize;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (id)children;
- (id)computeLayoutGeometry;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
