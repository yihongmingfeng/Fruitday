//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewModel.h"

@class ActivityDataModel, ArticleDataModel, NSMutableArray, NSString;

@interface ActivityViewModel : FDBaseViewModel
{
    long long _currentQueryPage;
    NSMutableArray *_tmpCurrentMainList;
    NSString *_activityId;
    _Bool _hasMoreArticleList;
    ActivityDataModel *_activityDataModel;
    NSMutableArray *_articleList;
    ArticleDataModel *_selectedArticleDataModel;
}

@property(retain, nonatomic) ArticleDataModel *selectedArticleDataModel; // @synthesize selectedArticleDataModel=_selectedArticleDataModel;
@property(nonatomic) _Bool hasMoreArticleList; // @synthesize hasMoreArticleList=_hasMoreArticleList;
@property(retain, nonatomic) NSMutableArray *articleList; // @synthesize articleList=_articleList;
@property(retain, nonatomic) ActivityDataModel *activityDataModel; // @synthesize activityDataModel=_activityDataModel;
- (void).cxx_destruct;
- (id)JSONValue:(id)arg1;
- (void)setWorth:(id)arg1;
- (void)queryList;
- (void)getMoregetArticleList;
- (void)getArticleList:(id)arg1;
- (void)getActivityDataModel:(id)arg1;
- (id)init;

@end
