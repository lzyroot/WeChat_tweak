//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPUImageFramebuffer, NSMutableArray;

@interface LKParticleTexture : NSObject
{
    _Bool _premultalpha;
    unsigned int _internalFormat;
    NSMutableArray *_imageData;
    GPUImageFramebuffer *_texBuffer;
    long long _width;
    long long _height;
}

- (void).cxx_destruct;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(retain, nonatomic) NSMutableArray *imageData; // @synthesize imageData=_imageData;
- (id)init;
@property(nonatomic) unsigned int internalFormat; // @synthesize internalFormat=_internalFormat;
- (void)loadFromPath:(id)arg1;
- (void)loadImage:(id)arg1;
- (_Bool)loadKTX:(id)arg1;
- (void)loadPVRTC:(id)arg1;
@property(nonatomic) _Bool premultalpha; // @synthesize premultalpha=_premultalpha;
@property(retain, nonatomic) GPUImageFramebuffer *texBuffer; // @synthesize texBuffer=_texBuffer;
@property(nonatomic) long long width; // @synthesize width=_width;
- (_Bool)unpackPVRData:(id)arg1;

@end

