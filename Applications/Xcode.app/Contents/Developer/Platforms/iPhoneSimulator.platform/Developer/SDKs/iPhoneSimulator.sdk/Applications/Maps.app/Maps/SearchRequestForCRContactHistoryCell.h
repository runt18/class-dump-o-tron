//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchRequestHistoryItemTableViewCell.h"

#import "CoreRecentsHistoryCell.h"

@class CRRecentContact, NSString;

__attribute__((visibility("hidden")))
@interface SearchRequestForCRContactHistoryCell : SearchRequestHistoryItemTableViewCell <CoreRecentsHistoryCell>
{
    CRRecentContact *_recent;
    NSString *_sender;
}

@property(retain, nonatomic) CRRecentContact *recent; // @synthesize recent=_recent;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

