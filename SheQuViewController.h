//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, QBImagePickerController, SheQuViewModel, UIButton, UIImagePickerController, UITableView;

@interface SheQuViewController : FDBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UIButton *_addNewBtn;
    NSLayoutConstraint *_tableViewTopConstraint;
    NSLayoutConstraint *_tableViewBottomConstraint;
    NSLayoutConstraint *_buttonBottomConstraint;
    UIImagePickerController *_postImagePickerController;
    QBImagePickerController *_qbImagePickerController;
    SheQuViewModel *_viewModel;
    NSMutableArray *_topList;
    NSMutableArray *_mainList;
}

@property(retain, nonatomic) NSMutableArray *mainList; // @synthesize mainList=_mainList;
@property(retain, nonatomic) NSMutableArray *topList; // @synthesize topList=_topList;
@property(retain, nonatomic) SheQuViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) QBImagePickerController *qbImagePickerController; // @synthesize qbImagePickerController=_qbImagePickerController;
@property(retain, nonatomic) UIImagePickerController *postImagePickerController; // @synthesize postImagePickerController=_postImagePickerController;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)footerRereshing;
- (void)headerRereshing;
- (void)setupRefresh;
- (void)layoutIOS7AndIOS8;
- (void)bindViewModel;
- (void)addNewAction:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
