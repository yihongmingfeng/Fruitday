//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MWPhoto.h"

@class NSString, NSURL, UIImage;

@interface MWPhoto : NSObject <MWPhoto>
{
    _Bool _loadingInProgress;
    id <SDWebImageOperation> _webImageOperation;
    UIImage *_underlyingImage;
    NSString *_caption;
    UIImage *_image;
    NSURL *_photoURL;
    NSString *_filePath;
}

+ (id)photoWithURL:(id)arg1;
+ (id)photoWithFilePath:(id)arg1;
+ (id)photoWithImage:(id)arg1;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
- (void).cxx_destruct;
- (void)cancelAnyLoading;
- (void)postCompleteNotification;
- (void)imageLoadingComplete;
- (void)unloadUnderlyingImage;
- (void)performLoadUnderlyingImageAndNotify;
- (void)loadUnderlyingImageAndNotify;
- (id)initWithURL:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

