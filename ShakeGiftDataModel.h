//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface ShakeGiftDataModel : JSONModel
{
    NSString<Optional> *_gift_type;
    NSString<Optional> *_gift_desctiption;
    NSString<Optional> *_time;
    NSString<Optional> *_gift_price_id;
    NSString<Optional> *_gift_product_id;
    NSString<Optional> *_gift_activity_url;
    NSString<Optional> *_gift_name;
}

@property(copy, nonatomic) NSString<Optional> *gift_name; // @synthesize gift_name=_gift_name;
@property(copy, nonatomic) NSString<Optional> *gift_activity_url; // @synthesize gift_activity_url=_gift_activity_url;
@property(copy, nonatomic) NSString<Optional> *gift_product_id; // @synthesize gift_product_id=_gift_product_id;
@property(copy, nonatomic) NSString<Optional> *gift_price_id; // @synthesize gift_price_id=_gift_price_id;
@property(copy, nonatomic) NSString<Optional> *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString<Optional> *gift_desctiption; // @synthesize gift_desctiption=_gift_desctiption;
@property(copy, nonatomic) NSString<Optional> *gift_type; // @synthesize gift_type=_gift_type;
- (void).cxx_destruct;

@end

