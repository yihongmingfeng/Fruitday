//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JPFReceivedPacket, JPFTcpSocket, NSData;

@protocol JPFTcpSocketDelegate <NSObject>
- (void)connectionSendQueueEmpty:(JPFTcpSocket *)arg1;
- (void)connection:(JPFTcpSocket *)arg1 didSendData:(NSData *)arg2;
- (void)connection:(JPFTcpSocket *)arg1 didReceiveElement:(JPFReceivedPacket *)arg2;
- (void)connectionDidClose:(JPFTcpSocket *)arg1;
- (void)connectionDidSetup:(JPFTcpSocket *)arg1;
@end

