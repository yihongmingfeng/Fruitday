//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface LogisticTableViewCell : UITableViewCell
{
    UILabel *_logisticDescLabel;
    UILabel *_logisticTimeLabel;
    UIImageView *_timeIndicator;
}

@property(nonatomic) __weak UIImageView *timeIndicator; // @synthesize timeIndicator=_timeIndicator;
@property(nonatomic) __weak UILabel *logisticTimeLabel; // @synthesize logisticTimeLabel=_logisticTimeLabel;
@property(nonatomic) __weak UILabel *logisticDescLabel; // @synthesize logisticDescLabel=_logisticDescLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
