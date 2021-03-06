//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCBaseFilter, MCBaseMultiFilter, MCTmplItemGridMultiOuputFilterGroup, NSArray, NSDate;

@interface MCFilterProvider : NSObject
{
    _Bool _beautyBodyDetect;
    _Bool _hasShowSticker;
    MCBaseMultiFilter *_currentFilter;
    MCBaseFilter *_landscapeFilter;
    NSArray *_faceAnalyzers;
    NSArray *_handBoxes;
    NSArray *_bodyResults;
    MCTmplItemGridMultiOuputFilterGroup *_gridMultiOutputFilter;
    NSArray *_randomGroupList;
    long long _randomGroupTag;
    long long _randomGroupIndex;
    NSArray *_bodyPointsBackUp;
    NSDate *_start;
}

+ (_Bool)deviceSupportYoutuBody;
+ (id)effectFilterAddMenglongStrength:(double)arg1 to:(id)arg2;
+ (id)filterWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2 enableDefaultMesh:(_Bool)arg3 inContainer:(id)arg4;
+ (id)filterWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2 option:(unsigned long long)arg3;
+ (id)filterWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2 option:(unsigned long long)arg3 inContainer:(id)arg4;
+ (id)filterWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2 option:(unsigned long long)arg3 inContainer:(id)arg4 bodyBeautyOption:(unsigned long long)arg5;
+ (id)filterWithTmplMultiViewerElement:(id)arg1 forSuperItem:(id)arg2 faceEditDelegate:(id)arg3 effectFilterHandler:(CDUnknownBlockType)arg4;
+ (id)filtersForMultiViewerElementsInItem:(id)arg1 faceEditDelegate:(id)arg2 effectFilterHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)advanceTime;
@property(nonatomic) _Bool beautyBodyDetect; // @synthesize beautyBodyDetect=_beautyBodyDetect;
@property(retain, nonatomic) NSArray *bodyPointsBackUp; // @synthesize bodyPointsBackUp=_bodyPointsBackUp;
@property(retain, nonatomic) NSArray *bodyResults; // @synthesize bodyResults=_bodyResults;
@property(retain, nonatomic) MCBaseMultiFilter *currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) NSArray *faceAnalyzers; // @synthesize faceAnalyzers=_faceAnalyzers;
- (id)filterWithTmplItem:(id)arg1;
- (id)filterWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2;
- (id)filterWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2 bodyBeautyOptions:(unsigned long long)arg3;
- (id)filterWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2 option:(unsigned long long)arg3;
- (id)filterWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2 option:(unsigned long long)arg3 bodyBeautyOptions:(unsigned long long)arg4;
- (id)generateRandomList:(long long)arg1 excludeFirstNum:(long long)arg2;
@property(retain, nonatomic) MCTmplItemGridMultiOuputFilterGroup *gridMultiOutputFilter; // @synthesize gridMultiOutputFilter=_gridMultiOutputFilter;
@property(retain, nonatomic) NSArray *handBoxes; // @synthesize handBoxes=_handBoxes;
@property(nonatomic) _Bool hasShowSticker; // @synthesize hasShowSticker=_hasShowSticker;
@property(retain, nonatomic) MCBaseFilter *landscapeFilter; // @synthesize landscapeFilter=_landscapeFilter;
- (id)landscapeFilter:(id)arg1;
- (id)multiOutputGroupWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2;
- (id)multiOutputGroupWithTmplItem:(id)arg1 faceEditDelegate:(id)arg2 effectFilterHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) long long randomGroupIndex; // @synthesize randomGroupIndex=_randomGroupIndex;
@property(retain, nonatomic) NSArray *randomGroupList; // @synthesize randomGroupList=_randomGroupList;
@property(nonatomic) long long randomGroupTag; // @synthesize randomGroupTag=_randomGroupTag;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;

@end

