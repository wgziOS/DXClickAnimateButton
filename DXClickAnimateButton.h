//
//  DXClickAnimateButton.h
//  DXFangDuHui
//
//  Created by JHT on 2018/11/2.
//  Copyright © 2018年 QC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DXClickAnimateButton.h"
typedef void(^ClickBlock)(void);


@interface DXClickAnimateButton : UIButton

@property (nonatomic, copy) ClickBlock clickBlock;
@property (nonatomic, assign) CGFloat buttonScale;//缩小的比率，小于=1.0,大于0.0

//常规方法
+ (DXClickAnimateButton *)buttonWithType:(UIButtonType)type
                              frame:(CGRect)frame
                              title:(NSString *)title
                         titleColor:(UIColor *)color
                    backgroundColor:(UIColor *)backgroundColor
                    backgroundImage:(NSString *)image
                           andBlock:(ClickBlock)tempBlock;

//此方法初始化的按钮，点击后，在按钮frame内部松手，执行响应，拖出frame区域松手，响应取消
+ (DXClickAnimateButton *)touchUpOutsideCancelButtonWithType:(UIButtonType)type
                                                  frame:(CGRect)frame
                                                  title:(NSString *)title
                                             titleColor:(UIColor *)color
                                        backgroundColor:(UIColor *)backgroundColor
                                        backgroundImage:(NSString *)image
                                               andBlock:(ClickBlock)tempBlock;

@end
