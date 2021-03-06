//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseTableViewCell.h"

@class FDCurveImageView, FDOrderOverviewData, M80AttributedLabel, NSLayoutConstraint, UIButton, UILabel;

@interface FDOrderOverviewCell : FDBaseTableViewCell
{
    FDOrderOverviewData *_orderInfo;
    id <OrderCellDelegate> _delegate;
    UILabel *_orderNoLabel;
    UILabel *_orderNo;
    FDCurveImageView *_orderProductImage;
    UILabel *_orderProductName;
    UILabel *_orderProductQty;
    UILabel *_orderProductggName;
    UILabel *_orderProductPrice;
    NSLayoutConstraint *_separator1Height;
    NSLayoutConstraint *_separator2Height;
    NSLayoutConstraint *_separator3Height;
    NSLayoutConstraint *_separatorHeaderHeight;
    NSLayoutConstraint *_separatorFooterHeight;
    M80AttributedLabel *_orderPrice;
    UILabel *_orderStatus;
    UIButton *_goReportIssueButton;
    UIButton *_confirmOrderButton;
    UIButton *_payButton;
    UIButton *_commentButton;
    UIButton *_checkLogisticButton;
    NSLayoutConstraint *_confirmOrderButtonWidth;
    NSLayoutConstraint *_commentOrderButtonWidth;
    NSLayoutConstraint *_checkLogisticButtonWidth;
    NSLayoutConstraint *_reportIssueButtonWidth;
    NSLayoutConstraint *_confirmOrderButtonRight;
    NSLayoutConstraint *_commentOrderButtonRight;
    NSLayoutConstraint *_checkLogisticButtonRight;
    NSLayoutConstraint *_reportIssueButtonRight;
}

+ (int)cellHeightByAction:(id)arg1;
+ (id)cellForTableView:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *reportIssueButtonRight; // @synthesize reportIssueButtonRight=_reportIssueButtonRight;
@property(nonatomic) __weak NSLayoutConstraint *checkLogisticButtonRight; // @synthesize checkLogisticButtonRight=_checkLogisticButtonRight;
@property(nonatomic) __weak NSLayoutConstraint *commentOrderButtonRight; // @synthesize commentOrderButtonRight=_commentOrderButtonRight;
@property(nonatomic) __weak NSLayoutConstraint *confirmOrderButtonRight; // @synthesize confirmOrderButtonRight=_confirmOrderButtonRight;
@property(nonatomic) __weak NSLayoutConstraint *reportIssueButtonWidth; // @synthesize reportIssueButtonWidth=_reportIssueButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *checkLogisticButtonWidth; // @synthesize checkLogisticButtonWidth=_checkLogisticButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *commentOrderButtonWidth; // @synthesize commentOrderButtonWidth=_commentOrderButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *confirmOrderButtonWidth; // @synthesize confirmOrderButtonWidth=_confirmOrderButtonWidth;
@property(nonatomic) __weak UIButton *checkLogisticButton; // @synthesize checkLogisticButton=_checkLogisticButton;
@property(nonatomic) __weak UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(nonatomic) __weak UIButton *payButton; // @synthesize payButton=_payButton;
@property(nonatomic) __weak UIButton *confirmOrderButton; // @synthesize confirmOrderButton=_confirmOrderButton;
@property(nonatomic) __weak UIButton *goReportIssueButton; // @synthesize goReportIssueButton=_goReportIssueButton;
@property(nonatomic) __weak UILabel *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(nonatomic) __weak M80AttributedLabel *orderPrice; // @synthesize orderPrice=_orderPrice;
@property(nonatomic) __weak NSLayoutConstraint *separatorFooterHeight; // @synthesize separatorFooterHeight=_separatorFooterHeight;
@property(nonatomic) __weak NSLayoutConstraint *separatorHeaderHeight; // @synthesize separatorHeaderHeight=_separatorHeaderHeight;
@property(nonatomic) __weak NSLayoutConstraint *separator3Height; // @synthesize separator3Height=_separator3Height;
@property(nonatomic) __weak NSLayoutConstraint *separator2Height; // @synthesize separator2Height=_separator2Height;
@property(nonatomic) __weak NSLayoutConstraint *separator1Height; // @synthesize separator1Height=_separator1Height;
@property(nonatomic) __weak UILabel *orderProductPrice; // @synthesize orderProductPrice=_orderProductPrice;
@property(nonatomic) __weak UILabel *orderProductggName; // @synthesize orderProductggName=_orderProductggName;
@property(nonatomic) __weak UILabel *orderProductQty; // @synthesize orderProductQty=_orderProductQty;
@property(nonatomic) __weak UILabel *orderProductName; // @synthesize orderProductName=_orderProductName;
@property(nonatomic) __weak FDCurveImageView *orderProductImage; // @synthesize orderProductImage=_orderProductImage;
@property(nonatomic) __weak UILabel *orderNo; // @synthesize orderNo=_orderNo;
@property(nonatomic) __weak UILabel *orderNoLabel; // @synthesize orderNoLabel=_orderNoLabel;
@property(nonatomic) id <OrderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)goToOrderDetailWithOrderIndex:(_Bool)arg1;
- (void)onReportIssuePressed:(id)arg1;
- (void)onCheckLogisticPressed:(id)arg1;
- (void)onCommentPressed:(id)arg1;
- (void)onPayPressed:(id)arg1;
- (void)onConfirmOrderPressed:(id)arg1;
- (id)getOrderProductCount:(id)arg1;
- (void)displayCellByDataSources:(id)arg1 rowAtIndexPath:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

