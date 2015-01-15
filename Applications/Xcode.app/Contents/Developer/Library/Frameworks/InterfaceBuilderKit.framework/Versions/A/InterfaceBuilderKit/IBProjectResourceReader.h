//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBResourceReaderCacheReferencer, IBTargetRuntime, NSArray, NSMutableDictionary, NSSet, NSThread;

@interface IBProjectResourceReader : NSObject
{
    id delegate;
    NSArray *pendingPaths;
    NSThread *processingThread;
    NSMutableDictionary *updatedSyncStatus;
    NSSet *pendingImageExtensions;
    id userInfo;
    IBTargetRuntime *targetRuntime;
    IBResourceReaderCacheReferencer *cacheReference;
}

- (void)readFilesAndNotify:(id)arg1;
- (void)postCompletion;
- (void)postResults:(id)arg1 andCacheUpdate:(id)arg2;
- (id)updatedSyncStatus;
- (void)forceFileToSynchronizeNextTime:(id)arg1;
- (void)notifyCompletion:(id)arg1;
- (void)notifyProgress:(id)arg1;
- (void)cancelReading;
- (void)startReadingAndNotify:(id)arg1;
- (void)setImageExtensions:(id)arg1;
- (id)userInfo;
- (void)dealloc;
- (id)initWithPaths:(id)arg1 andPreviousSyncStatus:(id)arg2 targetRuntime:(id)arg3 userInfo:(id)arg4 resourceReaderCacheReferenceObject:(id)arg5;

@end
