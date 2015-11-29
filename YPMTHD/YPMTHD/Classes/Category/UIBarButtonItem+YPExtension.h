//
//  UIBarButtonItem+YPExtension.h
//  YPMTHD
//
//  Created by 胡云鹏 on 15/11/29.
//  Copyright © 2015年 tyiti. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (YPExtension)

+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action image:(NSString *)image highImage:(NSString *)highImage;

@end
