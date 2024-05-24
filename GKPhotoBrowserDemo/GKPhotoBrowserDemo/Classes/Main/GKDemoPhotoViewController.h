//
//  GKDemoPhotoViewController.h
//  GKPhotoBrowserDemo
//
//  Created by QuintGao on 2024/5/24.
//  Copyright © 2024 QuintGao. All rights reserved.
//

#import "GKBaseViewController.h"
#import <GKPhotoBrowser/GKPhotoBrowser.h>

NS_ASSUME_NONNULL_BEGIN

@interface GKDemoPhotoViewController : GKBaseViewController

@property (nonatomic, assign) GKPhotoBrowserShowStyle showStyle;

@property (nonatomic, assign) GKPhotoBrowserHideStyle hideStyle;

@property (nonatomic, assign) GKPhotoBrowserLoadStyle loadStyle;

@property (nonatomic, assign) GKPhotoBrowserFailStyle failStyle;

@property (nonatomic, assign) NSInteger imageLoadStyle;

@property (nonatomic, assign) NSInteger videoLoadStyle;

@end

NS_ASSUME_NONNULL_END
