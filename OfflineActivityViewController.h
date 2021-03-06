//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

@class NSDictionary, UIImageView, UILabel, UIScrollView, UIView;

@interface OfflineActivityViewController : FDBaseViewController
{
    NSDictionary *myRightInfo;
    UIView *_QRCodeContainer;
    UIImageView *_qrImageView;
    UILabel *_rightTitle;
    UIImageView *_storeInstruction;
    UIScrollView *_activityScrollView;
    UIView *_actionView;
}

@property(nonatomic) __weak UIView *actionView; // @synthesize actionView=_actionView;
@property(nonatomic) __weak UIScrollView *activityScrollView; // @synthesize activityScrollView=_activityScrollView;
@property(nonatomic) __weak UIImageView *storeInstruction; // @synthesize storeInstruction=_storeInstruction;
@property(nonatomic) __weak UILabel *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(nonatomic) __weak UIImageView *qrImageView; // @synthesize qrImageView=_qrImageView;
@property(nonatomic) __weak UIView *QRCodeContainer; // @synthesize QRCodeContainer=_QRCodeContainer;
@property(retain) NSDictionary *myRightInfo; // @synthesize myRightInfo;
- (void).cxx_destruct;
- (void)onEnterStorePressed:(id)arg1;
- (void)showImageInfo;
- (id)resizeImage:(id)arg1 withQuality:(int)arg2 rate:(double)arg3;
- (void)generateUserQRCode;
- (void)showHideBusyIndicator:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

