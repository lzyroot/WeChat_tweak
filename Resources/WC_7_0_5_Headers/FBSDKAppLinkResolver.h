//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKAppLinkResolving.h"

@class NSMutableDictionary, NSString;

@interface FBSDKAppLinkResolver : NSObject <FBSDKAppLinkResolving>
{
    NSMutableDictionary *_cachedFBSDKAppLinks;
    long long _userInterfaceIdiom;
}

+ (void)initialize;
+ (id)resolver;
- (void).cxx_destruct;
- (void)appLinkFromURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)appLinksFromURLs:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableDictionary *cachedFBSDKAppLinks; // @synthesize cachedFBSDKAppLinks=_cachedFBSDKAppLinks;
- (id)initWithUserInterfaceIdiom:(long long)arg1;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

