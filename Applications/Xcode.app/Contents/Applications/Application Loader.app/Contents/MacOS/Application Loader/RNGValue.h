//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RNGAbstractElement.h"

#import "RNGValidation.h"

@class NSString;

@interface RNGValue : RNGAbstractElement <RNGValidation>
{
    NSString *_type;
    NSString *_value;
}

- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)validateObject:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setType:(id)arg1;
- (id)type;
- (void)dealloc;
- (id)init;

@end

