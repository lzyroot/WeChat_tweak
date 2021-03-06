//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "CountryCodePickerDelegate.h"
#import "UITextFieldDelegate.h"

@class CountryCodeWrap, NSString, PhoneNumberFormatLogic, UIButton, WCAccountTextFieldItem, WCBaseKeyboardToolBar;

@interface WCAccountFillPhoneViewController : WCAccountBaseViewController <CountryCodePickerDelegate, UITextFieldDelegate>
{
    WCAccountTextFieldItem *m_textFieldContryCodeSelectItem;
    WCAccountTextFieldItem *m_textFieldContryCodeItem;
    WCAccountTextFieldItem *m_textFieldPhoneNumberItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    CountryCodeWrap *m_curCountryCode;
    PhoneNumberFormatLogic *m_phoneNumFormatter;
    UIButton *m_btnNext;
    NSString *m_nsHeaderTip;
    _Bool m_bAgreementMobileCanBeFound;
    id <WCAccountFillPhoneViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)checkNextBtnEnable;
- (id)createBottomBtn:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)dealloc;
- (void)fillCountryCode:(id)arg1 phoneNum:(id)arg2;
- (void)findCountryCode;
- (void)hideKeyBoard;
- (id)init;
- (void)initNavigationBar;
- (void)initTableView;
@property(nonatomic) _Bool m_bAgreementMobileCanBeFound; // @synthesize m_bAgreementMobileCanBeFound;
- (void)onMobileCanBeFoundAgreementClick:(id)arg1;
- (void)onNext;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)setLeftBarBtnTitle:(id)arg1;
- (void)setViewY;
- (void)showBindFooter;
- (void)showCountryCode;
- (void)showCountryCodePickerView;
- (void)showMobileCanBeFound;
- (void)showNextFooter:(id)arg1;
- (void)vcBecomeFirstResponder;
- (void)vcResignFirstResponder;
- (void)viewDidBeInteractivePoped;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

