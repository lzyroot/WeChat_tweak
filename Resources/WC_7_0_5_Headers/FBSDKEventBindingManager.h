//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSSet;

@interface FBSDKEventBindingManager : NSObject
{
    _Bool isStarted;
    NSMutableDictionary *reactBindings;
    NSSet *validClasses;
    _Bool hasReactNative;
    NSArray *eventBindings;
}

+ (id)parseArray:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithJSON:(id)arg1;
- (void)matchSubviewsIn:(id)arg1;
- (void)matchView:(id)arg1 delegate:(id)arg2;
- (void)rematchBindings;
- (void)start;
- (void)updateBindings:(id)arg1;

@end

