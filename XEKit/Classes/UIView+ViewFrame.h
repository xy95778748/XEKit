//
//  UIView+ViewFrame.h
//  XYKit
//
//  Created by xingyi on 2018/9/4.
//  Copyright © 2018年 Xy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ViewFrame)

@property (assign, nonatomic) CGFloat viewX;

@property (assign, nonatomic) CGFloat viewY;

@property (assign, nonatomic, readonly) CGFloat viewMaxX;

@property (assign, nonatomic, readonly) CGFloat viewMaxY;

@property (assign, nonatomic) CGFloat viewWidth;

@property (assign, nonatomic) CGFloat viewHeight;

@property (assign, nonatomic) CGFloat viewCenterX;

@property (assign, nonatomic) CGFloat viewCenterY;

/// 设置 不透明
- (void)viewIsOpaque;

@end
