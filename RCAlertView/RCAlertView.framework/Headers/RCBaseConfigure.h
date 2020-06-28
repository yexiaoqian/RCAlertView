//
//  RCBaseConfigure.h
//  RCAlertView
//
//  Created by ye on 2020/2/28.
//  Copyright © 2020 ye. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCBaseConfigure : NSObject
@property (nonatomic, assign) UIEdgeInsets marginInset;     //控件边距
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) NSInteger index;
@property (nonatomic, assign) NSInteger type;
- (UIView *)createUI;
@end

NS_ASSUME_NONNULL_END
