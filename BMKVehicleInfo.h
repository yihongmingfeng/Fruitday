//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMKVehicleInfo : NSObject
{
    NSString *_uid;
    NSString *_title;
    int _passStationNum;
    int _totalPrice;
    int _zonePrice;
}

@property(nonatomic) int zonePrice; // @synthesize zonePrice=_zonePrice;
@property(nonatomic) int totalPrice; // @synthesize totalPrice=_totalPrice;
@property(nonatomic) int passStationNum; // @synthesize passStationNum=_passStationNum;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

