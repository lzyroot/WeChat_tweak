//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString, WxaLocation;

@interface SearchWxaRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int begId; // @dynamic begId;
@property(nonatomic) _Bool isHomePage; // @dynamic isHomePage;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) unsigned long long scene; // @dynamic scene;
@property(nonatomic) unsigned long long searchId; // @dynamic searchId;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(retain, nonatomic) WxaLocation *wxaLocation; // @dynamic wxaLocation;

@end

