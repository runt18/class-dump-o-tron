//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LBDownloadTracker : NSObject
{
    CDUnknownBlockType _completionHandler;
    struct __CFUUID *_boost;
}

+ (id)trackerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invokeCompletionHandlerWithError:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

