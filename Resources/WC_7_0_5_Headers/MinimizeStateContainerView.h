//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableDictionary;

@interface MinimizeStateContainerView : UIView
{
    NSMutableDictionary *_dicPassiveState2CacheView;
    NSArray *_stateViewList;
}

- (void).cxx_destruct;
- (void)animateUpdateWithStateList:(id)arg1 duration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableDictionary *dicPassiveState2CacheView; // @synthesize dicPassiveState2CacheView=_dicPassiveState2CacheView;
- (id)genStateViewList:(id)arg1;
- (id)getPassiveStateView:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)passiveStateCacheKey:(unsigned int)arg1;
@property(retain, nonatomic) NSArray *stateViewList; // @synthesize stateViewList=_stateViewList;
- (void)updateWithStateList:(id)arg1;

@end

