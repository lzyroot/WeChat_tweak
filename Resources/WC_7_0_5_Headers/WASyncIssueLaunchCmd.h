//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WASyncBaseCmd.h"

@class NSMutableArray, NSString;

@interface WASyncIssueLaunchCmd : WASyncBaseCmd
{
    unsigned int _useBeginTime;
    unsigned int _useEndTime;
    NSString *_launchInfoString;
    NSMutableArray *_sceneList;
}

- (void).cxx_destruct;
- (id)description;
@property(copy, nonatomic) NSString *launchInfoString; // @synthesize launchInfoString=_launchInfoString;
@property(retain, nonatomic) NSMutableArray *sceneList; // @synthesize sceneList=_sceneList;
@property(nonatomic) unsigned int useBeginTime; // @synthesize useBeginTime=_useBeginTime;
@property(nonatomic) unsigned int useEndTime; // @synthesize useEndTime=_useEndTime;

@end

