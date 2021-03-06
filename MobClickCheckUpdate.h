//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface MobClickCheckUpdate : NSObject
{
    NSString *_appHomeUrl;
    NSString *_updateTitle;
    NSString *_updateCancelButtonTitle;
    NSString *_updateOtherButtonTitles;
    id _updateDelegate;
    SEL _appUpdateSelector;
    NSMutableDictionary *_updateInfo;
    _Bool _checkUpdateJobFlag;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(nonatomic) id updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) SEL appUpdateSelector; // @synthesize appUpdateSelector=_appUpdateSelector;
@property(copy, nonatomic) NSString *updateOtherButtonTitles; // @synthesize updateOtherButtonTitles=_updateOtherButtonTitles;
@property(copy, nonatomic) NSString *updateCancelButtonTitle; // @synthesize updateCancelButtonTitle=_updateCancelButtonTitle;
@property(copy, nonatomic) NSString *updateTitle; // @synthesize updateTitle=_updateTitle;
@property(copy, nonatomic) NSString *appHomeUrl; // @synthesize appHomeUrl=_appHomeUrl;
- (id)description;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkUpdateWithDelegate:(id)arg1 selector:(SEL)arg2;
- (void)checkUpdate;
- (void)checkUpdate:(id)arg1 cancelButtonTitle:(id)arg2 otherButtonTitles:(id)arg3;
- (void)checkAppUpdateResult;
- (id)getData:(id)arg1 error:(id *)arg2;
- (void)excuteUpdate:(id)arg1;
- (_Bool)checkAppUpdate:(id)arg1;
- (void)appUpdateWithAlert:(id)arg1;
- (id)setAppUpdateData;
- (void)toggleCheckUpdateJobFlag;
- (void)gotAppkey;
- (id)init;

@end

