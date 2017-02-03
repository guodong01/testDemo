//
//  ViewController.m
//  testNew
//
//  Created by zhux on 2017/2/3.
//  Copyright © 2017年 zhux. All rights reserved.
//

#import "ViewController.h"
#import "ClUser.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    ClUser *user = [[ClUser alloc]init];
    user.nameXiao = clNameXiaoOne | clNameXiaoThree;
    user.sex = clSexMan;
    
    UISwipeGestureRecognizer *Swipe = [[UISwipeGestureRecognizer alloc]init];
    Swipe.direction = UISwipeGestureRecognizerDirectionDown |UISwipeGestureRecognizerDirectionUp;
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
