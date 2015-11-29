//
//  YPHomeTopItem.h
//  YPMTHD
//
//  Created by 胡云鹏 on 15/11/29.
//  Copyright © 2015年 tyiti. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YPHomeTopItem : UIView

+ (instancetype)item;

/**
 *  设置监听器
 *
 *  @param target 监听器
 *  @param action 监听方法
 */
- (void)addTarget:(id)target action:(SEL)action;

@end
