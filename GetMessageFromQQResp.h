//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseResp.h"

@class QQApiObject;

@interface GetMessageFromQQResp : QQBaseResp
{
    QQApiObject *message;
}

+ (id)respWithContent:(id)arg1;
@property(retain, nonatomic) QQApiObject *message; // @synthesize message;

@end

