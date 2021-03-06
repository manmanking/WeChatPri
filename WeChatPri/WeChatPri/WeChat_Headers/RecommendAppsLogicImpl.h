//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface RecommendAppsLogicImpl : MMObject <PBMessageObserverDelegate>
{
    NSArray *_recommendAppsList;
    NSMutableArray *_tempList;
    _Bool _isUpdating;
    _Bool _isGettingIcon;
    NSMutableDictionary *_updateIconDic;
    unsigned int _lastUpdateTime;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)handleGetAppIconRsp:(id)arg1;
- (void)handleNotShowNewLogic;
- (void)handleUpdateRecommendAppsListWithOffsetResp:(id)arg1;
- (void)addNewItemToUpdateIconDicAndStartUpdate;
- (_Bool)makeUrlRequest:(id)arg1 userData:(id)arg2;
- (void)getAppIcon:(id)arg1 appID:(id)arg2;
- (void)checkAndUpdateAppIcon;
- (void)clearRcmApps;
- (void)setRecommendAppNotShowNew:(id)arg1;
- (id)GetPathOfRecommendAppIcon:(id)arg1 IconUrl:(id)arg2;
- (void)saveRecommendAppsList;
- (void)loadRecommendAppsListFromFile;
- (id)getAppInfoDataRootDir;
- (_Bool)updateRecommendAppsListWithOffset:(unsigned int)arg1;
- (_Bool)updateRecommendAppsList;
- (id)getRecommendAppsList;
- (void)dealloc;
- (id)init;

@end

