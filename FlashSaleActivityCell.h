//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CountDownView, FDCurveImageView, NSLayoutConstraint, UIButton, UILabel, UIView;

@interface FlashSaleActivityCell : UITableViewCell
{
    CountDownView *_countDownView;
    CDUnknownBlockType _addCartAction;
    UIView *_countDownBgView;
    FDCurveImageView *_flashSaleImageView;
    UILabel *_flashSaleNameLabel;
    UILabel *_flashSaleUnitLabel;
    UILabel *_flashSaleDescriptionLabel;
    UILabel *_flashSalePriceLabel;
    UILabel *_flashSaleOldPriceLabel;
    UIButton *_flashSaleAddCartButton;
    NSLayoutConstraint *_flashSaleNameLabelHeightConstraint;
    NSLayoutConstraint *_flashSaleDescriptionLabelHeightConstraint;
    UIView *_saleOutBgView;
}

@property(nonatomic) __weak UIView *saleOutBgView; // @synthesize saleOutBgView=_saleOutBgView;
@property(nonatomic) __weak NSLayoutConstraint *flashSaleDescriptionLabelHeightConstraint; // @synthesize flashSaleDescriptionLabelHeightConstraint=_flashSaleDescriptionLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *flashSaleNameLabelHeightConstraint; // @synthesize flashSaleNameLabelHeightConstraint=_flashSaleNameLabelHeightConstraint;
@property(nonatomic) __weak UIButton *flashSaleAddCartButton; // @synthesize flashSaleAddCartButton=_flashSaleAddCartButton;
@property(nonatomic) __weak UILabel *flashSaleOldPriceLabel; // @synthesize flashSaleOldPriceLabel=_flashSaleOldPriceLabel;
@property(nonatomic) __weak UILabel *flashSalePriceLabel; // @synthesize flashSalePriceLabel=_flashSalePriceLabel;
@property(nonatomic) __weak UILabel *flashSaleDescriptionLabel; // @synthesize flashSaleDescriptionLabel=_flashSaleDescriptionLabel;
@property(nonatomic) __weak UILabel *flashSaleUnitLabel; // @synthesize flashSaleUnitLabel=_flashSaleUnitLabel;
@property(nonatomic) __weak UILabel *flashSaleNameLabel; // @synthesize flashSaleNameLabel=_flashSaleNameLabel;
@property(nonatomic) __weak FDCurveImageView *flashSaleImageView; // @synthesize flashSaleImageView=_flashSaleImageView;
@property(nonatomic) __weak UIView *countDownBgView; // @synthesize countDownBgView=_countDownBgView;
@property(copy, nonatomic) CDUnknownBlockType addCartAction; // @synthesize addCartAction=_addCartAction;
@property(retain, nonatomic) CountDownView *countDownView; // @synthesize countDownView=_countDownView;
- (void).cxx_destruct;
- (void)setThemeColor:(id)arg1;
- (void)flashSaleAddCartAction:(id)arg1;
- (void)loadFlashSaleActivityData:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

