//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/__UINavigationBarAccessibility_super.h>

@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityAnnotateFakeBackButton;
- (void)_accessibilityLoadAccessibilityInformation;
- (_Bool)accessibilityPerformEscape;
- (_Bool)_canHandleStatusBarMouseEvents:(struct __GSEvent *)arg1;
- (void)_setLeftViews:(id)arg1 rightViews:(id)arg2;
- (void)layoutSubviews;
- (id)popNavigationItemAnimated:(_Bool)arg1;
- (void)popNavigationItem;
- (void)_navBarButtonPressed:(id)arg1;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)shouldGroupAccessibilityChildren;
- (id)_accessibilityFuzzyHitTestElements;
- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;

@end
