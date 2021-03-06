//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSMutableArray, UIImageView;

@interface FDSegmentView : UIControl
{
    NSMutableArray *_titleLabels;
    UIImageView *_selectedImageView;
    UIImageView *_backgroundImageView;
    struct CGPoint _pointAtTouchBegin;
    unsigned long long _selectedIndex;
    NSArray *_titles;
    CDUnknownBlockType _selectTitleLabelCompletionBlock;
    CDUnknownBlockType _viewDidAppearBlock;
    CDUnknownBlockType _viewDidDisappearBlock;
}

@property(copy, nonatomic) CDUnknownBlockType viewDidDisappearBlock; // @synthesize viewDidDisappearBlock=_viewDidDisappearBlock;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearBlock; // @synthesize viewDidAppearBlock=_viewDidAppearBlock;
@property(copy, nonatomic) CDUnknownBlockType selectTitleLabelCompletionBlock; // @synthesize selectTitleLabelCompletionBlock=_selectTitleLabelCompletionBlock;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)indexForTitleLabelAtPoint:(struct CGPoint)arg1;
- (id)titleLabelForPoint:(struct CGPoint)arg1;
- (void)changeTitleLabelStateToSelectedAtIndex:(unsigned long long)arg1;
- (void)animationForSelectedImageViewMoveTo:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)animationForSelectedImageViewMoveTo:(unsigned long long)arg1;
- (void)animationForSelectedImageViewMovePointX:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animationForSelectedImageViewMovePointX:(double)arg1;
- (void)drawAllViews;
- (void)selectTitleLabelAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)selectTitleLabelAtIndex:(unsigned long long)arg1;
- (void)setSelectedImage:(id)arg1 backgroundImage:(id)arg2;
- (void)initialization;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

