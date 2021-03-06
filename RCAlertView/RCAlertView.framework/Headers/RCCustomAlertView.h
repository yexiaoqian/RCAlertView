//
//  RC_AlertView.h
//  RCAlertView
//
//  Created by ye on 2020/2/28.
//  Copyright © 2020 ye. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef void (^lineActionBlock)(NSString * _Nullable lineUrl);

NS_ASSUME_NONNULL_BEGIN

@interface RCCustomAlertView : UIView
@property (nonatomic, strong) UIColor *bgColor;                 //背景颜色
@property (nonatomic, assign) UIColor *contentBgColor;          //显示内容背景颜色
@property (nonatomic, strong) NSArray *actionsArray;            //控件数组
@property (nonatomic, assign) float contentViewRadius;          //中间显示视图圆角
@property (nonatomic, copy) lineActionBlock lineActionBlock;    //点击链接回调
/*
 *  样式一：文本中含有链接
 */
- (instancetype)initWithAlertTitle:(NSString *)title message:(NSString *)message withLineDictionary:(NSMutableDictionary *)lineDictionary withCheckBoxLineDictionary:(NSMutableDictionary *)checkBoxlineDictionary;
/*
 *  样式二
 */
- (instancetype)initWithAlertTitle:(NSString *)title message:(NSString *)message;
/*
 *  显示视图
 */
- (void)showInView:(UIView *)view;
/*
 *  隐藏视图
 */
- (void)hide;

@end

NS_ASSUME_NONNULL_END
