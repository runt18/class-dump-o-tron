//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OADClient.h"
#import "OADImageRecolorInfoClient.h"

@class NSString, OADImageRecolorInfo, PDAnimationInfo, PDPlaceholder;

__attribute__((visibility("hidden")))
@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient>
{
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    _Bool mIsComment;
    PDAnimationInfo *mAnimationInfo;
    _Bool mHasOleChart;
    int mInheritedTextStylePlaceholderType;
}

@property(nonatomic) int inheritedTextStylePlaceholderType; // @synthesize inheritedTextStylePlaceholderType=mInheritedTextStylePlaceholderType;
- (void)setHasOleChart:(_Bool)arg1;
- (_Bool)hasOleChart;
- (id)animationInfo;
- (void)setAnimationInfo:(id)arg1;
- (_Bool)hasAnimationInfo;
- (void)setIsComment:(_Bool)arg1;
- (_Bool)isComment;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (_Bool)hasPlaceholder;
- (void)setImageRecolorInfo:(id)arg1;
- (id)imageRecolorInfo;
- (struct CGRect)bounds;
- (_Bool)hasBounds;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

