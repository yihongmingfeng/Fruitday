//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QBImagePickerControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, QBImagePickerController, UIImagePickerController, UIViewController;

@interface DBImageSelectPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, QBImagePickerControllerDelegate>
{
    UIImagePickerController *_imagePickerController;
    QBImagePickerController *_qbImagePickerController;
    UIViewController *_viewController;
    unsigned long long _maximumNumber;
    CDUnknownBlockType _selectImageBlock;
}

@property(copy, nonatomic) CDUnknownBlockType selectImageBlock; // @synthesize selectImageBlock=_selectImageBlock;
- (void).cxx_destruct;
- (id)getCurrentTimeStamp;
- (id)highResImageForAsset:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didSelectAssets:(id)arg2;
- (void)imagePickerController:(id)arg1 didSelectAsset:(id)arg2;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewController:(id)arg1 selectImage:(CDUnknownBlockType)arg2 maximumNumber:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
