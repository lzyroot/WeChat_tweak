//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPlayer, NSArray, NSOperationQueue, NSString, TTGPUImageLayer, TTGPUImageLayerFilter;

@interface MCSegmentMVModel : NSObject
{
    _Bool _audioMute;
    _Bool _ignoreBackground;
    _Bool _prepared;
    NSArray *_mvParts;
    long long _currentPartIndex;
    double _pauseFlag;
    double _duration;
    AVAudioPlayer *_bgmAudio;
    NSOperationQueue *_audioProcessingQueue;
    long long _audioPauseStack;
    NSString *_templateDir;
    double _lastAdvanceTime;
    double _advancedTime;
    long long _actionTriggerCount;
    TTGPUImageLayer *_canvasNode;
    TTGPUImageLayer *_fromPartNode;
    TTGPUImageLayer *_toPartContainerNode;
    TTGPUImageLayer *_toPartNode;
    TTGPUImageLayerFilter *_nodeRenderFilter;
}

- (void).cxx_destruct;
@property(nonatomic) long long actionTriggerCount; // @synthesize actionTriggerCount=_actionTriggerCount;
- (void)advanceTime;
@property(nonatomic) double advancedTime; // @synthesize advancedTime=_advancedTime;
@property(nonatomic) _Bool audioMute; // @synthesize audioMute=_audioMute;
@property long long audioPauseStack; // @synthesize audioPauseStack=_audioPauseStack;
@property(retain, nonatomic) NSOperationQueue *audioProcessingQueue; // @synthesize audioProcessingQueue=_audioProcessingQueue;
@property(retain, nonatomic) AVAudioPlayer *bgmAudio; // @synthesize bgmAudio=_bgmAudio;
@property(retain, nonatomic) TTGPUImageLayer *canvasNode; // @synthesize canvasNode=_canvasNode;
- (void)createNodes:(struct CGSize)arg1;
@property(nonatomic) long long currentPartIndex; // @synthesize currentPartIndex=_currentPartIndex;
- (void)dealloc;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) TTGPUImageLayer *fromPartNode; // @synthesize fromPartNode=_fromPartNode;
@property(nonatomic) _Bool ignoreBackground; // @synthesize ignoreBackground=_ignoreBackground;
- (id)initWithDictionary:(id)arg1 templateDir:(id)arg2;
- (id)initWithJsonFile:(id)arg1;
@property double lastAdvanceTime; // @synthesize lastAdvanceTime=_lastAdvanceTime;
@property(retain, nonatomic) NSArray *mvParts; // @synthesize mvParts=_mvParts;
@property(retain, nonatomic) TTGPUImageLayerFilter *nodeRenderFilter; // @synthesize nodeRenderFilter=_nodeRenderFilter;
- (void)parseTemplateDictionary:(id)arg1 templateDir:(id)arg2;
- (void)pauseAudio;
@property double pauseFlag; // @synthesize pauseFlag=_pauseFlag;
- (void)pauseTime;
- (void)prepare;
- (void)prepareProcessNextCameraFrameParams:(CDStruct_1b6d18a9)arg1;
@property _Bool prepared; // @synthesize prepared=_prepared;
- (void)processBgmAudio;
- (id)processCameraFrame:(id)arg1 backgroundFrame:(id)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
- (id)processCameraFrames:(id)arg1 backgroundFrame:(id)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
- (id)processCameraFramesDic:(id)arg1 backgroundFrame:(id)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
- (void)processFaceAction:(long long)arg1;
- (id)processMVTransitionFromPart:(id)arg1 toPart:(id)arg2 withCameraFrame:(id)arg3 backgroundFrame:(id)arg4;
- (id)processMVTransitionFromPart:(id)arg1 toPart:(id)arg2 withCameraFrames:(id)arg3 backgroundFrame:(id)arg4;
- (void)reset;
- (void)resumeTime;
@property(copy, nonatomic) NSString *templateDir; // @synthesize templateDir=_templateDir;
@property(retain, nonatomic) TTGPUImageLayer *toPartContainerNode; // @synthesize toPartContainerNode=_toPartContainerNode;
@property(retain, nonatomic) TTGPUImageLayer *toPartNode; // @synthesize toPartNode=_toPartNode;
@property(readonly, nonatomic) _Bool shouldRenderOriginBackground;
- (void)stopAudio;
- (void)stopAudio:(long long)arg1;
- (void)stopReading;

@end

