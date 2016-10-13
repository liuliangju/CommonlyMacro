//
//  UIViewController+HUD.h
//  boc_ios
//
//  Created by liangju on 9/29/16.
//  Copyright © 2016 北京软虹科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (HUD)

- (void)showHudInView:(UIView *)view hint:(NSString *)hint;

- (void)hideHud;

- (void)showHint:(NSString *)hint;

- (void)showHudInView:(UIView *)view hint:(NSString *)hint dimBackGround:(BOOL)dimBackground;

// 从默认(showHint:)显示的位置再往上(下)yOffset
- (void)showHint:(NSString *)hint yOffset:(float)yOffset;

// 显示提示文字，自动消失
- (void)showHintInView:(UIView *)view hint:(NSString *)hint;

//显示进度提示
- (void)showProgress:(UIView *) view hint:(NSString *) hint progress:(float) progress;


@end
