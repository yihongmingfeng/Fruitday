//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor, UIFont, UIImage, UIView;

@interface EAIntroPage : NSObject
{
    _Bool _showTitleView;
    UIImage *_bgImage;
    UIColor *_bgColor;
    UIView *_titleIconView;
    double _titleIconPositionY;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    double _titlePositionY;
    NSString *_desc;
    UIFont *_descFont;
    UIColor *_descColor;
    double _descWidth;
    double _descPositionY;
    NSArray *_subviews;
    double _alpha;
    CDUnknownBlockType _onPageDidLoad;
    CDUnknownBlockType _onPageDidAppear;
    CDUnknownBlockType _onPageDidDisappear;
    UIView *_customView;
    UIView *_pageView;
}

+ (id)pageWithCustomViewFromNibNamed:(id)arg1 bundle:(id)arg2;
+ (id)pageWithCustomViewFromNibNamed:(id)arg1;
+ (id)pageWithCustomView:(id)arg1;
+ (id)page;
@property(retain, nonatomic) UIView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(copy, nonatomic) CDUnknownBlockType onPageDidDisappear; // @synthesize onPageDidDisappear=_onPageDidDisappear;
@property(copy, nonatomic) CDUnknownBlockType onPageDidAppear; // @synthesize onPageDidAppear=_onPageDidAppear;
@property(copy, nonatomic) CDUnknownBlockType onPageDidLoad; // @synthesize onPageDidLoad=_onPageDidLoad;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) NSArray *subviews; // @synthesize subviews=_subviews;
@property(nonatomic) double descPositionY; // @synthesize descPositionY=_descPositionY;
@property(nonatomic) double descWidth; // @synthesize descWidth=_descWidth;
@property(retain, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) UIFont *descFont; // @synthesize descFont=_descFont;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) double titlePositionY; // @synthesize titlePositionY=_titlePositionY;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double titleIconPositionY; // @synthesize titleIconPositionY=_titleIconPositionY;
@property(retain, nonatomic) UIView *titleIconView; // @synthesize titleIconView=_titleIconView;
@property(nonatomic) _Bool showTitleView; // @synthesize showTitleView=_showTitleView;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
- (void).cxx_destruct;
- (id)init;

@end
