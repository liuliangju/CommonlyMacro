//
//  LJDateTools.m
//  CommonlyMacro
//
//  Created by liangju on 10/13/16.
//  Copyright © 2016 liangju. All rights reserved.
//

#import "LJDateTools.h"

@implementation LJDateTools

+ (NSString *)currenDate {
    NSDate *  senddate = [NSDate date];
    NSDateFormatter  *dateformatter = [[NSDateFormatter alloc] init];
    [dateformatter setDateFormat:@"yyyy年MM月dd日"];
    NSString * locationString = [dateformatter stringFromDate:senddate];
    return locationString;
}

// 获取遥远的未来时间
+ (NSString *)getFutureTime {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss zzz"];
    NSString *destDateString = [dateFormatter stringFromDate:[NSDate distantFuture]];
    
    return destDateString;
}

// 获取过去的未来时间
+ (NSString *)getPastTime {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss zzz"];
    NSString *destDateString = [dateFormatter stringFromDate:[NSDate distantPast]];
    
    return destDateString;
}


@end
