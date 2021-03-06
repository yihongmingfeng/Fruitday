//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface BMKBusLineResult : NSObject
{
    NSString *_busCompany;
    NSString *_busLineName;
    NSString *_uid;
    NSString *_startTime;
    NSString *_endTime;
    int _isMonTicket;
    NSArray *_busStations;
    NSArray *_busSteps;
}

@property(retain, nonatomic) NSArray *busSteps; // @synthesize busSteps=_busSteps;
@property(retain, nonatomic) NSArray *busStations; // @synthesize busStations=_busStations;
@property(nonatomic) int isMonTicket; // @synthesize isMonTicket=_isMonTicket;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *busLineName; // @synthesize busLineName=_busLineName;
@property(retain, nonatomic) NSString *busCompany; // @synthesize busCompany=_busCompany;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

