//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "RMPZoomTransitionAnimating.h"
#import "RMPZoomTransitionDelegate.h"
#import "UINavigationControllerDelegate.h"

@class BaiKeDetailData, NSMutableDictionary, NSString, OfflineProductData, OfflineProductListData, OfflineStoreDataModel, UIImageView, UIScrollView, UITableView, UIWebView, XTPresentCartView;

@interface OfflineItemDetailViewController : FDBaseViewController <RMPZoomTransitionAnimating, RMPZoomTransitionDelegate, UINavigationControllerDelegate>
{
    struct CGRect _photoScrollViewRect;
    struct CGRect _photoPageControlRect;
    UITableView *_mTableView;
    NSMutableDictionary *_productDict;
    BaiKeDetailData *_baikeDetailDataModel;
    _Bool _needShowDoubleBar;
    OfflineProductListData *_moreProductList;
    UIScrollView *_rotationScrollView;
    UIScrollView *_scrollView;
    UIImageView *_transitionImageView;
    OfflineProductData *_productData;
    XTPresentCartView *_cartView;
    NSString *_storeName;
    OfflineStoreDataModel *_storeDataModel;
    UIWebView *_specWebView;
}

@property(nonatomic) __weak UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(retain, nonatomic) UIWebView *specWebView; // @synthesize specWebView=_specWebView;
@property(retain, nonatomic) OfflineStoreDataModel *storeDataModel; // @synthesize storeDataModel=_storeDataModel;
@property(retain, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) XTPresentCartView *cartView; // @synthesize cartView=_cartView;
@property(retain, nonatomic) OfflineProductData *productData; // @synthesize productData=_productData;
- (void).cxx_destruct;
- (void)zoomTransitionAnimator:(id)arg1 didCompleteTransition:(_Bool)arg2 animatingSourceImageView:(id)arg3;
- (struct CGRect)transitionDestinationImageViewFrame;
- (id)transitionSourceImageView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initPresentView;
- (void)onSpecViewPress;
- (void)loadSpecView;
- (void)setupRefresh;
- (void)setTableViewContentInset;
- (void)onCommentViewPress:(id)arg1;
- (void)shareProductInfo;
- (void)initUI;
- (void)updateUI;
- (void)shareAction:(id)arg1;
- (void)goBackAction:(id)arg1;
- (void)requestGetMoreOtherItems;
- (void)getBaikeData:(id)arg1;
- (void)requestCommentRate;
- (void)requestItemDetailWithItemId:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

