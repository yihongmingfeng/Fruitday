//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseTableViewCell.h"

@class FBKVOController, M80AttributedLabel, NSLayoutConstraint, UIWebView;

@interface BaiKeDetailHeaderCell : FDBaseTableViewCell
{
    struct CGSize _tagSize;
    FBKVOController *_kvoController;
    double _baikeHeaderCellHeight;
    M80AttributedLabel *_acticleTitleM80View;
    UIWebView *_acticleWebView;
    NSLayoutConstraint *_titleHeightConstraint;
    NSLayoutConstraint *_webViewHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *webViewHeightConstraint; // @synthesize webViewHeightConstraint=_webViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleHeightConstraint; // @synthesize titleHeightConstraint=_titleHeightConstraint;
@property(nonatomic) __weak UIWebView *acticleWebView; // @synthesize acticleWebView=_acticleWebView;
@property(nonatomic) __weak M80AttributedLabel *acticleTitleM80View; // @synthesize acticleTitleM80View=_acticleTitleM80View;
- (void).cxx_destruct;
- (void)countWebViewHeightWithCellHeightBlock:(CDUnknownBlockType)arg1;
- (void)loadBaiKeWebViewWithData:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

