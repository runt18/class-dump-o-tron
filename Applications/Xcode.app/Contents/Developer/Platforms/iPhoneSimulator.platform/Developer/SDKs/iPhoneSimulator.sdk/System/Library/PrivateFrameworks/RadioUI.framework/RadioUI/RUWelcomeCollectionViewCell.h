//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "MPUStackViewDataSource.h"

@class MPUBorderConfiguration, MPUBorderDrawingCache, MPUStackView, NSString, UIImage, UIView;

@interface RUWelcomeCollectionViewCell : UICollectionViewCell <MPUStackViewDataSource>
{
    MPUBorderConfiguration *_stackItemBorderConfiguration;
    MPUStackView *_stackView;
    UIImage *_artworkImage;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    struct CGSize _artworkSize;
}

+ (struct CGSize)artworkSizeForOrientation:(long long)arg1;
@property(retain, nonatomic) MPUBorderDrawingCache *stackItemBorderDrawingCache; // @synthesize stackItemBorderDrawingCache=_stackItemBorderDrawingCache;
@property(nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (void).cxx_destruct;
- (void)updateForChangedDistanceFromVanishingPoint;
@property(nonatomic) struct CGPoint vanishingPoint;
@property(retain, nonatomic) UIView *perspectiveTargetView;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3;
- (long long)numberOfItemsInStackView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

