//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "UMTBase.h"

@class NSString;

@interface UMTTraffic : NSObject <UMTBase, NSCoding>
{
    int __upload_traffic;
    int __download_traffic;
    _Bool __upload_traffic_isset;
    _Bool __download_traffic_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetDownload_traffic;
- (_Bool)download_trafficIsSet;
@property(nonatomic, getter=download_traffic, setter=setDownload_traffic:) int download_traffic;
- (void)unsetUpload_traffic;
- (_Bool)upload_trafficIsSet;
@property(nonatomic, getter=upload_traffic, setter=setUpload_traffic:) int upload_traffic;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpload_traffic:(int)arg1 download_traffic:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

