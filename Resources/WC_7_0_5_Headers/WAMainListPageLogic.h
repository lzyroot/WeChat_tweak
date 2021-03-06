//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WAAppItemManagerExtension.h"

@class NSMutableArray, NSString;

@interface WAMainListPageLogic : MMObject <WAAppItemManagerExtension>
{
    _Bool _hasNoMore;
    _Bool _needStarData;
    unsigned int _currentPageNum;
    unsigned int _previousPageUpdateTimeOfLastLoacalWAAppItem;
    unsigned int _currentUpdateTimeOfLastLocalWAAppItem;
    unsigned int _updateTimeOfLastRemoteWAAppItem;
    NSMutableArray *_historyItems;
    id <WAMainListPageLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(nonatomic) unsigned int currentUpdateTimeOfLastLocalWAAppItem; // @synthesize currentUpdateTimeOfLastLocalWAAppItem=_currentUpdateTimeOfLastLocalWAAppItem;
- (void)dealloc;
@property(nonatomic) __weak id <WAMainListPageLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)deleteHistoryItem:(id)arg1;
- (void)fetchNextPageItems;
- (id)fetchNextPageLocalData;
- (_Bool)hasHistoryData;
@property(readonly, nonatomic) _Bool hasNoMore; // @synthesize hasNoMore=_hasNoMore;
@property(retain, nonatomic) NSMutableArray *historyItems; // @synthesize historyItems=_historyItems;
- (id)initWithNeedStarData:(_Bool)arg1;
- (_Bool)insertHistoryItemAtTop:(id)arg1;
@property(nonatomic) _Bool needStarData; // @synthesize needStarData=_needStarData;
- (void)onWeAppItemsInfoUpdatedErrorWithErrorCode:(int)arg1 scene:(unsigned int)arg2;
- (void)onWeAppItemsInfoUpdatedWithAPageItem:(id)arg1 localLastUpdateTime:(unsigned int)arg2 remoteLastUpdateTime:(unsigned int)arg3 hasMore:(_Bool)arg4 scene:(unsigned int)arg5;
@property(nonatomic) unsigned int previousPageUpdateTimeOfLastLoacalWAAppItem; // @synthesize previousPageUpdateTimeOfLastLoacalWAAppItem=_previousPageUpdateTimeOfLastLoacalWAAppItem;
- (void)registerExtensions;
- (_Bool)removeHistoryItem:(id)arg1;
@property(nonatomic) unsigned int updateTimeOfLastRemoteWAAppItem; // @synthesize updateTimeOfLastRemoteWAAppItem=_updateTimeOfLastRemoteWAAppItem;
- (void)unregisterExtensions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

