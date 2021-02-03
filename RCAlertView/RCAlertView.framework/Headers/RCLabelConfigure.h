//
//  RCLabelConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/2/28.
//  Copyright © 2020 ye. All rights reserved.
//

#import <RCAlertView/RCBaseConfigure.h>

typedef enum {
    OtherLabel = 0,
    TitleLabel = 1,
    MessageLabel = 2
} RCLabelConfigureType;

typedef void (^lineActionBlock)(NSString * _Nullable lineUrl);

NS_ASSUME_NONNULL_BEGIN
@interface RCLabelConfigure : RCBaseConfigure
@property (nonatomic) UIFont *lbFont;                               //文本字体大小
@property (nonatomic) UIColor *lbTextColor;                         //文本字体颜色
@property (nonatomic, assign) NSInteger lbNumberLines;              //文本行数
@property (nonatomic, copy) NSString *textStr;                      //文本内容
@property (nonatomic) NSTextAlignment lbTextAlignment;              //文本显示（居中，左，右）
@property (nonatomic, assign) RCLabelConfigureType lbType;          //文本类型
@property (nonatomic, strong) NSMutableDictionary *lineDictionary;  //文本中的链接集合
@property (nonatomic, copy) lineActionBlock lineActionBlock;        //点击链接回调
@end

NS_ASSUME_NONNULL_END
