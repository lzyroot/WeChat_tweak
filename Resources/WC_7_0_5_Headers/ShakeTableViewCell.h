//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface ShakeTableViewCell : MMTableViewCell
{
    UILabel *m_nickNameLabel;
    UILabel *m_personalRemarkLabel;
    UILabel *m_remarkContainer;
    UILabel *m_distanceLabel;
    UILabel *m_addedLabel;
    UIImageView *m_genderImageView;
    UIImageView *m_remarkBKImage;
    UIView *m_headerView;
}

- (void).cxx_destruct;
- (void)hideSubViews;
- (_Bool)isInMyContactList:(id)arg1;
- (void)updateWithLbsContactInfo:(id)arg1 withHeaderView:(id)arg2;

@end

