//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesDownloadCDNInfo;

@protocol IFavCdnDownloadMgrExt <NSObject>

@optional
- (void)OnFavCdnDownload:(FavoritesDownloadCDNInfo *)arg1 RetCode:(int)arg2;
- (void)OnFavCdnDownload:(FavoritesDownloadCDNInfo *)arg1 TotalLength:(int)arg2 FinishLength:(int)arg3;
@end

