//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTMacroDefinitionConditionSet, DVTMacroDefinitionTable, NSString;

@protocol XCConfigurationListOwners <NSObject>
- (void)macroDefinitionTable:(DVTMacroDefinitionTable *)arg1 didSetValue:(id <DVTMacroExpansion>)arg2 forMacroName:(NSString *)arg3 conditionSet:(DVTMacroDefinitionConditionSet *)arg4;
- (void)macroDefinitionTable:(DVTMacroDefinitionTable *)arg1 willSetValue:(id <DVTMacroExpansion>)arg2 forMacroName:(NSString *)arg3 conditionSet:(DVTMacroDefinitionConditionSet *)arg4;
- (void)discardCachedPropertyInfoContextForConfigurationNamed:(NSString *)arg1;
- (void)noteBuildSettingsDidChangeForConfigurationNamed:(NSString *)arg1;
- (NSString *)configurationTableDebugLabel;
- (NSString *)name;
@end
