//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface MMBadgeView : UIImageView
{
    struct CGPoint pOriginPoint;
    double fAddedWidth;
    double fOriginWidth;
    _Bool isIpadClassic;
    double m_range;
}

- (void)CustomTag:(id)arg1 imageName:(id)arg2;
@property(nonatomic) double fAddedWidth; // @synthesize fAddedWidth;
- (id)initIpadClassicWithFrame:(struct CGRect)arg1;
- (id)initIpadClassicWithFrame:(struct CGRect)arg1 andRange:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 ipadClassic:(_Bool)arg2 range:(double)arg3;
- (_Bool)isNeedMoveY:(id)arg1;
- (_Bool)isPureNumandCharacters:(id)arg1;
- (id)labelView;
@property(nonatomic) struct CGPoint pOriginPoint; // @synthesize pOriginPoint;
- (void)setImage:(id)arg1;
- (void)setString:(id)arg1;
- (void)setStringImage:(_Bool)arg1;
- (void)setUpView;
- (void)setValue:(unsigned long long)arg1;

@end

