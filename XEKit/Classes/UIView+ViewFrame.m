//
//  UIView+ViewFrame.m
//  XYKit
//
//  Created by xingyi on 2018/9/4.
//  Copyright © 2018年 Xy. All rights reserved.
//

#import "UIView+ViewFrame.h"

@implementation UIView (ViewFrame)

- (void)setViewX:(CGFloat)viewX {
    
    CGRect f = self.frame;
    f.origin.x = viewX;
    self.frame = f;
}

- (CGFloat)viewX {
    
    return self.frame.origin.x;
}

- (void)setViewY:(CGFloat)viewY {
    
    CGRect f = self.frame;
    f.origin.y = viewY;
    self.frame = f;
}

- (CGFloat)viewY {
    
    return self.frame.origin.y;
}

- (CGFloat)viewMaxX {
    
    return CGRectGetMaxX(self.frame);
}

- (CGFloat)viewMaxY {
    
    return CGRectGetMaxY(self.frame);
}

- (void)setViewWidth:(CGFloat)viewWidth {
    
    self.frame = CGRectMake(self.viewX, self.viewY, viewWidth, self.viewHeight);
}

- (CGFloat)viewWidth {
    
    return self.bounds.size.width;
}

- (void)setViewHeight:(CGFloat)viewHeight {
    
    self.frame = CGRectMake(self.viewX, self.viewY, self.viewWidth, viewHeight);
}

- (CGFloat)viewHeight {
    
    return self.bounds.size.height;
}

- (void)setViewCenterX:(CGFloat)viewCenterX {
    
    CGPoint p = self.center;
    p.x = viewCenterX;
    self.center = p;
}

- (CGFloat)viewCenterX {
    
    return self.center.x;
}

- (void)setViewCenterY:(CGFloat)viewCenterY {
    
    CGPoint p = self.center;
    p.y = viewCenterY;
    self.center = p;
}

- (CGFloat)viewCenterY {
    
    return self.center.y;
}

- (void)viewIsOpaque {
    
    self.opaque = 1;
}

@end
