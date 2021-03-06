//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTSMessageDB, NSMutableArray, NSMutableDictionary, NSString, SearchMatchTip;

@interface FTSMsgSearchTask : NSObject
{
    NSMutableDictionary *_dicUnIndexMemCache;
    FTSMessageDB *_ftsMessageDB;
    NSMutableArray *_arrResultWrap;
    _Bool _isProtentialTalkerSearch;
    _Bool _isTaskFinish;
    _Bool _hasSearchDone;
    _Bool _hasMoreData;
    _Bool _isCancelled;
    _Bool _isRunning;
    _Bool _hasIndexMsgResult;
    _Bool _hasMemMsgResult;
    _Bool _isSessionRestrictFirst;
    int _taskType;
    int _resultType;
    unsigned int _pageCount;
    id <FTSMsgSearchTaskDelegate> _delegate;
    NSString *_newestQueryText;
    NSString *_lastQueryText;
    NSMutableArray *_arrLastQueryTerm;
    NSString *_parsedTalkerFromQuery;
    NSString *_parsedQueryFromQuery;
    NSString *_restrictSessionUsrname;
    NSString *_restrictTalkerUsrname;
    NSString *_restrictTalkerSearchText;
    NSString *_restrictContextRealSearchText;
    SearchMatchTip *_restrictTalkerMatchTip;
}

- (void).cxx_destruct;
- (void)appendResult:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *arrLastQueryTerm; // @synthesize arrLastQueryTerm=_arrLastQueryTerm;
- (void)asynSearch:(id)arg1 appendMode:(_Bool)arg2;
- (void)asynSearch:(id)arg1 fastResult:(_Bool)arg2;
- (void)asynSearch:(id)arg1 fastResult:(_Bool)arg2 appendMode:(_Bool)arg3;
- (unsigned int)calAllMemMsgCount;
- (void)cancel;
- (_Bool)checkValid:(id)arg1;
- (id)classifyMsgItems:(id)arg1;
- (_Bool)compareTrimText:(id)arg1 to:(id)arg2;
- (int)convertPageType;
@property(nonatomic) __weak id <FTSMsgSearchTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endSearch:(id)arg1;
- (id)filterMsgItemsOrderly:(id)arg1;
- (id)getArrSearchResultWrap;
- (id)getMatchedExistResultWrapAs:(id)arg1;
- (id)getMsgItem;
- (id)getSearchResult;
- (id)getSessionDic;
- (id)getSessionMsgItemsForindex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasIndexMsgResult; // @synthesize hasIndexMsgResult=_hasIndexMsgResult;
@property(readonly, nonatomic) _Bool hasMemMsgResult; // @synthesize hasMemMsgResult=_hasMemMsgResult;
@property(readonly, nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(readonly, nonatomic) _Bool hasSearchDone; // @synthesize hasSearchDone=_hasSearchDone;
- (void)initData;
- (id)initWithDB:(id)arg1;
- (void)internalSearch:(id)arg1 searchBarText:(id)arg2 taskInfo:(id)arg3;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (_Bool)isInChatRoomSessionRestrictSearch;
- (_Bool)isInRestrictSearch;
- (_Bool)isInSessionRestrictSearch;
- (_Bool)isInTalkerRestrictSearch;
- (_Bool)isNotSupportAppendMode;
@property(readonly, nonatomic, getter=isProtentialTalkerSearch) _Bool isProtentialTalkerSearch;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool isSessionRestrictFirst; // @synthesize isSessionRestrictFirst=_isSessionRestrictFirst;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
- (id)memSearch:(id)arg1 realSearchText:(id)arg2 limitUsrname:(id)arg3 limit:(unsigned int)arg4 searchAll:(_Bool *)arg5;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(nonatomic) unsigned int pageCount; // @synthesize pageCount=_pageCount;
@property(readonly, nonatomic) NSString *parsedQueryFromQuery; // @synthesize parsedQueryFromQuery=_parsedQueryFromQuery;
@property(readonly, nonatomic) NSString *parsedTalkerFromQuery; // @synthesize parsedTalkerFromQuery=_parsedTalkerFromQuery;
- (void)prepareSearch;
- (void)resetSearch;
- (void)resetSearchResult;
@property(retain, nonatomic) NSString *restrictContextRealSearchText; // @synthesize restrictContextRealSearchText=_restrictContextRealSearchText;
@property(retain, nonatomic) NSString *restrictSessionUsrname; // @synthesize restrictSessionUsrname=_restrictSessionUsrname;
@property(retain, nonatomic) SearchMatchTip *restrictTalkerMatchTip; // @synthesize restrictTalkerMatchTip=_restrictTalkerMatchTip;
@property(retain, nonatomic) NSString *restrictTalkerSearchText; // @synthesize restrictTalkerSearchText=_restrictTalkerSearchText;
@property(retain, nonatomic) NSString *restrictTalkerUsrname; // @synthesize restrictTalkerUsrname=_restrictTalkerUsrname;
@property(readonly, nonatomic) int resultType; // @synthesize resultType=_resultType;
- (void)setMsgMemeroyCache:(id)arg1;
- (void)setResultFromTask:(id)arg1 searchText:(id)arg2;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;

@end

