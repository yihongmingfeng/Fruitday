//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface OfflineBuildingListData : NSObject
{
    NSMutableArray *_buildingList;
}

@property(retain, nonatomic) NSMutableArray *buildingList; // @synthesize buildingList=_buildingList;
- (void).cxx_destruct;
- (id)jsonString;
- (void)initBuildingListWithArray:(id)arg1;

@end
