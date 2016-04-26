//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, UITextField, UIView;

@interface GoodCodeViewController : FDBaseViewController <UITextFieldDelegate>
{
    UIView *_inputBackgroundView;
    UIView *_purchaseEntryView;
    UITextField *_cardNumberInput;
    UITextField *_passwordImput;
    NSMutableArray *_productList;
}

@property(retain) NSMutableArray *productList; // @synthesize productList=_productList;
@property(nonatomic) __weak UITextField *passwordImput; // @synthesize passwordImput=_passwordImput;
@property(nonatomic) __weak UITextField *cardNumberInput; // @synthesize cardNumberInput=_cardNumberInput;
@property(nonatomic) __weak UIView *purchaseEntryView; // @synthesize purchaseEntryView=_purchaseEntryView;
@property(nonatomic) __weak UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)authenGoodCard;
- (void)onScanQRCode:(id)arg1;
- (void)onPurchasePressed:(id)arg1;
- (void)onCardAuthenPressed:(id)arg1;
- (_Bool)checkCodeInput;
- (void)alertErrorMessage:(id)arg1;
- (void)showHideBusyIndicator:(_Bool)arg1;
- (void)reBuildBackgroundView;
- (void)didReceiveMemoryWarning;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)hideKeyBoard;
- (void)onViewPressed:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
