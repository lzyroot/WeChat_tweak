//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMAuthorizeAddAvatarViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMAuthorizeScopeTopView, MMTableView, MMTipsViewController, NSMutableArray, NSString, OauthScopeInfo, UIButton, UIView;

@interface MMAuthorizeUserInfoViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMAuthorizeAddAvatarViewControllerDelegate, PBMessageObserverDelegate>
{
    _Bool _isBanModifyAvatar;
    _Bool _canAddNewAvatar;
    unsigned int _avatarLimit;
    unsigned int _fromScene;
    unsigned int _sessionId;
    unsigned int _selectedAvatarId;
    unsigned int _defaultAvatarId;
    OauthScopeInfo *_scopeInfo;
    NSString *_appName;
    NSString *_iconUrl;
    id <MMAuthorizeViewControllerDelegate> _delegate;
    NSString *_appId;
    NSMutableArray *_avatarList;
    NSString *_defaultAvatarImgUrl;
    NSString *_defaultAvatarImgFileId;
    MMTableView *_tableView;
    MMAuthorizeScopeTopView *_tableHeaderView;
    UIView *_tableFooterView;
    UIButton *_comfirmBtn;
    UIButton *_denyBtn;
    MMTipsViewController *_tipsVC;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) unsigned int avatarLimit; // @synthesize avatarLimit=_avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @synthesize avatarList=_avatarList;
@property(nonatomic) _Bool canAddNewAvatar; // @synthesize canAddNewAvatar=_canAddNewAvatar;
@property(retain, nonatomic) UIButton *comfirmBtn; // @synthesize comfirmBtn=_comfirmBtn;
- (void)dealloc;
@property(nonatomic) unsigned int defaultAvatarId; // @synthesize defaultAvatarId=_defaultAvatarId;
@property(retain, nonatomic) NSString *defaultAvatarImgFileId; // @synthesize defaultAvatarImgFileId=_defaultAvatarImgFileId;
@property(retain, nonatomic) NSString *defaultAvatarImgUrl; // @synthesize defaultAvatarImgUrl=_defaultAvatarImgUrl;
@property(nonatomic) __weak id <MMAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteAvatar:(id)arg1;
@property(retain, nonatomic) UIButton *denyBtn; // @synthesize denyBtn=_denyBtn;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
- (id)genAddAvatarCell;
- (id)genNoMoreQuotaCell;
- (void)handleDelAvatarResp:(id)arg1;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void)initNavigationBar;
- (void)initSubViews;
- (void)initTableFooterView;
- (void)initTableHeaderView;
- (id)initWithAppName:(id)arg1 appId:(id)arg2 iconUrl:(id)arg3 scopeInfo:(id)arg4 avatarList:(id)arg5 avatarLimit:(unsigned int)arg6 isBanModifyAvatar:(_Bool)arg7 defaultAvatarId:(unsigned int)arg8;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) _Bool isBanModifyAvatar; // @synthesize isBanModifyAvatar=_isBanModifyAvatar;
- (void)layoutTableFooterView;
- (void)layoutTableHeaderView;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddAvatarSuccess:(id)arg1;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (void)onReturn;
@property(retain, nonatomic) OauthScopeInfo *scopeInfo; // @synthesize scopeInfo=_scopeInfo;
@property(nonatomic) unsigned int selectedAvatarId; // @synthesize selectedAvatarId=_selectedAvatarId;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) MMAuthorizeScopeTopView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMTipsViewController *tipsVC; // @synthesize tipsVC=_tipsVC;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableViewHeight;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

