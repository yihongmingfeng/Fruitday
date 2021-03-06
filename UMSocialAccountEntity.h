//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface UMSocialAccountEntity : NSObject <NSCoding>
{
    NSString *_platformName;
    NSString *_userName;
    NSString *_usid;
    NSString *_iconURL;
    NSString *_accessToken;
    NSString *_profileURL;
    NSString *_openId;
    _Bool _isFirstOauth;
    NSDate *_expirationDate;
    NSString *_refreshToken;
    NSString *_unionId;
}

@property(copy, nonatomic) NSString *unionId; // @synthesize unionId=_unionId;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(nonatomic) _Bool isFirstOauth; // @synthesize isFirstOauth=_isFirstOauth;
@property(copy, nonatomic) NSString *profileURL; // @synthesize profileURL=_profileURL;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *usid; // @synthesize usid=_usid;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPlatformName:(id)arg1;
- (void)dealloc;

@end

