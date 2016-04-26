//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface OfflineProductData : NSObject
{
    NSString *_buy_limit;
    NSString *_qty;
    NSString *_old_price;
    NSString *_photo;
    NSString *_price;
    NSString *_price_id;
    NSString *_product_id;
    NSString *_product_name;
    NSString *_product_no;
    NSString *_ptype;
    NSString *_stock;
    NSString *_thum_photo;
    NSString *_volume;
    NSString *_store_id;
    NSString *_store_name;
    NSMutableArray *_stores;
    _Bool _isSelected;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *store_name; // @synthesize store_name=_store_name;
@property(retain, nonatomic) NSString *store_id; // @synthesize store_id=_store_id;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSString *thum_photo; // @synthesize thum_photo=_thum_photo;
@property(retain, nonatomic) NSString *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) NSString *ptype; // @synthesize ptype=_ptype;
@property(retain, nonatomic) NSString *product_no; // @synthesize product_no=_product_no;
@property(retain, nonatomic) NSString *product_name; // @synthesize product_name=_product_name;
@property(retain, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
@property(retain, nonatomic) NSString *price_id; // @synthesize price_id=_price_id;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) NSString *old_price; // @synthesize old_price=_old_price;
@property(retain, nonatomic) NSString *buy_limit; // @synthesize buy_limit=_buy_limit;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *qty;
- (void)setDataEmpty;
- (void)initWithDictionary:(id)arg1;

@end
