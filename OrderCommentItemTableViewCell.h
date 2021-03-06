//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface OrderCommentItemTableViewCell : UITableViewCell
{
    UILabel *_orderItemListName;
    UILabel *_orderItemListPackage;
    UILabel *_orderItemListPrice;
    UIImageView *_orderItemListImage;
    UIButton *_doneShowButton;
    UIButton *_goShowButton;
    UIImageView *_reportIssueBackground;
    UILabel *_reportIssueLabel;
}

@property(nonatomic) __weak UILabel *reportIssueLabel; // @synthesize reportIssueLabel=_reportIssueLabel;
@property(nonatomic) __weak UIImageView *reportIssueBackground; // @synthesize reportIssueBackground=_reportIssueBackground;
@property(nonatomic) __weak UIButton *goShowButton; // @synthesize goShowButton=_goShowButton;
@property(nonatomic) __weak UIButton *doneShowButton; // @synthesize doneShowButton=_doneShowButton;
@property(retain, nonatomic) UIImageView *orderItemListImage; // @synthesize orderItemListImage=_orderItemListImage;
@property(retain, nonatomic) UILabel *orderItemListPrice; // @synthesize orderItemListPrice=_orderItemListPrice;
@property(retain, nonatomic) UILabel *orderItemListPackage; // @synthesize orderItemListPackage=_orderItemListPackage;
@property(retain, nonatomic) UILabel *orderItemListName; // @synthesize orderItemListName=_orderItemListName;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

