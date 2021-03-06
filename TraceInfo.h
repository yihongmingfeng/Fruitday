//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseDataModel.h"

@class NSString;

@interface TraceInfo : FDBaseDataModel
{
    float _growing_region_x;
    float _growing_region_y;
    NSString *_country;
    NSString *_grower_number;
    NSString *_growing_region;
    NSString *_growing_region_desc;
    NSString *_master_region;
    NSString *_grower_story;
    NSString *_productName;
    NSString *_productImage;
    NSString *_growPeriod;
    NSString *_temperature;
    NSString *_humidity;
    NSString *_shelfLife;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *shelfLife; // @synthesize shelfLife=_shelfLife;
@property(retain, nonatomic) NSString *humidity; // @synthesize humidity=_humidity;
@property(retain, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
@property(retain, nonatomic) NSString *growPeriod; // @synthesize growPeriod=_growPeriod;
@property(retain, nonatomic) NSString *productImage; // @synthesize productImage=_productImage;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) float growing_region_y; // @synthesize growing_region_y=_growing_region_y;
@property(nonatomic) float growing_region_x; // @synthesize growing_region_x=_growing_region_x;
@property(retain, nonatomic) NSString *grower_story; // @synthesize grower_story=_grower_story;
@property(retain, nonatomic) NSString *master_region; // @synthesize master_region=_master_region;
@property(retain, nonatomic) NSString *growing_region_desc; // @synthesize growing_region_desc=_growing_region_desc;
@property(retain, nonatomic) NSString *growing_region; // @synthesize growing_region=_growing_region;
@property(retain, nonatomic) NSString *grower_number; // @synthesize grower_number=_grower_number;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
- (void).cxx_destruct;

@end

