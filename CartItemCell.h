//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseTableViewCell.h"

@class CartItem, FDCurveImageView, NSIndexPath, NSLayoutConstraint, PromoProduct, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface CartItemCell : FDBaseTableViewCell
{
    long long _cellType;
    id <ProductItemCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    FDCurveImageView *_itemPreview;
    UILabel *_itemName;
    NSLayoutConstraint *_itemNameHeight;
    UILabel *_itemSpec;
    NSLayoutConstraint *_itemSpecTop;
    UILabel *_itemSalePrice;
    UILabel *_itemPrice;
    UILabel *_promotionDetailLabel;
    NSLayoutConstraint *_promotionDetailTop;
    UIView *_qtyModifierView;
    UITextField *_itemQuantity;
    UIButton *_plusButton;
    UIButton *_minusButton;
    CartItem *_cartItem;
    UIImageView *_giftTag;
    UILabel *_itemQuantityLabel;
    UIButton *_selectButton;
    PromoProduct *_promoProduct;
}

+ (double)heightForCellInTableView:(id)arg1 rowAtIndexPath:(id)arg2 dataSource:(id)arg3;
+ (id)cellForTableView:(id)arg1 cellType:(long long)arg2;
@property(retain, nonatomic) PromoProduct *promoProduct; // @synthesize promoProduct=_promoProduct;
@property(nonatomic) __weak UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) __weak UILabel *itemQuantityLabel; // @synthesize itemQuantityLabel=_itemQuantityLabel;
@property(nonatomic) __weak UIImageView *giftTag; // @synthesize giftTag=_giftTag;
@property(retain, nonatomic) CartItem *cartItem; // @synthesize cartItem=_cartItem;
@property(nonatomic) __weak UIButton *minusButton; // @synthesize minusButton=_minusButton;
@property(nonatomic) __weak UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(nonatomic) __weak UITextField *itemQuantity; // @synthesize itemQuantity=_itemQuantity;
@property(nonatomic) __weak UIView *qtyModifierView; // @synthesize qtyModifierView=_qtyModifierView;
@property(nonatomic) __weak NSLayoutConstraint *promotionDetailTop; // @synthesize promotionDetailTop=_promotionDetailTop;
@property(nonatomic) __weak UILabel *promotionDetailLabel; // @synthesize promotionDetailLabel=_promotionDetailLabel;
@property(nonatomic) __weak UILabel *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(nonatomic) __weak UILabel *itemSalePrice; // @synthesize itemSalePrice=_itemSalePrice;
@property(nonatomic) __weak NSLayoutConstraint *itemSpecTop; // @synthesize itemSpecTop=_itemSpecTop;
@property(nonatomic) __weak UILabel *itemSpec; // @synthesize itemSpec=_itemSpec;
@property(nonatomic) __weak NSLayoutConstraint *itemNameHeight; // @synthesize itemNameHeight=_itemNameHeight;
@property(nonatomic) __weak UILabel *itemName; // @synthesize itemName=_itemName;
@property(nonatomic) __weak FDCurveImageView *itemPreview; // @synthesize itemPreview=_itemPreview;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) id <ProductItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)deselectItem;
- (void)selectItem:(id)arg1;
- (void)qtyMinus:(id)arg1;
- (void)qtyPlus:(id)arg1;
- (void)adjustLabelSpaces;
- (void)hideTypeSpecificViews;
- (void)displayCellByDataSources:(id)arg1 rowAtIndexPath:(id)arg2;

@end

