//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MonoServiceLogicExt.h"

@class NSString;

@interface MMOOMCrashReport : NSObject <MonoServiceLogicExt>
{
}

+ (void)checkAndReport;
+ (id)lastTimeFOOMScene;
+ (void)registerExtension;
+ (void)reportFoomScene;
+ (void)reportIDKEYByType:(unsigned long long)arg1;
+ (void)reportIDKEYByTypeOS:(unsigned long long)arg1;
+ (void)reportWeAppBoomScene;
+ (void)reportWeAppCrashScene;
+ (void)reportWeAppFoomScene;
+ (void)reportWeAppSuspendOOMScene;
+ (void)setScene:(id)arg1;
+ (void)setWeAppName:(id)arg1;
+ (void)userHasWatch:(_Bool)arg1;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

