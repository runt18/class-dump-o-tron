//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding>
{
    long long _invalidationIgnoreCount;
    long long _numberOfIgnoredInvalidations;
    long long _entityType;
}

@property(readonly, nonatomic) long long entityType; // @synthesize entityType=_entityType;
- (void)_didInvalidate;
- (void)_willInvalidate;
- (unsigned long long)_globalIndexForIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool usesSections;
@property(readonly, nonatomic) _Bool showsIndexBar;
@property(readonly, nonatomic) _Bool showsEntityCountFooter;
- (id)sectionEntities;
- (unsigned long long)indexOfSectionEntity:(id)arg1;
- (id)sectionEntityAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;
- (void)preloadSectionEntities;
- (void)preloadEntities;
- (id)playbackContextForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSections;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
- (void)_invalidateCalculatedEntities;
- (void)invalidate;
- (void)endIgnoringInvalidation;
- (void)beginIgnoringInvalidation;
- (_Bool)isIgnoringInvalidation;
@property(readonly, nonatomic) _Bool isEmpty;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfEntity:(id)arg1;
- (_Bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *entityCountFormat;
- (id)entityAtIndexPath:(id)arg1;
- (id)entityAtIndex:(unsigned long long)arg1;
- (id)entities;
- (long long)editingTypeForEntityAtIndexPath:(id)arg1;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;
- (void)deleteEntityAtIndexPath:(id)arg1;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)canEditEntityAtIndexPath:(id)arg1;
- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;
- (id)anyEntity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(long long)arg1;

@end
