//
//  RCCustomButtonConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/3/10.
//  Copyright © 2020 ye. All rights reserved.
//

#import <RCAlertView/RCAlertView.h>
#import "RCButtonConfigure.h"

typedef enum {
    Primary = 0,
    Secondary = 1,
    Cancel = 2
} RCCustomButtonConfigureType;

NS_ASSUME_NONNULL_BEGIN

typedef void (^actionBlock)(RCCustomButtonConfigureType type);

@interface RCCustomButtonConfigure : RCButtonConfigure

@property (nonatomic, assign) RCCustomButtonConfigureType buttonType;
@property (nonatomic, copy) actionBlock actionBlock;

- (instancetype)initActionWithTitle:(NSString *)title style:(RCCustomButtonConfigureType)type headler:(actionBlock)actionBlock;

@end

NS_ASSUME_NONNULL_END
