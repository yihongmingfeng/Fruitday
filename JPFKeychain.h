//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JPFKeychain : NSObject
{
    NSString *_service;
    NSString *_accessGroup;
    long long _accessibility;
}

@property(readonly, nonatomic) long long accessibility; // @synthesize accessibility=_accessibility;
@property(readonly, copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (_Bool)removeObjectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2 accessibility:(long long)arg3;

@end

