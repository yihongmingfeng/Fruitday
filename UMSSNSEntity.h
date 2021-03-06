//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSString, UMSocialAccountEntity, UMSocialSnsPlatform, UMSocialUrlResource;

@interface UMSSNSEntity : NSObject
{
    UMSocialAccountEntity *_snsAccount;
    NSString *_oauthURLString;
    UMSocialSnsPlatform *_scSnsDescriptor;
    NSString *_content;
    int _shareToType;
    CLLocation *_location;
    _Bool _isSendImage;
    _Bool _isSendUrlResource;
    _Bool _isShake;
    NSString *_accessToken;
    NSString *_usid;
    NSString *_shareText;
    id _shareImage;
    UMSocialUrlResource *_urlResource;
}

@property(retain, nonatomic) UMSocialUrlResource *urlResource; // @synthesize urlResource=_urlResource;
@property(retain, nonatomic) id shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(nonatomic) _Bool isShake; // @synthesize isShake=_isShake;
@property(nonatomic) _Bool isSendUrlResource; // @synthesize isSendUrlResource=_isSendUrlResource;
@property(nonatomic) _Bool isSendImage; // @synthesize isSendImage=_isSendImage;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) UMSocialAccountEntity *snsAccount; // @synthesize snsAccount=_snsAccount;
@property(retain, nonatomic) UMSocialSnsPlatform *scSnsDescriptor; // @synthesize scSnsDescriptor=_scSnsDescriptor;
@property(nonatomic) int shareToType; // @synthesize shareToType=_shareToType;
@property(copy, nonatomic) NSString *usid; // @synthesize usid=_usid;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) NSString *oauthURLString; // @synthesize oauthURLString=_oauthURLString;
- (id)initWithSNSType:(int)arg1;
- (void)dealloc;

@end

