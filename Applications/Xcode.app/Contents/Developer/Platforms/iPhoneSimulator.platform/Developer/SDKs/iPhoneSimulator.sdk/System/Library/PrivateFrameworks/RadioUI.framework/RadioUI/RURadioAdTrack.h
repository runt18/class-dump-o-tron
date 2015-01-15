//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADBannerViewDelegate.h"
#import "NSCopying.h"

@class ADBannerView, NSDictionary, NSString, NSURL;

@interface RURadioAdTrack : NSObject <ADBannerViewDelegate, NSCopying>
{
    long long _adType;
    ADBannerView *_adView;
    NSDictionary *_loudnessInfo;
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSDictionary *loudnessInfo; // @synthesize loudnessInfo=_loudnessInfo;
@property(readonly, nonatomic) ADBannerView *adView; // @synthesize adView=_adView;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
- (void).cxx_destruct;
- (id)_loudnessInfoForVideoAssetDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
- (void)triggerAdAction;
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, nonatomic) NSURL *artworkURL;
@property(readonly, nonatomic) long long actionType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithAdView:(id)arg1;
- (id)artworkCatalog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
