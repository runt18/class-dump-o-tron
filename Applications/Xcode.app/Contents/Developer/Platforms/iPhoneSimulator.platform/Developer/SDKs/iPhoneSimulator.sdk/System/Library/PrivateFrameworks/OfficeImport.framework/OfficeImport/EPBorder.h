//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDBorder.h>

__attribute__((visibility("hidden")))
@interface EPBorder : EDBorder
{
    unsigned long long mPrecedence;
}

+ (id)borderWithBorder:(id)arg1 precedence:(unsigned long long)arg2 resources:(id)arg3;
- (unsigned long long)precedence;
- (_Bool)isEqualToBorder:(id)arg1;
- (id)initWithBorder:(id)arg1 precedence:(unsigned long long)arg2 resources:(id)arg3;

@end

