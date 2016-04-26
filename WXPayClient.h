//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIAlertView;

@interface WXPayClient : NSObject
{
    NSString *_timeStamp;
    NSString *_traceId;
    NSDictionary *_orderDetail;
    UIAlertView *_blockBusyIndicator;
}

+ (id)shareInstance;
@property(retain, nonatomic) UIAlertView *blockBusyIndicator; // @synthesize blockBusyIndicator=_blockBusyIndicator;
@property(copy, nonatomic) NSDictionary *orderDetail; // @synthesize orderDetail=_orderDetail;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
- (void).cxx_destruct;
- (void)hideBlockBusyIndicator;
- (void)showBlockBusyIndicator;
- (void)showAlertWithTitle:(id)arg1 msg:(id)arg2;
- (void)reqPay:(id)arg1;
- (void)getPrepayIdOnline;
- (id)genSign:(id)arg1;
- (id)genTraceId;
- (id)genNonceStr;
- (id)genTimeStamp;
- (void)payOrder:(id)arg1;

@end
