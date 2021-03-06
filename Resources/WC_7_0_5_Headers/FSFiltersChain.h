//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FSImageWrapFilter.h"

@class NSMutableArray;

@interface FSFiltersChain : FSImageWrapFilter
{
    NSMutableArray *_filterList;
}

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)cleanFilters;
@property(retain, nonatomic) NSMutableArray *filterList; // @synthesize filterList=_filterList;
- (id)filtersChain;
- (id)framebufferForOutput;
- (id)imageFromCurrentFramebuffer;
- (id)imageFromCurrentFramebufferWithOrientation:(long long)arg1;
- (id)init;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)useNextFrameForImageCapture;

@end

