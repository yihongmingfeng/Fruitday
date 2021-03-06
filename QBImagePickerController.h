//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "QBAssetsCollectionViewControllerDelegate.h"

@class ALAssetsLibrary, NSArray, NSMutableArray, NSMutableSet, NSString, QBAssetsCollectionViewController;

@interface QBImagePickerController : UITableViewController <QBAssetsCollectionViewControllerDelegate>
{
    _Bool _showsCancelButton;
    _Bool _allowsMultipleSelection;
    _Bool _isAlertNeed;
    ALAssetsLibrary *_assetsLibrary;
    NSArray *_assetsGroups;
    NSMutableSet *_selectedAssetURLs;
    NSMutableArray *_selectedAssets;
    id <QBImagePickerControllerDelegate> _delegate;
    NSArray *_groupTypes;
    unsigned long long _filterType;
    unsigned long long _minimumNumberOfSelection;
    unsigned long long _maximumNumberOfSelection;
    QBAssetsCollectionViewController *_selectCollectionView;
}

+ (_Bool)isAccessible;
@property(retain, nonatomic) QBAssetsCollectionViewController *selectCollectionView; // @synthesize selectCollectionView=_selectCollectionView;
@property _Bool isAlertNeed; // @synthesize isAlertNeed=_isAlertNeed;
@property(nonatomic) unsigned long long maximumNumberOfSelection; // @synthesize maximumNumberOfSelection=_maximumNumberOfSelection;
@property(nonatomic) unsigned long long minimumNumberOfSelection; // @synthesize minimumNumberOfSelection=_minimumNumberOfSelection;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property(copy, nonatomic) NSArray *groupTypes; // @synthesize groupTypes=_groupTypes;
@property(nonatomic) __weak id <QBImagePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
@property(retain, nonatomic) NSMutableSet *selectedAssetURLs; // @synthesize selectedAssetURLs=_selectedAssetURLs;
@property(copy, nonatomic) NSArray *assetsGroups; // @synthesize assetsGroups=_assetsGroups;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
- (void).cxx_destruct;
- (void)assetsCollectionViewControllerDidFinishSelection:(id)arg1;
- (void)assetsCollectionViewController:(id)arg1 didDeselectAsset:(id)arg2;
- (void)assetsCollectionViewController:(id)arg1 didSelectAsset:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)passSelectedAssetsToDelegate;
- (id)sortAssetsGroups:(id)arg1 typesOrder:(id)arg2;
- (void)loadAssetsGroupsWithTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)validateNumberOfSelections:(unsigned long long)arg1;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupProperties;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

