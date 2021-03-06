//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "DZNEmptyDataSetDelegate.h"
#import "DZNEmptyDataSetSource.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BaiKeSearchResultViewModel, NSMutableArray, NSString, UITableView;

@interface BaiKeSearchResultViewController : FDBaseViewController <UITableViewDataSource, UITableViewDelegate, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
{
    UITableView *_tableView;
    NSString *_keyword;
    BaiKeSearchResultViewModel *_viewModel;
    NSMutableArray *_topList;
    NSMutableArray *_mainList;
}

@property(retain, nonatomic) NSMutableArray *mainList; // @synthesize mainList=_mainList;
@property(retain, nonatomic) NSMutableArray *topList; // @synthesize topList=_topList;
@property(retain, nonatomic) BaiKeSearchResultViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)verticalOffsetForEmptyDataSet:(id)arg1;
- (id)titleForEmptyDataSet:(id)arg1;
- (id)imageForEmptyDataSet:(id)arg1;
- (void)hideTableView;
- (void)showTableView;
- (void)footerRereshing;
- (void)headerRereshing;
- (void)setupRefresh;
- (void)bindViewModel;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

