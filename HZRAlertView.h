//
//  HZRAlertView.h
//  HZRAlertViews
//
//  Created by shikee_app02 on 16/4/22.
//  Copyright © 2016年 黄正瑞. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger , HZRAShowAnimationStyle) {//枚举
    HZRASAnimationDefault    = 0,
    HZRASAnimationLeftShake  ,
    HZRASAnimationTopShake   ,
    HZRASAnimationNO         ,
};

typedef void(^HZRAlertClickIndexBlock)(NSInteger clickIndex);

@interface HZRAlertView : UIView
@property (nonatomic,copy)HZRAlertClickIndexBlock clickBlock;
@property (nonatomic,assign)HZRAShowAnimationStyle animationStyle;

/**
 *  初始化alert方法（根据内容自适应大小，目前只支持1个按钮或2个按钮）
 *
 *  @param title         标题
 *  @param message       内容（根据内容自适应大小）
 *  @param cancelTitle   取消按钮
 *  @param otherBtnTitle 其他按钮
 *  @param block         点击事件block
 *
 *  @return 返回alert对象
 */
-(instancetype)initWithTitle:(NSString *)title Image:(UIImage *)image message:(NSString *)message cancelBtnTitle:(NSString *)cancelTitle otherBtnTitle:(NSString *)otherBtnTitle clickIndexBlock:(HZRAlertClickIndexBlock)block;


/**
 *  showLXAlertView
 */
-(void)showLXAlertView;

/**
 *  不隐藏，默认为NO。设置为YES时点击按钮alertView不会消失（适合在强制升级时使用）
 */
@property (nonatomic,assign)BOOL dontDissmiss;
@end



@interface UIImage (colorful)
//a image using a color
+ (UIImage *)imageWithColor:(UIColor *)color;


@end
