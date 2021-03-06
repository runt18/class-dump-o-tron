//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSBundleController.h"

@class MCProfileInfo, NSArray, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface MCUIBundleController : PSBundleController
{
    MCProfileInfo *_mdmProfileInfo;
    NSArray *_configProfilesInfo;
    PSListController *_parentController;
    PSSpecifier *_specifier;
}

+ (id)provisioningProfiles;
+ (id)provisioningProfilesWithValidityCheck:(_Bool)arg1;
+ (id)configurationProfiles;
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(nonatomic) __weak PSListController *parentController; // @synthesize parentController=_parentController;
@property(retain, nonatomic, setter=_setConfigProfilesInfo:) NSArray *_configProfilesInfo; // @synthesize _configProfilesInfo;
@property(retain, nonatomic, setter=_setMDMProfileInfo:) MCProfileInfo *_mdmProfileInfo; // @synthesize _mdmProfileInfo;
- (void).cxx_destruct;
- (void)_reloadAllProfilesInBackground;
- (void)_updateUIWithNewProfileList;
- (id)specifiersWithSpecifier:(id)arg1;
- (void)_updateSpecifierControllerClass;
- (void)_updateSpecifierProfileInfo;
- (id)_profileInfoForSpecifier:(id)arg1;
- (Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)arg1;
- (unsigned long long)_profileCount;
- (id)_specifier;
- (void)unload;
- (void)load;
- (void)dealloc;
- (id)initWithParentListController:(id)arg1;
- (void)_configurationProfilesChanged:(id)arg1;

@end

