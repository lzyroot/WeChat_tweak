//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMTimer, UIImage, UIView;

@interface WCStoryReceivedUnreadBubbleHintView : MMUIView
{
    UIView *_redPoint;
    UIImage *_bubbleImage;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *bubbleImage; // @synthesize bubbleImage=_bubbleImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak UIView *redPoint; // @synthesize redPoint=_redPoint;
- (void)setHidden:(_Bool)arg1;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
- (void)setupSubView;
- (void)showAnimationLayerWithStartRect:(struct CGRect)arg1 endRect:(struct CGRect)arg2 startOpacity:(double)arg3 endOpacity:(double)arg4 duration:(double)arg5 image:(id)arg6;
- (void)showOneBubble;
- (void)startAnimation;
- (void)stopAnimation;

@end

