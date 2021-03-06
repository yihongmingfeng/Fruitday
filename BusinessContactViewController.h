//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIImageView, UIScrollView, UITextField, UIView;

@interface BusinessContactViewController : FDBaseViewController <UITextFieldDelegate>
{
    UITextField *_companyName;
    UITextField *_contactPersonName;
    UITextField *_contactWay;
    UITextField *_coorperationWay;
    UIView *_border1;
    UIView *_border2;
    UIView *_border3;
    UIView *_border4;
    UIView *_border5;
    UIScrollView *_infoImageScrollView;
    UIImageView *_infoImageView;
    UIView *_contactView;
}

@property(nonatomic) __weak UIView *contactView; // @synthesize contactView=_contactView;
@property(nonatomic) __weak UIImageView *infoImageView; // @synthesize infoImageView=_infoImageView;
@property(nonatomic) __weak UIScrollView *infoImageScrollView; // @synthesize infoImageScrollView=_infoImageScrollView;
@property(nonatomic) __weak UIView *border5; // @synthesize border5=_border5;
@property(nonatomic) __weak UIView *border4; // @synthesize border4=_border4;
@property(nonatomic) __weak UIView *border3; // @synthesize border3=_border3;
@property(nonatomic) __weak UIView *border2; // @synthesize border2=_border2;
@property(nonatomic) __weak UIView *border1; // @synthesize border1=_border1;
@property(nonatomic) __weak UITextField *coorperationWay; // @synthesize coorperationWay=_coorperationWay;
@property(nonatomic) __weak UITextField *contactWay; // @synthesize contactWay=_contactWay;
@property(nonatomic) __weak UITextField *contactPersonName; // @synthesize contactPersonName=_contactPersonName;
@property(nonatomic) __weak UITextField *companyName; // @synthesize companyName=_companyName;
- (void).cxx_destruct;
- (void)processBusinessContact;
- (void)onSubmitPressed:(id)arg1;
- (void)backToPreviousView;
- (_Bool)checkInfoFill;
- (void)showHideBusyIndicator:(_Bool)arg1;
- (void)showImageInfo;
- (void)alertErrorMessage:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)hideKeyBoard;
- (void)onViewPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

