//
//  YPHomeDropdown.m
//  YPMTHD
//
//  Created by 胡云鹏 on 15/11/29.
//  Copyright © 2015年 tyiti. All rights reserved.
//

#import "YPHomeDropdown.h"

@implementation YPHomeDropdown

+ (instancetype)dropdown
{
    return [[[NSBundle mainBundle] loadNibNamed:NSStringFromClass([self class]) owner:nil options:nil] lastObject];
}

@end
