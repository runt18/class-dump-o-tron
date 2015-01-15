//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface RAPStorage : NSObject
{
    NSURL *_directoryURL;
}

- (void).cxx_destruct;
- (void)removeAllItems;
- (id)orphanedIdentifiersAfterRemovingItemsOutsideOfIdentifiers:(id)arg1;
- (_Bool)removeItemWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)dataForItemWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)saveItemWithData:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_validateIdentifier:(id)arg1 error:(id *)arg2;
- (id)initWithStorageDirectoryURL:(id)arg1;

@end
