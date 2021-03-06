//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UMSocialData;

@interface UMSocialDataService : NSObject
{
    UMSocialData *_socialData;
    CDUnknownBlockType _completion;
    int _preUrlType;
    NSString *_preText;
    UIImage *_preImage;
    NSString *_preUrlResourceUrl;
}

+ (id)defaultDataService;
@property(copy, nonatomic) NSString *preUrlResourceUrl; // @synthesize preUrlResourceUrl=_preUrlResourceUrl;
@property(nonatomic) int preUrlType; // @synthesize preUrlType=_preUrlType;
@property(copy, nonatomic) UIImage *preImage; // @synthesize preImage=_preImage;
@property(copy, nonatomic) NSString *preText; // @synthesize preText=_preText;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UMSocialData *socialData; // @synthesize socialData=_socialData;
- (void)requestIsTokenValid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAddFollow:(id)arg1 followedUsid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSnsFriends:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSnsInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUnBindToSnsWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestBindToSnsWithType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUnOauthWithType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSocialAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestCommentList:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postCommentWithContent:(id)arg1 image:(id)arg2 templateText:(id)arg3 location:(id)arg4 shareToSNSWithUsid:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)postCommentWithContent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postAddLikeOrCancelWithCompletion:(CDUnknownBlockType)arg1;
- (void)didFinishGetUMSocialDataInViewController:(id)arg1;
- (void)postSNSWithTypes:(id)arg1 content:(id)arg2 image:(id)arg3 location:(id)arg4 urlResource:(id)arg5 presentedController:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (_Bool)canDirectShare:(int)arg1;
- (void)postSnsWithDictionary:(id)arg1;
- (void)postSNSWithTypes:(id)arg1 content:(id)arg2 image:(id)arg3 location:(id)arg4 urlResource:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)requestIsTokenValidInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSocialDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelAllRequestInQueueInternal;
- (void)requestAddFollowInternal:(id)arg1 followedUsid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSnsFriendsInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSnsInformationInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUnBindToSnsWithCompletionInternal:(CDUnknownBlockType)arg1;
- (void)requestBindToSnsWithTypeInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUnOauthWithTypeInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSocialAccountWithCompletionInternal:(CDUnknownBlockType)arg1;
- (id)getUMSocialAccount;
- (void)requestCommentListInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postCommentWithContentInternal:(id)arg1 image:(id)arg2 templateText:(id)arg3 location:(id)arg4 shareToSNSWithUsid:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)postCommentWithContentInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postAddLikeOrCancelWithCompletionInternal:(CDUnknownBlockType)arg1;
- (void)postSNSWithTypesInternal:(id)arg1 content:(id)arg2 image:(id)arg3 location:(id)arg4 urlResource:(id)arg5 completion:(CDUnknownBlockType)arg6 sourceOpType:(id)arg7;
- (void)postSNSWithTypesInternal:(id)arg1 contentDictionary:(id)arg2;
- (void)requestSocialDataWithCompletionInternal:(CDUnknownBlockType)arg1;
- (void)setUMSocialDelegate:(id)arg1;
@property(readonly, nonatomic) id <UMSocialDataDelegate> socialDataDelegate;
- (id)initWithUMSocialData:(id)arg1;
- (id)init;
- (void)dealloc;

@end

