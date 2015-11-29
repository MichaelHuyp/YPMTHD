#import <AFNetworking.h>
#import "UIView+YPAdd.h"
#import "UIScrollView+YPExtension.h"
#import "UIViewController+YPInit.h"
#import "UIBarButtonItem+YPExtension.h"

#if DEBUG

#define YPLog(FORMAT, ...) fprintf(stderr,"[%s:%d行] %s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);

#else

#define YPLog(FORMAT, ...) nil

#endif

/**
 *  通知中心
 */
#define YPNotificationCenter [NSNotificationCenter defaultCenter]

/** 系统状态栏高度 */
#define YPStatusBarH 20
/** 系统导航栏高度 */
#define YPNavigationBarH 44
/** 系统导航栏+状态栏高度 */
#define YPStatusBarHAndNavBarH 64
/** 系统tabbar高度 */
#define YPTabBarH 49

/**
 *  间距
 */
#define YPPadding 8
#define YPPadding_2 16
#define YPPadding_3 24
#define YPPadding_4 32

/**
 *  颜色
 */
#define YPBlackColor [UIColor blackColor]
#define YPBlueColor [UIColor blueColor]
#define YPRedColor [UIColor redColor]
#define YPWhiteColor [UIColor whiteColor]
#define YPGrayColor [UIColor grayColor]
#define YPDarkGrayColor [UIColor darkGrayColor]
#define YPLightGrayColor [UIColor lightGrayColor]
#define YPGreenColor [UIColor greenColor]
#define YPCyanColor [UIColor cyanColor]
#define YPYellowColor [UIColor yellowColor]
#define YPMagentaColor [UIColor magentaColor]
#define YPOrangeColor [UIColor orangeColor]
#define YPPurpleColor [UIColor purpleColor]
#define YPBrownColor [UIColor brownColor]
#define YPClearColor [UIColor clearColor]

/**
 *  字体大小
 */
#define YPFont_5 [UIFont boldSystemFontOfSize:5]
#define YPFont_6 [UIFont boldSystemFontOfSize:6]
#define YPFont_7 [UIFont boldSystemFontOfSize:7]
#define YPFont_8 [UIFont boldSystemFontOfSize:8]
#define YPFont_9 [UIFont boldSystemFontOfSize:9]
#define YPFont_10 [UIFont boldSystemFontOfSize:10]
#define YPFont_11 [UIFont boldSystemFontOfSize:11]
#define YPFont_12 [UIFont boldSystemFontOfSize:12]
#define YPFont_13 [UIFont boldSystemFontOfSize:13]
#define YPFont_14 [UIFont boldSystemFontOfSize:14]
#define YPFont_15 [UIFont boldSystemFontOfSize:15]
#define YPFont_16 [UIFont boldSystemFontOfSize:16]
#define YPFont_17 [UIFont boldSystemFontOfSize:17]
#define YPFont_18 [UIFont boldSystemFontOfSize:18]
#define YPFont_19 [UIFont boldSystemFontOfSize:19]
#define YPFont_20 [UIFont boldSystemFontOfSize:20]
#define YPFont_21 [UIFont boldSystemFontOfSize:21]
#define YPFont_22 [UIFont boldSystemFontOfSize:22]
#define YPFont_23 [UIFont boldSystemFontOfSize:23]
#define YPFont_24 [UIFont boldSystemFontOfSize:24]
#define YPFont_25 [UIFont boldSystemFontOfSize:25]
#define YPFont_26 [UIFont boldSystemFontOfSize:26]
#define YPFont_27 [UIFont boldSystemFontOfSize:27]
#define YPFont_28 [UIFont boldSystemFontOfSize:28]
#define YPFont_29 [UIFont boldSystemFontOfSize:29]
#define YPFont_30 [UIFont boldSystemFontOfSize:30]


/** RGB颜色 */
#define YPColor_RGB(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define YPColor_RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define YPColor_RGBA_256(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)/255.0]
/** 随机色 */
#define YPRandomColor_RGB YPColor_RGB(arc4random_uniform(256),arc4random_uniform(256),arc4random_uniform(256))
#define YPRandomColor_RGBA YPColor_RGBA_256(arc4random_uniform(256),arc4random_uniform(256),arc4random_uniform(256),arc4random_uniform(256))

/** 弧度制转为角度制 */
#define YPAngle2Radian(angle) ((angle) / 180.0 * M_PI)
