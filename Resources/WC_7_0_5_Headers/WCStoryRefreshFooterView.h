//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMRefreshTableFooterView.h"

@class NSString, UIActivityIndicatorView, UIColor, UIFont, UILabel, UIView;

@interface WCStoryRefreshFooterView : MMRefreshTableFooterView
{
    _Bool _centerAlignLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
    UIView *_endView;
    double _lineViewWidth;
    double _lineViewHeight;
    NSString *_normalText;
    NSString *_loadingText;
    UIColor *_textColor;
    UIFont *_textFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool centerAlignLabel; // @synthesize centerAlignLabel=_centerAlignLabel;
@property(retain, nonatomic) UIView *endView; // @synthesize endView=_endView;
- (void)fitIPadClassicStyle;
- (int)getStatus;
- (id)initWhiteLoadingWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 whiteLoading:(_Bool)arg2;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
@property(nonatomic) double lineViewHeight; // @synthesize lineViewHeight=_lineViewHeight;
@property(nonatomic) double lineViewWidth; // @synthesize lineViewWidth=_lineViewWidth;
@property(copy, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(copy, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
- (void)onStateOfLoading;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfNormal;
- (void)resetStatus:(int)arg1;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
- (void)useMMSettingStyle;

@end

