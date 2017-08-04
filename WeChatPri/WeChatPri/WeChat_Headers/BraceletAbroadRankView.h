//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ShareViewDelegate-Protocol.h"

@class DeviceRankInfo, NSString, UILabel;
@protocol BraceletAbroadRankViewDelegate><NSObject;

@interface BraceletAbroadRankView : UIView <ShareViewDelegate>
{
    DeviceRankInfo *m_rankInfo;
    UILabel *m_oShareLabel;
    id <BraceletAbroadRankViewDelegate><NSObject> _delegate;
}

@property(nonatomic) __weak id <BraceletAbroadRankViewDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClick;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 DeviceRankInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
