//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@interface _NSConstantDictionaryEnumerator : NSEnumerator
{
    id *currentKey;
    unsigned long long capacity;
    unsigned long long keyIndex;
}

- (id)nextObject;
- (id)allObjects;
- (id)initWithFirstKeyPointer:(id *)arg1 capacity:(unsigned long long)arg2;

@end
