//
//  ViewController.m
//  HZRAlertViews
//
//  Created by shikee_app02 on 16/4/22.
//  Copyright © 2016年 黄正瑞. All rights reserved.
//

#import "ViewController.h"
#import "HZRAlertView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIButton *ss = [UIButton buttonWithType:UIButtonTypeCustom];
    ss.frame = CGRectMake(100, 100, 100, 100);
    ss.backgroundColor = [UIColor blueColor];
    [self.view addSubview:ss];
    [ss addTarget:self action:@selector(ss) forControlEvents:UIControlEventTouchUpInside];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)ss{
    HZRAlertView *alert = [[HZRAlertView alloc]initWithTitle:@"ni 是个大傻逼!" Image:[UIImage imageNamed:@"quitBG"] message:@"不管咋样，我都会" cancelBtnTitle:@"取消" otherBtnTitle:@"确定" clickIndexBlock:^(NSInteger clickIndex) {
        
    }];
    alert.animationStyle=HZRASAnimationLeftShake;
    [alert showLXAlertView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
