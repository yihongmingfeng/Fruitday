//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, UIImageView, UIViewController;

@interface HotCategoryBlock : UIView
{
    UIImageView *_categoryImage;
    NSDictionary *_categoryInfo;
    UIViewController *_fromController;
}

@property(retain, nonatomic) UIViewController *fromController; // @synthesize fromController=_fromController;
@property(retain, nonatomic) NSDictionary *categoryInfo; // @synthesize categoryInfo=_categoryInfo;
@property(retain, nonatomic) UIImageView *categoryImage; // @synthesize categoryImage=_categoryImage;
- (void).cxx_destruct;
- (void)loadHotCategoryView:(id)arg1 isBackgroundMode:(_Bool)arg2;
- (void)viewTapped:(id)arg1;
- (void)buildProductBlock:(struct CGRect)arg1 withTarget:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withTarget:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

