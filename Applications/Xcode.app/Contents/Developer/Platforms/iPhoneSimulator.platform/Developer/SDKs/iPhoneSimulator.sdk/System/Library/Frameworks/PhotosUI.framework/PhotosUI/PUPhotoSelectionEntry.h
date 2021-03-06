//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet, NSMutableIndexSet, NSMutableSet, PHAssetCollection, PHFetchResult;

@interface PUPhotoSelectionEntry : NSObject
{
    _Bool _hasValidAssetIndexes;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_fetchResult;
    NSMutableSet *_selectedAssets;
    NSMutableIndexSet *_selectedIndexes;
}

@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (void)setSelectedAssetsSet:(id)arg1;
- (void)handlePhotoLibraryChange:(id)arg1;
- (void)enumerateSelectedAssetsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isIndexSelected:(unsigned long long)arg1;
- (void)deselectAssetsAtIndexes:(id)arg1;
- (void)selectAssetsAtIndexes:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedAssets;
@property(readonly, nonatomic) NSIndexSet *selectedIndexes;
- (void)invalidateAllAssetIndexes;
- (void)_ensureValidAssetIndexes;
- (id)initWithAssetCollection:(id)arg1 fetchResult:(id)arg2 uniqueSelectedAssets:(id)arg3;

@end

