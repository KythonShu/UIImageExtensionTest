//
//  ViewController.m
//  UIImageExtensionTest
//
//  Created by  舒柳洋 on 2017/2/8.
//  Copyright © 2017年 Liuyang Shu. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    UIImage *image = [UIImage imageNamed:@"IMG_5577.JPG"];
//    UIImage *image2 = [UIImage imageNamed:@"IMG_5577.JPG"];
    
//    CGRect size = self.imageView.frame;
//    image = [image subImageWithRect:size];
//    image = [image scaleToSize:CGSizeMake(20, 40)];
//    image = [image imageRotatedByDegrees:45.];
//    image2 = [image2 imageRotatedByRadians:2.5];
//    image = [image imageByScalingProportionallyToSize:CGSizeMake(10, 400)];
//    image = [image imageByScalingToSize:CGSizeMake(10, 400)];
//    image = [image addImage:image toImage:image2];
    
//    image = [image imageWithBackgroundColor:[UIColor redColor] shadeAlpha1:0 shadeAlpha2:1 shadeAlpha3:1 shadowColor:[UIColor blueColor] shadowOffset:CGSizeMake(20, 20) shadowBlur:.5];
//    image = [image subImageAtRect:CGRectMake(200, 200, 200, 200)];
    [self.imageView setImage:image];
    
}

@end
