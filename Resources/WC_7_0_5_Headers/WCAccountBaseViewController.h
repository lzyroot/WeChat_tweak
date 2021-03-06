//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate.h"
#import "WCBaseInfoItemDelegate.h"

@class MMTableViewInfo, NSString, WCAccountControlData;

@interface WCAccountBaseViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    WCAccountControlData *m_data;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)callViewDidLoad;
- (id)getBothSideMarginInputLineView;
- (id)getHeaderTipLabel:(id)arg1;
- (id)getHeaderView:(id)arg1;
- (id)getHeaderView:(id)arg1 Color:(id)arg2;
- (id)getHeaderViewInMainFrame:(id)arg1;
- (id)getInputLineView;
- (id)getNewHeaderView:(id)arg1;
- (void)hideKeyBoard;
- (id)init;
- (void)initData;
- (void)initNavigationBar;
- (void)initView;
- (id)makeHeaderView:(id)arg1;
- (id)makeHeaderViewInMainFrame:(id)arg1;
- (id)makeNewHeaderView:(id)arg1;
- (void)onNext;
- (void)refreshViewWithData:(id)arg1;
- (void)setNavigationLeftBarButtonStyle:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setNavigationRightBarButtonMoreStyleWithtarget:(id)arg1 action:(SEL)arg2;
- (void)setTableFooterView:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)useBlackStyleView;
- (_Bool)useCustomNavibar;
- (_Bool)useGrayBackgroundColor;
- (_Bool)useIpadSytle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

