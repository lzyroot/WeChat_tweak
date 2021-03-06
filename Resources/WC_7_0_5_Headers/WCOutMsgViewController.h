//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMRefreshTableFooterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString, WCTimeLineFooterView;

@interface WCOutMsgViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, tableViewDelegate, MMRefreshTableFooterDelegate>
{
    _Bool _bHasMoreItems;
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_arrMsgInMemory;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)addMsgWithArray:(id)arg1 MoreData:(_Bool)arg2;
@property(retain, nonatomic) NSMutableArray *arrMsgInMemory; // @synthesize arrMsgInMemory=_arrMsgInMemory;
@property(nonatomic) _Bool bHasMoreItems; // @synthesize bHasMoreItems=_bHasMoreItems;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
- (void)getData;
- (void)getMoreData;
- (void)initTableFooterView;
- (void)initTableView;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

