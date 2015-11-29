//
//  UIView+YPAdd.h
//  对YYText的学习
//
//  Created by MichaelPPP on 15/11/27.
//  Copyright (c) 2015年 MichaelPPP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (YPAdd)

/**
 Returns the view's view controller (may be nil).
 返回view所属的控制器（可能为空）
 */
@property (nonatomic, readonly) UIViewController *viewController;

#pragma mark - 便捷访问方法 -
@property (nonatomic) CGFloat x;        ///< Shortcut for frame.origin.x.
@property (nonatomic) CGFloat y;        ///< Shortcut for frame.origin.y.
@property (nonatomic) CGFloat left;        ///< Shortcut for frame.origin.x.
@property (nonatomic) CGFloat top;         ///< Shortcut for frame.origin.y
@property (nonatomic) CGFloat right;       ///< Shortcut for frame.origin.x + frame.size.width
@property (nonatomic) CGFloat bottom;      ///< Shortcut for frame.origin.y + frame.size.height
@property (nonatomic) CGFloat width;       ///< Shortcut for frame.size.width.
@property (nonatomic) CGFloat height;      ///< Shortcut for frame.size.height.
@property (nonatomic) CGFloat centerX;     ///< Shortcut for center.x
@property (nonatomic) CGFloat centerY;     ///< Shortcut for center.y
@property (nonatomic) CGPoint origin;      ///< Shortcut for frame.origin.
@property (nonatomic) CGSize  size;        ///< Shortcut for frame.size.

/**
 Remove all subviews.
 
 @warning Never call this method inside your view's drawRect: method.
 
 移除所有子控件
 
 警告:不要在你视图的drawRect方法中调用
 */
- (void)removeAllSubviews;


/**
 Shortcut to set the view.layer's shadow
 便捷的设置view.layer的shadow
 
 @param color  Shadow Color
 @param offset Shadow offset
 @param radius Shadow radius
 */
- (void)setLayerShadow:(UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius;

@end


float YPDeviceSystemVersion();

#ifndef YPSystemVersion
#define YPSystemVersion YPDeviceSystemVersion()
#endif

#ifndef YPiOS6Later
#define YPiOS6Later (YPSystemVersion >= 6)
#endif

#ifndef YPiOS7Later
#define YPiOS7Later (YPSystemVersion >= 7)
#endif

#ifndef YPiOS8Later
#define YPiOS8Later (YPSystemVersion >= 8)
#endif

#ifndef YPiOS9Later
#define YPiOS9Later (YPSystemVersion >= 9)
#endif

CGSize YPDeviceScreenSize();

/** 屏幕 */
#define YPScreen [UIScreen mainScreen]

/** 屏幕宽度 */
#ifndef YPScreenWidth
#define YPScreenWidth YPDeviceScreenSize().width
#endif

/** 屏幕高度 */
#ifndef YPScreenHeight
#define YPScreenHeight YPDeviceScreenSize().height
#endif

/** 屏幕大小 */
#ifndef YPScreenSize
#define YPScreenSize YPDeviceScreenSize()
#endif

/** 屏幕Scale */
#ifndef YPScreenScale
#define YPScreenScale [UIScreen mainScreen].scale
#endif

/** 屏幕Bounds */
#ifndef YPScreenBounds
#define YPScreenBounds [UIScreen mainScreen].bounds
#endif


#pragma mark YPTODO
/*
 Create UIColor with a hex string.
 Example: UIColorHex(0xF0F), UIColorHex(66ccff), UIColorHex(#66CCFF88)
 
 Valid format: #RGB #RGBA #RRGGBB #RRGGBBAA 0xRGB ...
 The `#` or "0x" sign is not required.
 */
#ifndef UIColorHex
#define UIColorHex(_hex_)   [UIColor colorWithHexString:((__bridge NSString *)CFSTR(#_hex_))]
#endif



@interface UIColor (YYAdd)

/**
 Creates and returns a color object from hex string.
 
 @discussion:
 Valid format: #RGB #RGBA #RRGGBB #RRGGBBAA 0xRGB ...
 The `#` or "0x" sign is not required.
 The alpha will be set to 1.0 if there is no alpha component.
 It will return nil when an error occurs in parsing.
 
 Example: @"0xF0F", @"66ccff", @"#66CCFF88"
 
 @param hexStr  The hex string value for the new color.
 
 @return        An UIColor object from string, or nil if an error occurs.
 */
+ (UIColor *)colorWithHexString:(NSString *)hexStr;

/**
 Creates and returns a color object by add new color.
 
 @param add        the color added
 
 @param blendMode  add color blend mode
 */
- (UIColor *)colorByAddColor:(UIColor *)add blendMode:(CGBlendMode)blendMode;


@end











