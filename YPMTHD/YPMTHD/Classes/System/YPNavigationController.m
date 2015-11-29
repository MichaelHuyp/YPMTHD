//
//  YPNavigationController.m
//  YPMTHD
//
//  Created by 胡云鹏 on 15/11/29.
//  Copyright © 2015年 tyiti. All rights reserved.
//

#import "YPNavigationController.h"

@interface YPNavigationController ()

@end

@implementation YPNavigationController

+ (void)initialize
{
    UINavigationBar *bar = [UINavigationBar appearance];
    
    [bar setBackgroundImage:[UIImage imageNamed:@"bg_navigationBar_normal"] forBarMetrics:UIBarMetricsDefault];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

@end
