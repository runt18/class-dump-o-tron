//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKDatabaseReader.h"

@class GKDatabaseConnection, NSString;

@interface GKRemoveGamesCacheReader : NSObject <GKDatabaseReader>
{
    GKDatabaseConnection *_connection;
    NSString *_bundleID;
}

+ (id)readerWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)removeGamesForExecutedStatement:(struct sqlite3_stmt *)arg1;
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2 bundleID:(id)arg3;
- (id)getAllRemoveGamesRequestIDsStatement;
- (id)getRemoveGamesDescriptorsStatement;
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;
- (id)initWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
