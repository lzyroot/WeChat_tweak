//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IGroupMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "RoomContactSelectDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "contactInfoDelegate.h"

@class CContact, NSMutableDictionary, NSString, RoomContactSelectViewController;

@interface AddAdminLogic : MMObject <UIAlertViewDelegate, RoomContactSelectDelegate, IGroupMgrExt, UITextFieldDelegate, contactInfoDelegate, MMTipsViewControllerDelegate>
{
    id <AddAdminLogicDelegate> m_delegate;
    _Bool m_bNeedReload;
    RoomContactSelectViewController *m_vc;
    NSMutableDictionary *m_dicWillAdd;
    CContact *_m_roomContact;
}

- (void).cxx_destruct;
- (void)OnAddGroupAdmin:(id)arg1 withResult:(unsigned int)arg2 adminList:(id)arg3 errTip:(id)arg4;
- (void)addAdmin;
- (void)addMembersToChatRoomAdmin:(id)arg1;
- (void)dealloc;
- (void)didSelectContact:(id)arg1;
- (id)getCellImage:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <AddAdminLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_roomContact; // @synthesize m_roomContact=_m_roomContact;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)onCancelSelectContact;
- (void)onViewContact:(id)arg1;
- (void)start;
- (void)updateRightBtn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

