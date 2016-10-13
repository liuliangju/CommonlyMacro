//
//  LJTools.h
//  CommonlyMacro
//
//  Created by liangju on 10/13/16.
//  Copyright © 2016 liangju. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LJTools : NSObject

// 中文转换为拼音，latin为true则表示带音标
+ (NSString *)chinese2PinYin:(NSString *)chinese latin:(BOOL)latin;

// 中文转换为拼音，不带音标
+ (NSString *)chinese2PinYin:(NSString *)chinese;

// 异步中文转拼音
+ (void)asyncChinese2PinYin:(NSString *)chinese complete:(void(^)(NSString *pinyin))complete;

// 圆角图片
+ (UIImage *)makeRoundedImage:(UIImage *)image radius:(float)radius;

// 设置UIImageView圆角半径
+ (void)setCorner:(UIImageView *)imageView withRadius:(CGFloat)radius;

/**
 *  通过颜色类型获取颜色对象
 *  总共预定义10个颜色，通过type取余获取对应的颜色
 *
 *  @param type 颜色类型，约定
 *
 *  @return 颜色
 */
+ (UIColor *)colorWithType:(NSInteger)type;

/**
 *  显示tips
 *
 *  @param hint    显示内容
 *  @param yOffset y轴偏移量
 */
+ (void)showHint:(NSString *)hint yOffset:(CGFloat)yOffset;

/**
 *  显示tips
 *
 *  @param hint 显示内容
 */
+ (void)showHint:(NSString *)hint;

//获得设备型号
+ (NSString *)getCurrentDeviceModel;

/*
 * @brief 把格式化的JSON格式的字符串转换成字典
 * @param jsonString JSON格式的字符串
 * @return 返回字典
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
/**
 *  字段转换成json字符串
 *
 *  @param dict 传入的字典
 *
 *  @return  字典字符串
 */
+ (NSString *)dictToJsonStr:(NSDictionary *)dict;

@end
