//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKMultiPoint.h"

#import "BMKOverlay.h"

@class NSString;

@interface BMKPolygon : BMKMultiPoint <BMKOverlay>
{
}

+ (id)polygonWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (void)postOverlayUpdateMessage;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (_Bool)resetPoints:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;
- (_Bool)setPolygonWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;
- (_Bool)setPolygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;
- (id)initWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
