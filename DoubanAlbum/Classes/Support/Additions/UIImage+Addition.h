//
//  UIImage+Addition.h
//  DoubanAlbum
//
//  Created by Tonny on 12-12-13.
//  Copyright (c) 2012年 SlowsLab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Addition)

+(UIImage *)imageWithFileName:(NSString *)imageName;

+(UIImage *)imageWithFileName:(NSString *)imageName type:(NSString *)type;
@end
