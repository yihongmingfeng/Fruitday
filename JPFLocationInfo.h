//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray;

@interface JPFLocationInfo : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_wifiInfo;
    NSMutableArray *_cellInfo;
    NSMutableArray *_gpsInfo;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSMutableArray *gpsInfo; // @synthesize gpsInfo=_gpsInfo;
@property(readonly, nonatomic) NSMutableArray *cellInfo; // @synthesize cellInfo=_cellInfo;
@property(readonly, nonatomic) NSMutableArray *wifiInfo; // @synthesize wifiInfo=_wifiInfo;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeGpsInfo:(id)arg1;
- (void)addGpsInfo:(id)arg1;
- (void)removeCellInfo:(id)arg1;
- (void)addCellInfo:(id)arg1;
- (void)removeWifiInfo:(id)arg1;
- (void)addWifiInfo:(id)arg1;
- (void)resumeLocationInfo;
- (void)clearAllInfo;
- (void)dealloc;
- (id)init;

@end

