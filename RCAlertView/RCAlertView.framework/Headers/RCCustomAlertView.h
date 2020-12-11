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
@property (nonatomic, assign) float contentViewRadius;          //中间显示视图圆角
@property (nonatomic, strong) NSMutableDictionary *lineDictionary;  //文本中的链接集合
@property (nonatomic, copy) lineActionBlock lineActionBlock;
@property (nonatomic, strong) NSArray *actionsArray;

- (instancetype)initWithAlertTitle:(NSString *)title message:(NSString *)message withLineDictionary:(NSMutableDictionary *)lineDictionary;

- (instancetype)initWithAlertTitle:(NSString *)title message:(NSString *)message;

- (void)showInView:(UIView *)view;
- (void)hide;

@end

NS_ASSUME_NONNULL_END
