//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel;

@interface ItemDetailInfoCell : UITableViewCell
{
    CDUnknownBlockType _reduceNumEvent;
    CDUnknownBlockType _plusNumEvent;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UILabel *_oldPriceLabel;
    UIButton *_reduceButton;
    UIButton *_plusButton;
    UILabel *_numberLabel;
}

+ (double)heightForRowAtIndexPath:(id)arg1;
@property(nonatomic) __weak UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(nonatomic) __weak UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(nonatomic) __weak UIButton *reduceButton; // @synthesize reduceButton=_reduceButton;
@property(nonatomic) __weak UILabel *oldPriceLabel; // @synthesize oldPriceLabel=_oldPriceLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType plusNumEvent; // @synthesize plusNumEvent=_plusNumEvent;
@property(copy, nonatomic) CDUnknownBlockType reduceNumEvent; // @synthesize reduceNumEvent=_reduceNumEvent;
- (void).cxx_destruct;
- (void)plusAction:(id)arg1;
- (void)reduceAction:(id)arg1;
- (void)checkStockNum:(id)arg1 num:(id)arg2;
- (void)cellForRowAtIndexPath:(id)arg1 sourceData:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
