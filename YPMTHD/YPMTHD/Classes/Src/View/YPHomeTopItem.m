//
//  YPHomeTopItem.m
//  YPMTHD
//
//  Created by 胡云鹏 on 15/11/29.
//  Copyright © 2015年 tyiti. All rights reserved.
//

#import "YPHomeTopItem.h"

@interface YPHomeTopItem ()

@property (weak, nonatomic) IBOutlet UIButton *iconBtn;

@end

@implementation YPHomeTopItem

+ (instancetype)item
{
    return [[[NSBundle mainBundle] loadNibNamed:NSStringFromClass([self class]) owner:nil options:nil] lastObject];
}

- (void)addTarget:(id)target action:(SEL)action
{
    [self.iconBtn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
}

@end
