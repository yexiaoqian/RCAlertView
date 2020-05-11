//
//  RCCheckBoxConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/3/2.
//  Copyright © 2020 ye. All rights reserved.
//

#import <RCAlertView/RCAlertView.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^checkBlock)(BOOL checkSelect);

@interface RCCheckBoxConfigure : RCBaseConfigure

@property (nonatomic, copy) NSString *checkString;          //文字
@property (nonatomic, assign) float checkBtnHeight;         //按钮高度
@property (nonatomic, assign) UIFont *checkFont;            //字体大小
@property (nonatomic, assign) NSInteger lbNumberLines;      //多行
@property (nonatomic, assign) UIColor *checkLbTextColor;    //文字颜色
@property (nonatomic, strong) UIImage *checkSelectImage;    //选择图片
@property (nonatomic, strong) UIImage *checkUnSelectImage;  //未选择图片
@property (nonatomic, copy) checkBlock checkBlock;

//以下两个属性不需要设置
@property (nonatomic, assign) float checkBoxHeight;         //整个控件的高度
@property (nonatomic, assign) float checkLbWidth;           //文字宽度


- (instancetype)initWithTitle:(NSString *)title checkSelectImage:(UIImage *)selectImage checkUnSelectImage:(UIImage *)unSelectImage block:(checkBlock)checkBlock;

@end

NS_ASSUME_NONNULL_END
