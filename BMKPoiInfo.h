//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMKPoiInfo : NSObject
{
    NSString *_name;
    NSString *_uid;
    NSString *_address;
    NSString *_city;
    NSString *_phone;
    NSString *_postcode;
    int _epoitype;
    CDStruct_2c43369c _pt;
}

@property(nonatomic) CDStruct_c3b9c2ee pt; // @synthesize pt=_pt;
@property(nonatomic) int epoitype; // @synthesize epoitype=_epoitype;
@property(retain, nonatomic) NSString *postcode; // @synthesize postcode=_postcode;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

