//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface TrustedFriendsCgi : MMObject <PBMessageObserverDelegate>
{
    id <TrustedFriendsCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (_Bool)getTrustedFriendsList;
- (void)handleGetTrustedFriendsResp:(id)arg1;
- (void)handleSyncTrustedFriendsResp:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <TrustedFriendsCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (_Bool)syncFriendsToTrustedList:(id)arg1;

@end

