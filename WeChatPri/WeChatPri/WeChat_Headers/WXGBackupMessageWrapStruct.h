//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BakChatMsgItem, NSArray;

@interface WXGBackupMessageWrapStruct : NSObject
{
    BakChatMsgItem *_bakchatMsgItem;
    NSArray *_mediaArray;
    long long _msgSvrID;
}

@property(nonatomic) long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(retain, nonatomic) NSArray *mediaArray; // @synthesize mediaArray=_mediaArray;
@property(retain, nonatomic) BakChatMsgItem *bakchatMsgItem; // @synthesize bakchatMsgItem=_bakchatMsgItem;
- (void).cxx_destruct;

@end

