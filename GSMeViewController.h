//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "DZNEmptyDataSetDelegate.h"
#import "DZNEmptyDataSetSource.h"
#import "MyPostedCellDelegate.h"
#import "NoItemHintCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GSMeSectionHeader, GSMeViewModel, NSArray, NSDictionary, NSString, UIButton, UIImageView, UILabel, UITableView, UIViewController;

@interface GSMeViewController : FDBaseViewController <DZNEmptyDataSetSource, DZNEmptyDataSetDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, MyPostedCellDelegate, NoItemHintCellDelegate>
{
    _Bool _hasMoreMyPostList;
    _Bool _hasMoreMyMarkList;
    _Bool _hasMoreMyCommentList;
    _Bool _hasInitialLoaded;
    UIViewController *_fromViewController;
    UIButton *_backButton;
    UITableView *_tableView;
    UIImageView *_avatarImageView;
    UILabel *_usernameLabel;
    UIImageView *_userLevelImageView;
    GSMeSectionHeader *_sectionHeader;
    GSMeViewModel *_viewModel;
    long long _selectedSegment;
    NSDictionary *_userInfo;
    NSArray *_myPostArray;
    NSArray *_myMarkArray;
    NSArray *_myCommentArray;
}

@property(nonatomic) _Bool hasInitialLoaded; // @synthesize hasInitialLoaded=_hasInitialLoaded;
@property(retain, nonatomic) NSArray *myCommentArray; // @synthesize myCommentArray=_myCommentArray;
@property(retain, nonatomic) NSArray *myMarkArray; // @synthesize myMarkArray=_myMarkArray;
@property(retain, nonatomic) NSArray *myPostArray; // @synthesize myPostArray=_myPostArray;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(retain, nonatomic) GSMeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) GSMeSectionHeader *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(nonatomic) __weak UIImageView *userLevelImageView; // @synthesize userLevelImageView=_userLevelImageView;
@property(nonatomic) __weak UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void).cxx_destruct;
- (void)emptyDataSetDidTapButton:(id)arg1;
- (double)verticalOffsetForEmptyDataSet:(id)arg1;
- (id)buttonTitleForEmptyDataSet:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForEmptyDataSet:(id)arg1;
- (id)descriptionForEmptyDataSet:(id)arg1;
- (id)titleForEmptyDataSet:(id)arg1;
- (void)didTapM80AttributedLabel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)footerRereshing;
- (void)headerRereshing;
- (void)setupRefresh;
- (void)renderUserInfo;
- (void)bindViewModel;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initArrays;
- (void)resetSegmentButtons;
- (void)initSectionHeader;
- (void)onCreatePostPressed:(id)arg1;
- (void)onMyPostPressed;
- (void)onMyCommentPressed;
- (void)onMyMarkPressed;
- (void)onBackPressed:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

