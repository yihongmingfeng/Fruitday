//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface OfflineBuildHistoryCell : UITableViewCell
{
    UILabel *_buildingNameLabel;
    UILabel *_buildAddressLabel;
    UILabel *_userNameLabel;
    UILabel *_userPhoneNumberLabel;
}

+ (id)cellForTableView:(id)arg1;
@property(nonatomic) __weak UILabel *userPhoneNumberLabel; // @synthesize userPhoneNumberLabel=_userPhoneNumberLabel;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak UILabel *buildAddressLabel; // @synthesize buildAddressLabel=_buildAddressLabel;
@property(nonatomic) __weak UILabel *buildingNameLabel; // @synthesize buildingNameLabel=_buildingNameLabel;
- (void).cxx_destruct;
- (void)cellForRowsAtIndexPath:(id)arg1 dataSource:(id)arg2 target:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

