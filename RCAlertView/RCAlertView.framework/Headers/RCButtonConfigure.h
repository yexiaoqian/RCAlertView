//
//  RCButtonConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/2/28.
//  Copyright © 2020 ye. All rights reserved.
//

#import <RCAlertView/RCBaseConfigure.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^buttonBlock)(NSInteger index);

@interface RCButtonConfigure : RCBaseConfigure
@property (nonatomic, copy) NSString *btnTitleString;   //按钮文字
@property (nonatomic) UIColor *bgColor;                 //按钮背景颜色
@property (nonatomic) UIColor *btnTitleColor;           //按钮文字颜色
@property (nonatomic, assign) float btnRadius;          //按钮圆角
@property (nonatomic, assign) UIFont *btnFont;          //按钮文字字体
@property (nonatomic, copy) buttonBlock buttonBlock;    //点击按钮回调
@end

NS_ASSUME_NONNULL_END
