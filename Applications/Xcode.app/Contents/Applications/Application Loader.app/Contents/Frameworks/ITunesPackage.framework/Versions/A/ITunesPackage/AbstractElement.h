//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZGenericRecord.h"

@class NSMutableArray, NSString;

@interface AbstractElement : MZGenericRecord
{
    NSMutableArray *_children;
    NSString *_id;
    id _nonretainedParent;
    BOOL _isInitialElement;
}

@property(nonatomic) BOOL isInitialElement; // @synthesize isInitialElement=_isInitialElement;
- (void)didChangeValueForKey:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)rootObject;
- (void)setId:(id)arg1;
- (id)id;
- (id)undoManager;
- (void)setParent:(id)arg1;
- (id)parent;
- (id)children;
- (void)addChild:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
