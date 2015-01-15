//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNSceneExportDelegate.h"

@class NSArray, NSString;

@interface SCNTOOLImageResolver : NSObject <SCNSceneExportDelegate>
{
    BOOL _preferPVRTC;
    NSString *_catalogPath;
    NSArray *_resourcePaths;
    NSString *_prefixToMakeRelativeToResourcesFolder;
    BOOL _wantsPathRelativeToResourcesFolder;
}

- (void).cxx_destruct;
- (id)_imagePathWithSceneDocumentURL:(id)arg1 originalImageURL:(id)arg2;
- (id)initWithAssetCatalogPath:(id)arg1 preferPVRTC:(BOOL)arg2 resourcesPathPrefix:(id)arg3 wantsPathRelativeToResourcesFolder:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
