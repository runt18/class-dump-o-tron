//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBDocument.h"

@interface IBDocument (IBDocumentCocoaTouchIntegration)
+ (id)keyPathsForValuesAffectingCocoaTouchTargetRuntime;
+ (id)keyPathsForValuesAffectingBaseInheritedScreenMetrics;
+ (id)keyPathsForValuesAffectingDefaultUISimulatedMetricsContainer;
+ (BOOL)wantsWindowInLibrary;
+ (BOOL)wantsProxyObjectInLibrary;
- (id)viewControllerRepresentativeForObject:(id)arg1;
- (void)prepareToBackwardsDeployToIOS7;
- (void)unarchiveCocoaTouchDataWithDocumentUnarchiver:(id)arg1;
- (void)archiveCocoaTouchDataWithDocumentArchiver:(id)arg1;
- (BOOL)isNonExistentAtRuntimePlaceholder:(id)arg1;
- (long long)lastSavedPluginVersion;
- (id)cocoaTouchTargetRuntime;
- (void)populateAdditionalTargetOSVersionsForCompilation:(id)arg1;
- (BOOL)canTargetCurrentOSVersion;
- (BOOL)canTargetIOS7;
- (BOOL)canTargetIOSVersionsPriorToSeven;
- (BOOL)isCocoaTouchDocument;
- (void)setBaseInheritedScreenMetrics:(id)arg1 orientationMetrics:(id)arg2;
- (id)defaultUISimulatedMetricsContainer;
@end
