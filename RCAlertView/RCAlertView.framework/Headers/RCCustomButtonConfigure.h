//
//  RCCustomButtonConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/3/10.
//  Copyright © 2020 ye. All rights reserved.
//

#import <RCAlertView/RCButtonConfigure.h>

typedef enum {
    Primary = 0,        //蓝底白字
    Secondary = 1,      //白底蓝字
    Cancel = 2          //白底灰字
} RCCustomButtonConfigureType;

NS_ASSUME_NONNULL_BEGIN

typedef void (^actionBlock)(RCCustomButtonConfigureType type);

@interface RCCustomButtonConfigure : RCButtonConfigure
@property (nonatomic, assign) RCCustomButtonConfigureType buttonType;   //自定义按钮类型
@property (nonatomic, copy) actionBlock actionBlock;                    //点击按钮回调
/*
 * init
 * title:按钮文字   type:按钮类型   actionBlock:按钮回调
 */
- (instancetype)initActionWithTitle:(NSString *)title style:(RCCustomButtonConfigureType)type headler:(actionBlock)actionBlock;

@end

NS_ASSUME_NONNULL_END
