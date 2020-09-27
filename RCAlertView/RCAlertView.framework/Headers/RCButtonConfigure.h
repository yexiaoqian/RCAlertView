//
//  RCButtonConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/2/28.
//  Copyright © 2020 ye. All rights reserved.
//

#import <RCAlertView/RCAlertView.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^buttonBlock)(NSInteger index);

@interface RCButtonConfigure : RCBaseConfigure

@property (nonatomic, copy) NSString *btnTitleString;   //按钮文字
@property (nonatomic) UIColor *bgColor;                 //按钮背景颜色
@property (nonatomic) UIColor *btnTitleColor;           //按钮文字颜色
@property (nonatomic, assign) float btnRadius;          //按钮圆角
@property (nonatomic, assign) UIFont *btnFont;          //按钮文字字体
@property (nonatomic, copy) buttonBlock buttonBlock;

@end

NS_ASSUME_NONNULL_END
