//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCPayWalletInfo : NSObject <NSCoding>
{
    _Bool _m_walletSelected;
    unsigned int _m_walletType;
    unsigned int _m_walletBalance;
    unsigned int _m_walletTpaCountryMask;
    NSString *_m_walletName;
    NSString *_m_walletUrl;
    NSString *_m_walletTpaCountry;
}

@property(nonatomic) unsigned int m_walletTpaCountryMask; // @synthesize m_walletTpaCountryMask=_m_walletTpaCountryMask;
@property(nonatomic) unsigned int m_walletBalance; // @synthesize m_walletBalance=_m_walletBalance;
@property(retain, nonatomic) NSString *m_walletTpaCountry; // @synthesize m_walletTpaCountry=_m_walletTpaCountry;
@property(nonatomic) _Bool m_walletSelected; // @synthesize m_walletSelected=_m_walletSelected;
@property(retain, nonatomic) NSString *m_walletUrl; // @synthesize m_walletUrl=_m_walletUrl;
@property(retain, nonatomic) NSString *m_walletName; // @synthesize m_walletName=_m_walletName;
@property(nonatomic) unsigned int m_walletType; // @synthesize m_walletType=_m_walletType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
