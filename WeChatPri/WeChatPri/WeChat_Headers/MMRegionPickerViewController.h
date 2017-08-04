//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "LocationRetrieveDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LocationRetriever, MMRegionCodeMgr, MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIViewController;
@protocol MMRegionPickerViewControllerDelegate;

@interface MMRegionPickerViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_dataDict;
    NSMutableArray *m_dataAry;
    _Bool m_isInitRegionCode;
    NSString *m_selectedRegionCode;
    MMRegionCodeMgr *m_regionCodeMgr;
    NSArray *arrCurRegionCodes;
    LocationRetriever *_locationRetriever;
    int m_iLocationRetrieveResult;
    NSMutableArray *m_arrServerReturnCode;
    _Bool m_bInCurrent;
    _Bool _isTopLevel;
    UIViewController *topController;
    id <MMRegionPickerViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) NSArray *arrCurRegionCodes; // @synthesize arrCurRegionCodes;
@property(retain, nonatomic) NSString *selectedRegionCode; // @synthesize selectedRegionCode=m_selectedRegionCode;
@property(nonatomic) __weak id <MMRegionPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isTopLevel; // @synthesize isTopLevel=_isTopLevel;
@property(nonatomic) __weak UIViewController *topController; // @synthesize topController;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isLocationSection:(long long)arg1;
- (_Bool)isLocationRetrieving;
- (void)scrollToRegion:(id)arg1;
- (void)OnReturn;
- (void)OnDataChange;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initTableView;
- (void)initData;
- (id)initWithArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
