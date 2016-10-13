//
//  LJMacros.h
//  CommonlyMacro
//
//  Created by liangju on 10/13/16.
//  Copyright © 2016 liangju. All rights reserved.
//

#ifndef LJMacros_h
#define LJMacros_h

#define IS_IPHONE_5 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )

//屏幕宽高
#define screenWidth  [UIScreen mainScreen].bounds.size.width
#define screenHeight [UIScreen mainScreen].bounds.size.height

#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]


//把角度转换成PI的方式
#define degreesToRadians(x) (M_PI*(x)/180.0)


#define LOGIN_URL @"http://www.peita.net/api/login"


// 是否是320的屏幕
#define kScreenWidth320 (screenWidth == 320)
#define KScreenWidth375 (screenWidth == 375)
#define KScreenWidth414 (screenWidth == 414)

//当前的宽   高
#define CURRENTSCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width
#define CURRENTSCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height

// UITableView分隔线颜色
#define kTableViewSeparatorColor RGBACOLOR(225, 225, 225, 1)


#endif /* LJMacros_h */
