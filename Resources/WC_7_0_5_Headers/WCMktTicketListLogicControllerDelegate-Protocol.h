//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIViewController, NSIndexPath;

@protocol WCMktTicketListLogicControllerDelegate <NSObject>
- (MMUIViewController *)getViewController;
- (void)onDeleteTicketListElemDataSuccWithIndexPath:(NSIndexPath *)arg1;
- (void)onTableviewGetTicketHomepageFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStartLoading;
- (void)vcStopLoading;
@end

