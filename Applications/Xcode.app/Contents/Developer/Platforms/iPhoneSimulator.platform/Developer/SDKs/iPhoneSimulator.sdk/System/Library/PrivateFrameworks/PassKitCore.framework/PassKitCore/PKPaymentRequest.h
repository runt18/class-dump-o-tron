//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSString;

@interface PKPaymentRequest : NSObject <NSSecureCoding>
{
    NSString *_merchantIdentifier;
    NSString *_countryCode;
    NSArray *_supportedNetworks;
    unsigned long long _merchantCapabilities;
    NSArray *_paymentSummaryItems;
    NSString *_currencyCode;
    unsigned long long _requiredBillingAddressFields;
    void *_billingAddress;
    unsigned long long _requiredShippingAddressFields;
    void *_shippingAddress;
    NSArray *_shippingMethods;
    NSData *_applicationData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(copy, nonatomic) NSArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(nonatomic) void *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(nonatomic) unsigned long long requiredShippingAddressFields; // @synthesize requiredShippingAddressFields=_requiredShippingAddressFields;
@property(nonatomic) void *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(nonatomic) unsigned long long requiredBillingAddressFields; // @synthesize requiredBillingAddressFields=_requiredBillingAddressFields;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property(nonatomic) unsigned long long merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(copy, nonatomic) NSArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (id)_transactionAmount;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

