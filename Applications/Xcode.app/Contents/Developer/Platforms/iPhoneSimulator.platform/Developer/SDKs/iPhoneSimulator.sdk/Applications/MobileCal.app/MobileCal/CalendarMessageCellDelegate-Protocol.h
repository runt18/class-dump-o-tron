//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalendarMessageCell, EKEventStore, NSString;

@protocol CalendarMessageCellDelegate <NSObject>
- (void)messageCell:(CalendarMessageCell *)arg1 committedComment:(NSString *)arg2;
- (EKEventStore *)eventStoreForCell:(CalendarMessageCell *)arg1;
- (void)performAction:(long long)arg1 forCell:(CalendarMessageCell *)arg2;
@end
