//
//  UIImage+Extensions.h
//  UIImageExtensionTest
//
//  Created by  舒柳洋 on 2017/2/8.
//  Copyright © 2017年 Liuyang Shu. All rights reserved.
//

#import <UIKit/UIKit.h>

CGFloat DegreesToRadians(CGFloat degrees);
CGFloat RadiansToDegrees(CGFloat radians);

@interface UIImage (Extensions)

/**
 根据rect以图片本身为参考进行截取

 @param rect <#rect description#>
 @return <#return value description#>
 */
- (UIImage *)subImageAtRect:(CGRect)rect;



/**
 等比例缩放于给定的size

 @param targetSize <#targetSize description#>
 @return <#return value description#>
 */
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;

/**
 根据给定的size进行缩放

 @param targetSize <#targetSize description#>
 @return <#return value description#>
 */
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;



/**
 传入弧度，旋转图片

 @param radians 传入的弧度
 @return <#return value description#>
 */
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;

/**
 传入度数，旋转图片

 @param degrees 传入的度数
 @return <#return value description#>
 */
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;


/**
 将一张图片加到另一张图片上

 @param image1 <#image1 description#>
 @param image2 <#image2 description#>
 @return <#return value description#>
 */
- (UIImage *)addImage:(UIImage *)image1 toImage:(UIImage *)image2;

/**
 给图片添加蒙版色

 @param bgColor 蒙版色
 @param alpha1 <#alpha1 description#>
 @param alpha2 <#alpha2 description#>
 @param alpha3 <#alpha3 description#>
 @param shadowColor 阴影颜色
 @param shadowOffset 阴影偏移量，正数在上负数在下
 @param shadowBlur 阴影模糊量
 @return <#return value description#>
 */
- (UIImage *) imageWithBackgroundColor:(UIColor *)bgColor
                           shadeAlpha1:(CGFloat)alpha1
                           shadeAlpha2:(CGFloat)alpha2
                           shadeAlpha3:(CGFloat)alpha3
                           shadowColor:(UIColor *)shadowColor
                          shadowOffset:(CGSize)shadowOffset
                            shadowBlur:(CGFloat)shadowBlur;

/**
 给图片添加阴影

 @param shadowColor 阴影颜色
 @param shadowOffset 阴影偏移量
 @param shadowBlur 阴影模糊量
 @return <#return value description#>
 */
- (UIImage *)imageWithShadowColor:(UIColor *)shadowColor
                     shadowOffset:(CGSize)shadowOffset
                       shadowBlur:(CGFloat)shadowBlur;


/**
 图片透明度

 @param alpha <#alpha description#>
 @return <#return value description#>
 */
- (UIImage *)imageByApplyingAlpha:(CGFloat)alpha;

@end
