//
//  FastFunction.h
//  XYKit
//
//  Created by xingyi on 2018/9/4.
//  Copyright © 2018年 Xy. All rights reserved.
//

#import <UIKit/UIKit.h>

CG_INLINE UIColor *ColorWithRGB(int rgbVal) {
    return [UIColor
            colorWithRed:((float)((rgbVal & 0xFF0000) >> 16)) / 255.0
            green:((float)((rgbVal & 0x00FF00) >> 8)) / 255.0
            blue:((float)(rgbVal & 0x0000FF)) / 255.0
            alpha:1];
}

/// 系统字体
CG_INLINE UIFont *FontWithSystem(CGFloat fontSize) {
    return [UIFont systemFontOfSize:fontSize];
}

/// 系统加粗字体
CG_INLINE UIFont *FontWithBold(CGFloat fontSize) {
    return [UIFont boldSystemFontOfSize:fontSize];
}

/// app主题字体(需要自己设置)
CG_INLINE UIFont *FontTheme(CGFloat fontSize) {
    return [UIFont systemFontOfSize:fontSize];
}

/// imageWithNamed
CG_INLINE UIImage *ImageWithName(NSString *imgName) {
    return [UIImage imageNamed:imgName];
}

/// 屏幕宽
CG_INLINE CGFloat ScreenWidth() {
    return UIScreen.mainScreen.bounds.size.width;
}

/// 屏幕高
CG_INLINE CGFloat ScreenHeight() {
    return UIScreen.mainScreen.bounds.size.height;
}

/// 相对IPhone6的比例
CG_INLINE CGFloat ScreenDesignScale() {
    return ScreenWidth() / 375.0;
}

/// 适配后的大小
CG_INLINE CGFloat AdapterDesign(CGFloat val) {
    return ScreenDesignScale() * val;
}

/// 状态栏高
CG_INLINE CGFloat StatusBarHeight() {
    return UIApplication.sharedApplication.statusBarFrame.size.height;
}

/// 顶部安全区(statusBarH + naviagtionBarH)
CG_INLINE CGFloat TopSafeMargin() {
    return StatusBarHeight() + 44;
}

/// 底部margin (不包括tabbar)
CG_INLINE CGFloat BottomMargin() {
    return StatusBarHeight() > 20? 33 : 0;
}

/// 底部安全区 (底部margin + tabbar)
CG_INLINE CGFloat BottomSafeMargin() {
    return BottomMargin() + 49;
}

/// 判断是否为IPhone X
CG_INLINE BOOL isIPhoneX() {
    return ScreenWidth() == 375 && ScreenHeight() == 812;
}

/// 判断是否为IPhone Plus
CG_INLINE BOOL isIPhonePlus() {
    return ScreenWidth() == 414 && ScreenHeight() == 736;
}

/// 判断是否为iPhone非Plus
CG_INLINE BOOL isIPhone6() {
    return ScreenWidth() == 375 && ScreenHeight() == 667;
}

CG_INLINE BOOL isPhone5() {
    return ScreenWidth() == 320 && ScreenHeight() == 568;
}

