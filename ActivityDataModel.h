//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseDataModel.h"

@class NSArray<Optional>, NSString<Optional>;

@interface ActivityDataModel : FDBaseDataModel
{
    NSString<Optional> *_id;
    NSString<Optional> *_summary;
    NSString<Optional> *_ctime;
    NSString<Optional> *_type;
    NSString<Optional> *_title;
    NSString<Optional> *_topic_state;
    NSArray<Optional> *_photo;
    NSArray<Optional> *_images_thumbs;
    NSString<Optional> *_myDescription;
    NSString<Optional> *_num;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *num; // @synthesize num=_num;
@property(copy, nonatomic) NSString<Optional> *myDescription; // @synthesize myDescription=_myDescription;
@property(copy, nonatomic) NSArray<Optional> *images_thumbs; // @synthesize images_thumbs=_images_thumbs;
@property(copy, nonatomic) NSArray<Optional> *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSString<Optional> *topic_state; // @synthesize topic_state=_topic_state;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *ctime; // @synthesize ctime=_ctime;
@property(copy, nonatomic) NSString<Optional> *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString<Optional> *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end
