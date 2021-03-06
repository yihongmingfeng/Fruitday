//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseTableViewCell.h"

#import "M80AttributedLabelDelegate.h"

@class NSLayoutConstraint, NSString, OfficialReplyView, UIButton, UIImageView, UILabel, UIView;

@interface MyPostedCell : FDBaseTableViewCell <M80AttributedLabelDelegate>
{
    UIImageView *_featuredImageView;
    NSLayoutConstraint *_featuredWidth;
    NSLayoutConstraint *_featuredHeight;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleHeight;
    NSLayoutConstraint *_titleTop;
    NSLayoutConstraint *_titleLeft;
    UILabel *_descLabel;
    NSLayoutConstraint *_descLabelHeight;
    UIView *_imageGroupView;
    NSLayoutConstraint *_imageGroupHeight;
    UIView *_messageView;
    UILabel *_pubDateLabel;
    UIButton *_commentCountButton;
    UIButton *_likeCountButton;
    NSLayoutConstraint *_separatorHeight;
    OfficialReplyView *_officialReplyView;
    id <MyPostedCellDelegate> _delegate;
}

+ (double)heightForCellInTableView:(id)arg1 rowAtIndexPath:(id)arg2 dataSource:(id)arg3;
+ (id)cellForTableView:(id)arg1;
@property(retain, nonatomic) id <MyPostedCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OfficialReplyView *officialReplyView; // @synthesize officialReplyView=_officialReplyView;
@property(nonatomic) __weak NSLayoutConstraint *separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(nonatomic) __weak UIButton *likeCountButton; // @synthesize likeCountButton=_likeCountButton;
@property(nonatomic) __weak UIButton *commentCountButton; // @synthesize commentCountButton=_commentCountButton;
@property(nonatomic) __weak UILabel *pubDateLabel; // @synthesize pubDateLabel=_pubDateLabel;
@property(nonatomic) __weak UIView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) __weak NSLayoutConstraint *imageGroupHeight; // @synthesize imageGroupHeight=_imageGroupHeight;
@property(nonatomic) __weak UIView *imageGroupView; // @synthesize imageGroupView=_imageGroupView;
@property(nonatomic) __weak NSLayoutConstraint *descLabelHeight; // @synthesize descLabelHeight=_descLabelHeight;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak NSLayoutConstraint *titleLeft; // @synthesize titleLeft=_titleLeft;
@property(nonatomic) __weak NSLayoutConstraint *titleTop; // @synthesize titleTop=_titleTop;
@property(nonatomic) __weak NSLayoutConstraint *titleHeight; // @synthesize titleHeight=_titleHeight;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *featuredHeight; // @synthesize featuredHeight=_featuredHeight;
@property(nonatomic) __weak NSLayoutConstraint *featuredWidth; // @synthesize featuredWidth=_featuredWidth;
@property(nonatomic) __weak UIImageView *featuredImageView; // @synthesize featuredImageView=_featuredImageView;
- (void).cxx_destruct;
- (void)m80AttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (id)prepareImageArray:(id)arg1;
- (void)displayCellByDataSources:(id)arg1 rowAtIndexPath:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

