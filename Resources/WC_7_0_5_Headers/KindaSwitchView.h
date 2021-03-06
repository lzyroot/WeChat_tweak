//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKSwitchView.h"

@class MMKSwitchViewOnChangeSwitchCallback, NSString, UISwitch;

@interface KindaSwitchView : KindaView <MMKSwitchView>
{
    int _m_on;
    int _m_enabled;
    UISwitch *_m_switch;
    long long _m_onTintColor;
    long long _m_tintColor;
    long long _m_thumbTintColor;
    id <MMKImage> _m_onImage;
    id <MMKImage> _m_offImage;
    MMKSwitchViewOnChangeSwitchCallback *_m_changeSwitchCallback;
}

- (void).cxx_destruct;
- (void)changeSwitch;
- (_Bool)getEnabled;
- (id)getOffImage;
- (_Bool)getOn;
- (id)getOnImage;
- (long long)getOnTintColor;
- (long long)getThumbTintColor;
- (long long)getTintColor;
- (id)getView;
- (id)init;
@property(retain, nonatomic) MMKSwitchViewOnChangeSwitchCallback *m_changeSwitchCallback; // @synthesize m_changeSwitchCallback=_m_changeSwitchCallback;
@property(nonatomic) int m_enabled; // @synthesize m_enabled=_m_enabled;
@property(retain, nonatomic) id <MMKImage> m_offImage; // @synthesize m_offImage=_m_offImage;
@property(nonatomic) int m_on; // @synthesize m_on=_m_on;
@property(retain, nonatomic) id <MMKImage> m_onImage; // @synthesize m_onImage=_m_onImage;
@property(nonatomic) long long m_onTintColor; // @synthesize m_onTintColor=_m_onTintColor;
@property(retain, nonatomic) UISwitch *m_switch; // @synthesize m_switch=_m_switch;
@property(nonatomic) long long m_thumbTintColor; // @synthesize m_thumbTintColor=_m_thumbTintColor;
@property(nonatomic) long long m_tintColor; // @synthesize m_tintColor=_m_tintColor;
- (void)setEnabled:(_Bool)arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(_Bool)arg1;
- (void)setOnChangeSwitchCallback:(id)arg1;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(long long)arg1;
- (void)setThumbTintColor:(long long)arg1;
- (void)setTintColor:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

