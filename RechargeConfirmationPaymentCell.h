//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface RechargeConfirmationPaymentCell : UITableViewCell
{
    UIImageView *_paymentWayImage;
    UILabel *_panymentWayName;
    UIImageView *_selectedImage;
}

@property(nonatomic) __weak UIImageView *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(nonatomic) __weak UILabel *panymentWayName; // @synthesize panymentWayName=_panymentWayName;
@property(nonatomic) __weak UIImageView *paymentWayImage; // @synthesize paymentWayImage=_paymentWayImage;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
