//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PSSpecifier, UIAlertView, VoiceOverBluetoothDevice;

__attribute__((visibility("hidden")))
@interface VoiceOverBluetoothSSPPairingRequest : NSObject
{
    VoiceOverBluetoothDevice *_device;
    PSSpecifier *_specifier;
    UIAlertView *_alert;
    id _delegate;
    int _pairingStyle;
}

- (void)hidPairingResult:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dismiss;
- (void)show;
- (void)setPairingStyle:(int)arg1 andPasskey:(id)arg2;
- (int)pairingStyle;
- (id)_sanitizeNameForAlert:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 andSpecifier:(id)arg2;

@end
