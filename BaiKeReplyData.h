//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseDataModel.h"

@class NSString<Optional>;

@interface BaiKeReplyData : FDBaseDataModel
{
    NSString<Optional> *_content;
    NSString<Optional> *_uid;
    NSString<Optional> *_username;
    NSString<Optional> *_id;
}

@property(copy, nonatomic) NSString<Optional> *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString<Optional> *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString<Optional> *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end

