//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface IBInsetWrapper : NSObject <NSCoding>
{
    double top;
    double bottom;
    double left;
    double right;
}

+ (id)insetWrapperWithUIInset:(struct UIEdgeInsets)arg1;
+ (id)insetWrapperWithIBInset:(CDStruct_c519178c)arg1;
+ (id)zeroInset;
- (id)description;
- (struct UIEdgeInsets)uiInsetValue;
- (CDStruct_c519178c)ibInsetValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(double)arg1 bottom:(double)arg2 left:(double)arg3 right:(double)arg4;

@end
