//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UMSocialSinaWeiboDelegate.h"
#import "UMSocialSnsHandlerDelegate.h"

@class NSString, UMSocialSinaWeibo;

@interface UMSocialSinaHandler : NSObject <UMSocialSinaWeiboDelegate, UMSocialSnsHandlerDelegate>
{
    UMSocialSinaWeibo *_sinaWeibo;
    CDUnknownBlockType _completion;
}

+ (void)openSSOWithRedirectURL:(id)arg1;
+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UMSocialSinaWeibo *sinaWeibo; // @synthesize sinaWeibo=_sinaWeibo;
- (void)resetSinaWeibo;
- (void)sinaweiboDidLogIn:(id)arg1;
- (void)sinaweiboLogInDidCancel:(id)arg1;
- (void)sinaweibo:(id)arg1 logInDidFailWithError:(id)arg2;
- (_Bool)needAuthorize;
- (void)loginWithController:(id)arg1 completion:(CDUnknownBlockType)arg2 snsName:(id)arg3;
- (_Bool)checkUrlSchema;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)isClientInstall:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

