//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SLFacebookPost;

@interface FBDPostUploadPart : NSObject
{
    SLFacebookPost *_post;
    NSArray *_partAssets;
}

@property(retain) NSArray *partAssets; // @synthesize partAssets=_partAssets;
@property(retain) SLFacebookPost *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (id)initWithPost:(id)arg1 partAssets:(id)arg2;

@end
