//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EditImageAnimatedWidgetTool.h"

@class NSString, UIImageView;

@interface EditImageAnimatedEmoticonTool : EditImageAnimatedWidgetTool
{
    UIImageView *m_imageView;
    NSString *m_emoticonMd5;
    double _imageScale;
}

- (void).cxx_destruct;
- (void)didSelectEmoticonMd5:(id)arg1;
@property(readonly, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=m_emoticonMd5;
- (id)exportAnimatedLayerWithTimingObject:(id)arg1;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
- (_Bool)startEditingText;
- (double)widgetHeight;
- (double)widgetWidth;

@end

