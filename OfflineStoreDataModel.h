//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface OfflineStoreDataModel : JSONModel
{
    NSString<Optional> *_store_id;
    NSString<Optional> *_name;
    NSString<Optional> *_opentime;
    NSString<Optional> *_phone;
    NSString<Optional> *_address;
    NSString<Optional> *_post;
    NSString<Optional> *_send_time;
    NSString<Optional> *_store_url;
    NSString<Optional> *_logo;
    NSString<Optional> *_sales;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *sales; // @synthesize sales=_sales;
@property(copy, nonatomic) NSString<Optional> *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString<Optional> *store_url; // @synthesize store_url=_store_url;
@property(copy, nonatomic) NSString<Optional> *send_time; // @synthesize send_time=_send_time;
@property(copy, nonatomic) NSString<Optional> *post; // @synthesize post=_post;
@property(copy, nonatomic) NSString<Optional> *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString<Optional> *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString<Optional> *opentime; // @synthesize opentime=_opentime;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString<Optional> *store_id; // @synthesize store_id=_store_id;
- (void).cxx_destruct;

@end

