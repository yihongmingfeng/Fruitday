//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseTableViewCell.h"

@class CartPromotionAlert, NSLayoutConstraint, UIButton, UILabel;

@interface PromotionAlertCell : FDBaseTableViewCell
{
    UIButton *_tagButton;
    NSLayoutConstraint *_tagButtonTop;
    UILabel *_titleLabel;
    CartPromotionAlert *_item;
}

+ (double)heightForCellInTableView:(id)arg1 rowAtIndexPath:(id)arg2 dataSource:(id)arg3;
+ (id)cellForTableView:(id)arg1;
@property(retain, nonatomic) CartPromotionAlert *item; // @synthesize item=_item;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *tagButtonTop; // @synthesize tagButtonTop=_tagButtonTop;
@property(nonatomic) __weak UIButton *tagButton; // @synthesize tagButton=_tagButton;
- (void).cxx_destruct;
- (void)displayCellByDataSources:(id)arg1 rowAtIndexPath:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
