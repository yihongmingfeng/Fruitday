//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseDataModel.h"

@class NSString;

@interface BaseResponse : FDBaseDataModel
{
    long long _code;
    NSString *_msg;
    id <Ignore> _data;
}

@property(retain, nonatomic) id <Ignore> data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

