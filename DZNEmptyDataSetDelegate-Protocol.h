//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@protocol DZNEmptyDataSetDelegate <NSObject>

@optional
- (void)emptyDataSetDidDisappear:(UIScrollView *)arg1;
- (void)emptyDataSetWillDisappear:(UIScrollView *)arg1;
- (void)emptyDataSetDidAppear:(UIScrollView *)arg1;
- (void)emptyDataSetWillAppear:(UIScrollView *)arg1;
- (void)emptyDataSetDidTapButton:(UIScrollView *)arg1;
- (void)emptyDataSetDidTapView:(UIScrollView *)arg1;
- (_Bool)emptyDataSetShouldAllowScroll:(UIScrollView *)arg1;
- (_Bool)emptyDataSetShouldAllowTouch:(UIScrollView *)arg1;
- (_Bool)emptyDataSetShouldDisplay:(UIScrollView *)arg1;
@end

