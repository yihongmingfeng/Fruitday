//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

@class NSString, UIImageView, UIScrollView;

@interface InstructionViewController : FDBaseViewController
{
    UIScrollView *_scrollView;
    UIImageView *_instructionImageView;
    NSString *_instructionTitle;
    NSString *_imageUrl;
}

@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *instructionTitle; // @synthesize instructionTitle=_instructionTitle;
@property(nonatomic) __weak UIImageView *instructionImageView; // @synthesize instructionImageView=_instructionImageView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
