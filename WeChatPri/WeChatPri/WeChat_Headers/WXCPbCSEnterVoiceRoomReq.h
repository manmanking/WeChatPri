//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSString, WXCPbVoipRelayData;

@interface WXCPbCSEnterVoiceRoomReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WXCPbVoipRelayData *capInfo; // @dynamic capInfo;
@property(nonatomic) int enterType; // @dynamic enterType;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) int roomid; // @dynamic roomid;
@property(nonatomic) long long roomkey; // @dynamic roomkey;
@property(nonatomic) unsigned int userAbility; // @dynamic userAbility;

@end

