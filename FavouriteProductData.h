//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavouriteProductData : NSObject
{
    NSString *_product_name;
    NSString *_mark_time;
    NSString *_photo;
    NSString *_product_id;
    NSString *_tag_id;
}

@property(retain, nonatomic) NSString *tag_id; // @synthesize tag_id=_tag_id;
@property(retain, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
@property(retain, nonatomic) NSString *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) NSString *mark_time; // @synthesize mark_time=_mark_time;
@property(retain, nonatomic) NSString *product_name; // @synthesize product_name=_product_name;
- (void).cxx_destruct;
- (void)setDataEmpty;
- (void)initWithDictionary:(id)arg1;

@end

