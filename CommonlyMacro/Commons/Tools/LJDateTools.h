//
//  LJDateTools.h
//  CommonlyMacro
//
//  Created by liangju on 10/13/16.
//  Copyright © 2016 liangju. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LJDateTools : NSObject

/**
 *  获取当前日期
 *  例如2016年1月11日
 */
+ (NSString *)currenDate;

// 获取遥远的未来时间
+ (NSString *)getFutureTime;

// 获取过去的未来时间
+ (NSString *)getPastTime;

@end
