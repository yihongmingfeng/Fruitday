//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@interface JSONModel (Networking)
+ (void)postModel:(id)arg1 toURLWithString:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getModelFromURLWithString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initFromURLWithString:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isLoading; // @dynamic isLoading;
@end
