//
//  ViewController.m
//  CommonlyMacro
//
//  Created by liangju on 10/13/16.
//  Copyright © 2016 liangju. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    [self showHint:@"成功"];
    
    NSLog(@"打印点东西");
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
