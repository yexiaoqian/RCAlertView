//
//  RCCheckBoxConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/3/2.
//  Copyright © 2020 ye. All rights reserved.
//

#import <RCAlertView/RCBaseConfigure.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^checkBlock)(BOOL checkSelect);
typedef void (^checkBoxLineActionBlock)(NSString * _Nullable lineUrl);

@interface RCCheckBoxConfigure : RCBaseConfigure

@property (nonatomic, assign) UIFont *checkFont;            //字体大小
@property (nonatomic, assign) UIColor *checkLbTextColor;    //文字颜色
@property (nonatomic, copy) NSString *checkString;          //文字
@property (nonatomic, assign) NSInteger lbNumberLines;      //多行
@property (nonatomic, assign) float checkBtnHeight;         //按钮高度
@property (nonatomic, strong) NSMutableDictionary *checkBoxlineDictionary;  //文本链接字典
@property (nonatomic, assign) BOOL checkBtnSelected;         //按钮是否选择
@property (nonatomic, copy) checkBlock checkBlock;  //是否选择按钮回调
@property (nonatomic, copy) checkBoxLineActionBlock checkBoxLineActionBlock;    //点击链接回调

//以下两个属性不需要设置
@property (nonatomic, assign) float checkBoxHeight;         //整个控件的高度
@property (nonatomic, assign) float checkLbWidth;           //文字宽度

/*
 *  init
 *  title:文本内容  selectImage:选择按钮图片  unSelectImage:未选择按钮图片
 */
- (instancetype)initWithTitle:(NSString *)title checkSelectImage:(UIImage *)selectImage checkUnSelectImage:(UIImage *)unSelectImage block:(checkBlock)checkBlock;

/*
 *  init
 *  title:文本内容  selectImage:选择按钮图片  unSelectImage:未选择按钮图片 selected:是否默认选择
 */
- (instancetype)initWithTitle:(NSString *)title checkSelectImage:(UIImage *)selectImage checkUnSelectImage:(UIImage *)unSelectImage selected:(BOOL)selected block:(checkBlock)checkBlock;

@end

NS_ASSUME_NONNULL_END
