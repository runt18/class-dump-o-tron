//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADTextRun.h>

@class NSString, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADTextField : OADTextRun
{
    OADParagraphProperties *mParagraphProperties;
    NSString *mId;
    NSString *mText;
}

- (void)removeUnnecessaryOverrides;
- (void)setText:(id)arg1;
- (id)text;
- (void)setId:(id)arg1;
- (id)id;
- (id)paragraphProperties;
- (unsigned long long)characterCount;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end
