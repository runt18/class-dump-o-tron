//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRTraceFlag.h>

#import "XRSymbolSourceProxy.h"

@class NSDictionary, NSString;

@interface XRSymbolSourceFlag : XRTraceFlag <XRSymbolSourceProxy>
{
    id <NSCoding><NSObject> _symbol;
    NSDictionary *_callTreeInformation;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)processIdentifier;
- (id)callTreeInformation;
- (id)concreteSymbol;
- (id)symbol;
- (id)initWithSymbol:(id)arg1 callTreeInformation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

