//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCBuildCommandResultsPostprocessor.h>

@interface XCClangResultsPostprocessor : XCBuildCommandResultsPostprocessor
{
}

+ (id)clangResultsPostprocessorLogAspect;
- (void)postprocessResultsForCommandInvocation:(id)arg1;
- (BOOL)shouldAddDiagnostic:(id)arg1 toLogSectionRecorder:(id)arg2;
- (void)generateDiagnosticsFromFile:(id)arg1 logSectionRecorder:(id)arg2;
- (id)messageCategoryInfoBySeverity;

@end
