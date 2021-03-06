//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface OfflineBannerDataModel : JSONModel
{
    NSString<Optional> *_banner_id;
    NSString<Optional> *_store_id;
    NSString<Optional> *_photo;
    NSString<Optional> *_title;
    NSString<Optional> *_type;
    NSString<Optional> *_target_id;
    NSString<Optional> *_page_url;
    NSString<Optional> *_sort;
    NSString<Optional> *_is_show;
    NSString<Optional> *_time;
    NSString<Optional> *_start_time;
    NSString<Optional> *_end_time;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *end_time; // @synthesize end_time=_end_time;
@property(copy, nonatomic) NSString<Optional> *start_time; // @synthesize start_time=_start_time;
@property(copy, nonatomic) NSString<Optional> *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString<Optional> *is_show; // @synthesize is_show=_is_show;
@property(copy, nonatomic) NSString<Optional> *sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString<Optional> *page_url; // @synthesize page_url=_page_url;
@property(copy, nonatomic) NSString<Optional> *target_id; // @synthesize target_id=_target_id;
@property(copy, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString<Optional> *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSString<Optional> *store_id; // @synthesize store_id=_store_id;
@property(copy, nonatomic) NSString<Optional> *banner_id; // @synthesize banner_id=_banner_id;
- (void).cxx_destruct;

@end

