//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPlayerDownloader.h"

@class WCPlayerHttpMediaWrap;

@interface WCWeSeePlayerDownloader : WCPlayerDownloader
{
}

- (id)getPlayerMediaId;
- (_Bool)isVideoDownloading;
- (void)startDataPreload;
- (void)startWithWithPlayerMode:(unsigned long long)arg1;
- (void)stopDownloadVideo;

// Remaining properties
@property(retain, nonatomic) WCPlayerHttpMediaWrap *mediaWrap; // @dynamic mediaWrap;

@end

