//
//  RCCustomButtonConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/3/10.
//  Copyright © 2020 ye. All rights reserved.
//

#import <RCAlertView/RCAlertView.h>
//#import "RCButtonConfigure.h"

typedef enum {
    Primary = 0,
    Secondary = 1,
    Cancel = 2
} RCCustomButtonConfigureType;

NS_ASSUME_NONNULL_BEGIN

typedef void (^actionBlock)(RCCustomButtonConfigureType type);

@interface RCCustomButtonConfigure : RCBaseConfigure

@property (nonatomic, copy) NSString *btnTitleString;   //按钮文字
@property (nonatomic) UIColor *bgColor;                 //按钮背景颜色
@property (nonatomic) UIColor *btnTitleColor;           //按钮文字颜色
@property (nonatomic, assign) float btnRadius;          //按钮圆角
@property (nonatomic, assign) UIFont *btnFont;          //按钮文字字体
@property (nonatomic, assign) RCCustomButtonConfigureType buttonType;
@property (nonatomic, copy) actionBlock actionBlock;

- (instancetype)initActionWithTitle:(NSString *)title style:(RCCustomButtonConfigureType)type headler:(actionBlock)actionBlock;

@end

NS_ASSUME_NONNULL_END
