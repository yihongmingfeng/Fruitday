//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMSEntityFactory : NSObject
{
    int _factoryConfig;
}

+ (id)sharedInstance;
@property(nonatomic) int config; // @synthesize config=_factoryConfig;
- (void)makeSocialBarDataFromDictionary:(id)arg1;
- (void)makeAccountDicFromDictionry:(id)arg1;
- (void)makeFriendDicFromDictioanry:(id)arg1 withParam:(id)arg2;
- (void)makeResponse:(id)arg1;
- (void)saveObjects:(id)arg1 withParam:(id)arg2;

@end

