//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QPolylineView.h"

@class NSArray, UIColor, UIImage;

@interface QTexturePolylineView : QPolylineView
{
    _Bool _drawSymbol;
    long long _drawType;
    NSArray *_segmentColor;
    UIImage *_styleTextureImage;
    NSArray *_segmentStyle;
    UIImage *_symbolImage;
    double _symbolGap;
    UIColor *_eraseColor;
    double _footprintStep;
}

- (void).cxx_destruct;
- (void)clearTurnArrow;
@property(nonatomic) long long drawType; // @synthesize drawType=_drawType;
@property(retain, nonatomic) UIColor *eraseColor; // @synthesize eraseColor=_eraseColor;
- (void)eraseFromStartToCurrentPoint:(struct CLLocationCoordinate2D)arg1 searchFrom:(int)arg2 toColor:(_Bool)arg3;
@property(nonatomic) double footprintStep; // @synthesize footprintStep=_footprintStep;
- (id)initWithPolyline:(id)arg1;
@property(nonatomic, getter=isDrawSymbol) _Bool drawSymbol; // @synthesize drawSymbol=_drawSymbol;
@property(copy, nonatomic) NSArray *segmentColor; // @synthesize segmentColor=_segmentColor;
@property(copy, nonatomic) NSArray *segmentStyle; // @synthesize segmentStyle=_segmentStyle;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
@property(retain, nonatomic) UIImage *styleTextureImage; // @synthesize styleTextureImage=_styleTextureImage;
@property(nonatomic) double symbolGap; // @synthesize symbolGap=_symbolGap;
@property(retain, nonatomic) UIImage *symbolImage; // @synthesize symbolImage=_symbolImage;
- (void)setTurnArrowAtSegmentIndex:(int)arg1;
- (void)setTurnArrowColor:(id)arg1 borderColor:(id)arg2;

@end

