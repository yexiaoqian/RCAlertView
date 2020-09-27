//
//  RCLabelConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/2/28.
//  Copyright © 2020 ye. All rights reserved.
//

#import <RCAlertView/RCAlertView.h>

typedef enum {
    OtherLabel = 0,
    TitleLabel = 1,
    MessageLabel = 2
} RCLabelConfigureType;

NS_ASSUME_NONNULL_BEGIN
@interface RCLabelConfigure : RCBaseConfigure

@property (nonatomic, assign) NSInteger lbNumberLines;
@property (nonatomic, copy) NSString *textStr;
@property (nonatomic) UIFont *lbFont;
@property (nonatomic) NSTextAlignment lbTextAlignment;
@property (nonatomic) UIColor *lbTextColor;
@property (nonatomic, assign) RCLabelConfigureType lbType;
@end

NS_ASSUME_NONNULL_END
