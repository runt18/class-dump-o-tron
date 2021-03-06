//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZAbstractToolExecutor.h"

@class NSDictionary, NSString;

@interface FirenzeArchiveExpander : MZAbstractToolExecutor
{
    NSString *_path;
    NSString *_extractionPath;
    NSString *_rawOutput;
    NSDictionary *_output;
}

+ (void)initialize;
- (id)archivePath;
- (id)output;
- (void)processExitCode:(id)arg1;
- (id)parseOutput:(id)arg1;
- (id)parseXMLString:(id)arg1;
- (id)taskWithError:(id *)arg1;
- (id)destinationDirectoryWithError:(id *)arg1;
- (void)dealloc;
- (void)cleanupDestinationDirectory;
- (id)extractionPath;
- (id)initWithArchivePath:(id)arg1;

@end

