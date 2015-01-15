//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ContinuousReadingBannerView, ContinuousReadingItem, UILabel;

@interface ContinuousReadingPreviewView : UIView
{
    ContinuousReadingItem *_continuousReadingItem;
    UIView *_contentView;
    ContinuousReadingBannerView *_bannerView;
    UIView *_headerView;
    UIView *_contentBackgroundView;
    UILabel *_headerLabel;
}

@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) ContinuousReadingBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, retain, nonatomic) ContinuousReadingItem *continuousReadingItem; // @synthesize continuousReadingItem=_continuousReadingItem;
- (void).cxx_destruct;
- (void)_layOutContentView;
- (void)_layOutHeader;
- (void)layoutSubviews;
@property(readonly, nonatomic) double rubberBandingHeight;
@property(readonly, nonatomic) double headerHeight;
- (id)initWithContinuousReadingItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
