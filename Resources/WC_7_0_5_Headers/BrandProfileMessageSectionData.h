//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BrandProfileBaseSectionData.h"

@class NSMutableArray, NSString;

@interface BrandProfileMessageSectionData : BrandProfileBaseSectionData
{
    NSString *_publishTimeStr;
    _Bool _isTopItemShowLargeCover;
    unsigned int _groupMsgID;
    unsigned int _groupMsgIndex;
    unsigned int _publishTime;
    NSMutableArray *_viewModelList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int groupMsgID; // @synthesize groupMsgID=_groupMsgID;
@property(nonatomic) unsigned int groupMsgIndex; // @synthesize groupMsgIndex=_groupMsgIndex;
- (double)heightForHeaderInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (id)initWithSectionWidth:(double)arg1;
@property(nonatomic) _Bool isTopItemShowLargeCover; // @synthesize isTopItemShowLargeCover=_isTopItemShowLargeCover;
- (long long)numberOfRowsInSection;
@property(nonatomic) unsigned int publishTime; // @synthesize publishTime=_publishTime;
@property(readonly, nonatomic) NSString *publishTimeStr; // @synthesize publishTimeStr=_publishTimeStr;
- (unsigned long long)sectionType;
@property(readonly, nonatomic) NSMutableArray *viewModelList; // @synthesize viewModelList=_viewModelList;

@end

