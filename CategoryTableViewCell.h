//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface CategoryTableViewCell : UITableViewCell
{
    UIImageView *_categoryPhoto;
    UILabel *_categoryTitle;
    UILabel *_categoryDescription;
}

@property(nonatomic) __weak UILabel *categoryDescription; // @synthesize categoryDescription=_categoryDescription;
@property(nonatomic) __weak UILabel *categoryTitle; // @synthesize categoryTitle=_categoryTitle;
@property(nonatomic) __weak UIImageView *categoryPhoto; // @synthesize categoryPhoto=_categoryPhoto;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

