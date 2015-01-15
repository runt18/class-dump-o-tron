//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SafariFetcherServerProxy, WebBookmark, WebBookmarkTitleWordTokenizer;

@interface WebBookmarkCollection : NSObject
{
    struct sqlite3 *_db;
    struct __CFLocale *_locale;
    WebBookmarkTitleWordTokenizer *_wordTokenizer;
    WebBookmark *_rootBookmark;
    unsigned int _favoritesFolderIdentifier;
    _Bool _merging;
    _Bool _dirty;
    SafariFetcherServerProxy *_safariFetcherServerProxy;
}

+ (id)_uniqueExternalUUID;
+ (id)safariBookmarkCollection;
+ (unsigned long long)readingListArchivesDiskUsage;
+ (id)safariDirectoryPath;
+ (id)readingListArchivesDirectoryPath;
+ (id)_safariContainerPath;
+ (id)_currentProcessContainerPath;
+ (void)_postBookmarksChangedSyncNotification;
+ (void)unlockSync;
+ (_Bool)lockSync;
+ (_Bool)isLockedSync;
@property(nonatomic, getter=isMerging) _Bool merging; // @synthesize merging=_merging;
- (id)fastFetchBookmarksInBookmarkList:(id)arg1;
- (id)iconDataForBookmark:(id)arg1;
- (_Bool)_updateHiddenAncestorCountForBookmarksUnderFolderID:(unsigned int)arg1 addingOffset:(int)arg2;
- (_Bool)_insertAncestorTableEntriesForBookmarkID:(unsigned int)arg1 withAncestorIDs:(id)arg2;
- (void)_clearAndCreateAncestorTable;
- (void)_restoreOrMergeReadingListFolderWithChangeNotification:(_Bool)arg1;
- (void)restoreOrMergeWhiteListFolderAndContentsWithChangeNotification:(_Bool)arg1;
- (void)_normalizeDatabaseURLs;
- (_Bool)_importSyncAnchorPlist:(id)arg1;
- (_Bool)_importBookmarksPlist:(id)arg1;
- (void)_simulateCrashWithDescription:(id)arg1;
- (void)_startReadingListFetcher;
- (id)_safariFetcherServerProxy;
- (void)_postBookmarksSpecialFoldersDidChangeNotification;
- (void)_postBookmarksFolderContentsDidChangeNotification:(unsigned int)arg1;
- (void)_postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade;
- (void)_postBookmarksDidReloadNotification;
- (unsigned int)frequentlyVisitedSitesFolderBookmarkID;
- (id)frequentlyVisitedSitesList;
- (id)frequentlyVisitedSitesFolder;
- (id)_lazyCreateFrequentlyVisitedSitesBookmark;
- (_Bool)bookmarkIsFavoritesFolder:(id)arg1;
- (id)favoritesFolderList;
- (id)favoritesFolder;
- (void)_clearCachedFavoritesFolderIdentifier;
- (unsigned int)_favoritesFolderIdentifier;
- (void)setFavoritesFolderIdentifier:(unsigned int)arg1;
- (void)_registerForSyncBookmarksFileChangedNotification;
- (_Bool)_incrementDAVGeneration;
- (int)_DAVGeneration;
- (_Bool)_markBookmarkID:(unsigned int)arg1 added:(_Bool)arg2;
- (_Bool)_clearChangeList;
- (id)_changeList;
- (void)_collectChangesOfType:(int)arg1 withClause:(id)arg2 intoArray:(id)arg3;
- (_Bool)_incrementGeneration;
- (_Bool)_indexAllTitleWords;
- (_Bool)_reindexBookmarkID:(unsigned int)arg1 title:(id)arg2;
- (_Bool)_indexBookmarkID:(unsigned int)arg1 title:(id)arg2;
- (_Bool)_clearTitleWordsForBookmarkID:(unsigned int)arg1;
- (void)_normalizeSearchString:(struct __CFString *)arg1;
- (_Bool)_deleteAncestorTableEntriesForBookmarkID:(unsigned int)arg1;
- (_Bool)_insertAncestorTableEntriesForBookmarkID:(unsigned int)arg1 withParentID:(unsigned int)arg2;
- (_Bool)_rebuildAncestorTable;
- (_Bool)_orderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2;
- (_Bool)_unsafeOrderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2;
- (id)_serverIDAtOrderIndex:(unsigned int)arg1 inFolderWithServerID:(id)arg2;
- (id)_serverIDsInFolderWithServerID:(id)arg1;
- (id)_syncKeysForServerIDs:(id)arg1;
- (_Bool)_setSyncData:(id)arg1 forBookmark:(id)arg2;
- (_Bool)_setSyncKey:(id)arg1 forBookmark:(id)arg2;
- (_Bool)_setServerID:(id)arg1 forBookmark:(id)arg2;
- (id)_bookmarkWithServerID:(id)arg1;
- (unsigned int)_bookmarkIDForServerID:(id)arg1;
- (id)_serverIDForBookmarkID:(unsigned int)arg1;
- (_Bool)_updateCachedChildCountForParentID:(unsigned int)arg1 inDirection:(int)arg2;
- (_Bool)_markBookmarkID:(unsigned int)arg1 withSpecialID:(unsigned int)arg2;
- (_Bool)_saveBookmark:(id)arg1 withSpecialID:(unsigned int)arg2 updateGenerationIfNeeded:(_Bool)arg3;
- (_Bool)_childrenOfParentBookmarkAreUnsyncable:(id)arg1;
- (id)_databaseTitleForSpecialID:(unsigned int)arg1;
- (unsigned int)_specialIDForBookmarkBeingSaved:(id)arg1;
- (unsigned int)_specialIDForBookmarkTitle:(id)arg1;
- (_Bool)_addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentID:(unsigned int)arg3 orderIndex:(unsigned int)arg4 isFolder:(_Bool)arg5 externalUUID:(id)arg6 associatedBookmark:(id)arg7 updateParentChildCount:(_Bool)arg8 updateAncestorEntries:(_Bool)arg9;
- (_Bool)_deleteRecursively:(unsigned int)arg1;
- (_Bool)_deleteBookmark:(id)arg1 leaveTombstone:(_Bool)arg2;
- (_Bool)_clearAllDAVSyncData;
- (_Bool)_clearAllSyncKeys;
- (_Bool)_clearSyncKeysUnderBookmarkID:(unsigned int)arg1 isFolder:(_Bool)arg2;
- (_Bool)_clearAllTombstones;
- (_Bool)_insertTombstoneWithServerID:(id)arg1;
- (_Bool)_moveBookmark:(id)arg1 toFolderWithID:(unsigned int)arg2;
- (int)_intFromExecutingSQL:(id)arg1;
- (int)_executeSQLWithCString:(const char *)arg1;
- (int)_executeSQL:(id)arg1;
- (id)_errorForMostRecentSQLiteErrorWithErrorCode:(long long)arg1;
- (id)_errorForMostRecentSQLiteError;
- (int)_finalizeStatementIfNotNull:(struct sqlite3_stmt *)arg1;
- (struct sqlite3_stmt *)_selectBookmarksWhere:(id)arg1 countOnly:(_Bool)arg2;
- (struct sqlite3_stmt *)_selectBookmarksWhere:(id)arg1;
- (id)_rootFolderHiddenChildrenClause;
- (_Bool)_restoreMissingSpecialBookmarks;
- (_Bool)_restoreBookmarkBarIfMissing;
- (_Bool)_migrateBookmarksPlist:(id)arg1 syncAnchorPlist:(id)arg2;
- (void)_migrateToCurrentSchema;
- (void)_rerunMigrationsIfNecessary;
- (void)_migrateSchemaVersion37ToVersion38;
- (void)_migrateSchemaVersion36ToVersion37;
- (void)_migrateSchemaVersion35ToVersion36;
- (void)_migrateSchemaVersion34ToVersion35;
- (void)_migrateSchemaVersion33ToVersion34;
- (void)_migrateSchemaVersion32ToVersion33;
- (void)_migrateSchemaVersion31ToVersion32;
- (void)_migrateSchemaVersion30ToVersion31;
- (void)_migrateSchemaVersion29ToVersion30;
- (void)_migrateSchemaVersion28ToVersion29;
- (void)_migrateSchemaVersion27ToVersion28;
- (void)_migrateSchemaVersion26ToVersion27;
- (void)_migrateSchemaVersion25ToVersion26;
- (void)_migrateSchemaVersion24ToVersion25;
- (void)_migrateSchemaVersion23ToVersion24;
- (void)_migrateSchemaVersion22ToVersion23;
- (void)_migrateSchemaVersion21ToVersion22;
- (void)_migrateSchemaVersion19And20ToVersion21;
- (void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;
- (void)_migrateSchemaVersion15ToVersion16;
- (void)_migrateSchemaVersion14ToVersion15;
- (void)_migrateSchemaVersion11And12And13ToVersion14;
- (void)_migrateSchemaVersion10ToVersion11;
- (void)_migrateSchemaVersion9ToVersion10;
- (void)_migrateSchemaVersion8ToVersion9;
- (void)_migrateSchemaVersion7ToVersion8;
- (void)_migrateSchemaVersion6ToVersion7;
- (void)_migrateSchemaVersion5ToVersion6;
- (void)_migrateSchemaVersion4ToVersion5;
- (void)_migrateSchemaVersion3ToVersion4;
- (void)_migrateSchemaVersion1And2ToVersion3;
- (void)_migrateSchemaVersion0ToVersion1;
- (void)_clearAndCreateBookmarksTables;
- (void)_clearAndCreateBookmarksTitleWordTable;
- (void)_createSchema;
- (long long)_userVersion;
- (id)_bookmarksInListWhere:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)_mergeCandidateBookmarkWithAddress:(id)arg1 parent:(unsigned int)arg2;
- (id)_mergeCandidateFolderWithTitle:(id)arg1 parent:(unsigned int)arg2;
- (id)_firstBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(_Bool)arg2 inParent:(unsigned int)arg3;
- (id)_bookmarkWithSpecialID:(unsigned int)arg1;
- (unsigned int)_orderIndexForBookmarkInsertedIntoParent:(unsigned int)arg1 insertAtBeginning:(_Bool)arg2;
- (void)clearCarrierBookmarks;
- (unsigned long long)rollingReadingListMaximumCount;
- (id)rollingListOfArchivedReadingListItems;
- (void)rollOutReadingListItemIfNeededToMakeRoomForOneNewItem;
- (_Bool)rollOutLastReadingListItem;
- (void)_cullReadingListBookmarksList:(id)arg1 toSize:(unsigned long long)arg2;
- (id)readingListBookmarksNeedingArchiveInMode:(int)arg1;
- (id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1;
- (unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(int)arg1;
- (id)_orderedWhereClauseForArchiveMode:(int)arg1;
- (id)_tableExpressionForArchiveMode:(int)arg1;
- (void)postBookmarksDidReloadNotification;
- (unsigned long long)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(_Bool)arg2;
- (id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(_Bool)arg2;
- (id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(_Bool)arg3;
- (void)_addBookmarksForReadingListMatchStatement:(id)arg1 normalizedQuery:(id)arg2 toArray:(id)arg3 maxResults:(int)arg4;
- (id)_bookmarksFromStatementSelectingIDs:(const char *)arg1 withQuery:(id)arg2;
- (void)enumerateBookmarks:(_Bool)arg1 andReadingListItems:(_Bool)arg2 matchingString:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_enumerateBookmarksForMatchStatement:(id)arg1 normalizedQuery:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)bookmarksMatchingString:(id)arg1;
- (struct sqlite3_stmt *)_prefixSearch:(id)arg1 usingColumns:(const char *)arg2 maxCount:(unsigned int)arg3;
- (_Bool)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (_Bool)reorderBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (_Bool)_moveBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (_Bool)moveBookmark:(id)arg1 toFolderWithID:(unsigned int)arg2;
- (_Bool)deleteBookmark:(id)arg1;
- (_Bool)deleteBookmark:(id)arg1 postChangeNotification:(_Bool)arg2;
- (_Bool)saveBookmark:(id)arg1 startReadingListFetcher:(_Bool)arg2;
- (_Bool)saveBookmarks:(id)arg1 postNotification:(_Bool)arg2;
- (_Bool)saveBookmark:(id)arg1;
- (id)webFilterWhiteList;
- (unsigned int)webFilterWhiteListFolderBookmarkID;
- (_Bool)deleteAllFavoriteIcons;
- (_Bool)markAllFavoritesAsNeedingIcons;
- (id)bookmarksNeedingIcons;
- (_Bool)shouldFetchIconForBookmark:(id)arg1;
- (id)_parentIdentifiersOfBookmarksNeedingIcons;
- (_Bool)isEmpty;
- (unsigned int)readingListFolderBookmarkID;
- (id)_readingListItemsWhere:(id)arg1;
- (id)readingListWithUnreadOnly:(_Bool)arg1;
- (id)bookmarksBarList;
- (id)rootList;
- (id)listWithID:(unsigned int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(_Bool)arg3;
- (id)listWithID:(unsigned int)arg1 skipOffset:(unsigned int)arg2;
- (id)listWithSpecialID:(unsigned int)arg1;
- (id)listWithID:(unsigned int)arg1;
- (id)subfoldersOfID:(unsigned int)arg1;
- (id)rootBookmark;
- (id)bookmarkAtPath:(id)arg1;
- (id)webFilterWhiteListFolder;
- (id)readingListFolder;
- (id)bookmarksBarBookmark;
- (id)bookmarkWithUUID:(id)arg1;
- (id)bookmarkWithID:(unsigned int)arg1;
- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;
- (id)purgeableReadingListItems;
- (void)localeSettingsChanged;
- (_Bool)vacuum;
- (_Bool)markWebContentFilterAllowsAllReadingListItems;
- (_Bool)updateReadingListWebFilterStatusForUnsetItemsOnly:(_Bool)arg1;
- (_Bool)clearReadingListArchiveWithUUID:(id)arg1;
- (_Bool)clearAllReadingListArchives;
- (_Bool)markArchivedReadingListItemsAsNonRecoverable;
- (_Bool)cleanupReadingListArchives;
- (void)dealloc;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(_Bool)arg4;
- (_Bool)_openDatabaseAtPath:(id)arg1 checkIntegrity:(_Bool)arg2 error:(id *)arg3;
- (id)initSafariBookmarkCollectionCheckingIntegrity:(_Bool)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 checkIntegrity:(_Bool)arg2;
- (_Bool)containsOnlyStockBookmarks;
- (void)rollbackSyncTransaction;
- (void)commitSyncTransaction;
- (_Bool)beginSyncTransaction;
- (id)syncDataForKey:(id)arg1;
- (_Bool)setSyncData:(id)arg1 forKey:(id)arg2;
- (id)syncStringForKey:(id)arg1;
- (_Bool)syncSetString:(id)arg1 forKey:(id)arg2;
- (_Bool)_deleteSyncPropertyForKey:(id)arg1;
- (_Bool)_syncPropertyExistsForKey:(id)arg1;
- (unsigned long long)generation;
- (_Bool)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_markSpecialBookmarks;
- (_Bool)_mergeChildrenOfID:(unsigned int)arg1 referencingBase:(id)arg2 error:(id *)arg3;
- (_Bool)_syncAdd:(id)arg1 toParent:(unsigned int)arg2 withOrderIndex:(unsigned int)arg3 error:(id *)arg4;
- (id)bookmarksDictionary;
- (_Bool)_addChildrenOfID:(unsigned int)arg1 toCollection:(id)arg2 recursive:(_Bool)arg3 error:(id *)arg4;
- (id)_bookmarkDictionaryForSqliteRow:(struct sqlite3_stmt *)arg1 recursive:(_Bool)arg2 error:(id *)arg3;

@end
