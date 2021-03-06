//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCFaceOffElement, MCMeshSingleItem, MCStickerInputTextureProvider, NSArray, NSString;

@interface MCFaceFeatureElement : NSObject
{
    NSString *_elementID;
    MCFaceOffElement *_faceOffElement;
    MCMeshSingleItem *_meshItem;
    long long _anchorPointIndex;
    double _scale;
    double _angle;
    NSArray *_elements;
    MCStickerInputTextureProvider *_textureProvider;
}

- (void).cxx_destruct;
@property(nonatomic) long long anchorPointIndex; // @synthesize anchorPointIndex=_anchorPointIndex;
@property(nonatomic) double angle; // @synthesize angle=_angle;
- (void)clearResource;
- (void)clearResourceParamsAfterRender;
@property(copy, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;
@property(retain, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) MCFaceOffElement *faceOffElement; // @synthesize faceOffElement=_faceOffElement;
- (id)initWithDic:(id)arg1 meshElement:(id)arg2 item:(id)arg3;
@property(retain, nonatomic) MCMeshSingleItem *meshItem; // @synthesize meshItem=_meshItem;
- (void)preloadResource;
- (void)prepareResourceParamsBeforeRender;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) MCStickerInputTextureProvider *textureProvider; // @synthesize textureProvider=_textureProvider;
- (void)updateRenderSize:(struct CGSize)arg1;

@end

