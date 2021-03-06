//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIButton, UILabel;

@interface OfflineBuildingHeaderView : UIView
{
    _Bool _isLoading;
    CDUnknownBlockType _startLocationAction;
    CDUnknownBlockType _opneLocationServiceAction;
    UILabel *_locationServiceLabel;
    UIButton *_startLocationButton;
    UILabel *_userAddressLabel;
    UIActivityIndicatorView *_loadingIndicatorView;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(nonatomic) __weak UILabel *userAddressLabel; // @synthesize userAddressLabel=_userAddressLabel;
@property(nonatomic) __weak UIButton *startLocationButton; // @synthesize startLocationButton=_startLocationButton;
@property(nonatomic) __weak UILabel *locationServiceLabel; // @synthesize locationServiceLabel=_locationServiceLabel;
@property(copy, nonatomic) CDUnknownBlockType opneLocationServiceAction; // @synthesize opneLocationServiceAction=_opneLocationServiceAction;
@property(copy, nonatomic) CDUnknownBlockType startLocationAction; // @synthesize startLocationAction=_startLocationAction;
- (void).cxx_destruct;
- (void)openLocationServiceAction:(id)arg1;
- (void)startLocationAction:(id)arg1;
- (void)loadUserAddressWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

