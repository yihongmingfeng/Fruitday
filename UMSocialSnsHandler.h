//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UMSocialiToast;

@interface UMSocialSnsHandler : NSObject
{
    UMSocialiToast *_toast;
    NSDictionary *_appInfo;
    id <UMSocialSnsHandlerDelegate> _currentSnsHandler;
    NSString *_qqAppId;
    NSString *_appkey;
}

+ (id)getShareImage:(id)arg1 snsType:(id)arg2;
+ (id)subString:(id)arg1 encode:(unsigned long long)arg2 bytesLength:(unsigned long long)arg3;
+ (id)scaleAndComplessImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)scaleImage:(id)arg1 ToSize:(struct CGSize)arg2;
+ (id)shareInstance;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *qqAppId; // @synthesize qqAppId=_qqAppId;
@property(nonatomic) id <UMSocialSnsHandlerDelegate> currentSnsHandler; // @synthesize currentSnsHandler=_currentSnsHandler;
- (void)clickHandlerWithSnsName:(id)arg1 controller:(id)arg2 socialControllerService:(id)arg3;
- (void)upLoadSnsAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSocialSnsHandler:(id)arg1;
- (void)handleClickHandler:(id)arg1 platformName:(id)arg2 sourceOpType:(id)arg3;
- (void)handleUIDelegate:(id)arg1 snsName:(id)arg2 responseCode:(int)arg3 errorString:(id)arg4 error:(id)arg5;
- (void)postOpWithText:(id)arg1 snsName:(id)arg2;
- (void)postOpWithSnsName:(id)arg1;
- (void)handleClickHandler:(id)arg1 platformName:(id)arg2;
- (_Bool)searchForURLSchemeWithPrefix:(id)arg1;
- (id)getUrlSchemeWithPrefix:(id)arg1;
- (id)searchForURLSchemeWithPrefix:(id)arg1 urlObjectArray:(id)arg2;
- (_Bool)searchForURLSchemeWithURLName:(id)arg1;
- (void)removeMaskView;
- (id)init;
@property(retain, nonatomic) NSDictionary *appInfo; // @synthesize appInfo=_appInfo;
- (void)requestAppInfo:(CDUnknownBlockType)arg1;
- (_Bool)handleOpenURL:(id)arg1 wxApiDelegate:(id)arg2;
- (void)dealloc;

@end

