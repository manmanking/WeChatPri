//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMMQRCodeExt <NSObject>

@optional
- (void)onShowAbandonTip:(NSString *)arg1 TipID:(NSString *)arg2 Wording:(NSString *)arg3;
- (void)onRevokeChatroomQRCode:(NSString *)arg1 success:(_Bool)arg2 errTip:(NSString *)arg3;
- (void)onDownloadQRCodeFinish:(NSString *)arg1 FooterWording:(NSString *)arg2;
@end
