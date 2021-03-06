//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "ILocationMgrExt.h"
#import "INetworkStatusMgrExt.h"
#import "IWAJSContextPlugin_coreMotion.h"

@class CMMotionManager, NSString;

@interface WAJSContextPlugin_coreMotion : WAJSContextPluginBase <ILocationMgrExt, INetworkStatusMgrExt, IWAJSContextPlugin_coreMotion>
{
    CMMotionManager *_motionMgr;
    unsigned long long m_locationTag;
    unsigned long long m_headingTag;
    unsigned int m_moduleStatus[7];
    long long _lastOrientation;
    double x;
    double y;
    double z;
    _Bool _enableIndoor;
    NSString *_mapSubKey;
    unsigned long long _coordType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long coordType; // @synthesize coordType=_coordType;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (_Bool)enableAccelerometer;
- (_Bool)enableBackgroundLocationUpdate;
- (_Bool)enableCompass;
- (_Bool)enableDeviceOrientationChangeListening;
@property(nonatomic) _Bool enableIndoor; // @synthesize enableIndoor=_enableIndoor;
- (_Bool)enableLocationUpdate;
- (void)forceStopBackgroundLocating;
- (void)forceStopForegroundLocating;
- (void)forceStopLocating;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;
- (_Bool)isModuleRunning:(int)arg1;
- (_Bool)isRunningModule:(int)arg1;
- (_Bool)isUpdatingBackgroundLocation;
- (_Bool)isUpdatingForegroundLocation;
- (_Bool)isUpdatingLocation;
@property(retain, nonatomic) NSString *mapSubKey; // @synthesize mapSubKey=_mapSubKey;
- (void)moduleDidStop:(int)arg1;
- (void)onGPSLBSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLBSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onNetworkStatusChange:(int)arg1;
- (void)ondLBSHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)setModuleInterval:(double)arg1 name:(int)arg2;
- (_Bool)startDeviceAxisChange;
- (_Bool)startGyroscope;
- (_Bool)startModule:(int)arg1;
- (void)stopAccelerometer;
- (void)stopBackgroundLocationUpdate;
- (void)stopCompass;
- (void)stopDeviceAxisChange;
- (void)stopDeviceOrientationChangeListening;
- (void)stopGyroscope;
- (void)stopLocationUpdate;
- (void)stopModule:(int)arg1;
- (void)stopModule:(int)arg1 suspend:(_Bool)arg2;
- (void)stopPreviousLocationUpdate;
- (void)updateParamByDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

