//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCCanvasComponentPureImageInfo : MMObject <NSCoding>
{
    NSString *_pureImageUrl;
    double _pureImageWidth;
    double _pureImageHeight;
    NSString *_bgColor;
    double _bgColorAlpha;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double bgColorAlpha; // @synthesize bgColorAlpha=_bgColorAlpha;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double pureImageHeight; // @synthesize pureImageHeight=_pureImageHeight;
@property(retain, nonatomic) NSString *pureImageUrl; // @synthesize pureImageUrl=_pureImageUrl;
@property(nonatomic) double pureImageWidth; // @synthesize pureImageWidth=_pureImageWidth;

@end

