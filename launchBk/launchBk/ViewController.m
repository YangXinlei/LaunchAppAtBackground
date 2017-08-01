//
//  ViewController.m
//  launchBk
//
//  Created by yangxinlei on 2017/4/14.
//  Copyright © 2017年 qunar. All rights reserved.
//

#import "ViewController.h"
#include <spawn.h>
extern char **environ;

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (IBAction)launchBk:(UIButton *)sender {
    
    NSString *bundleId = self.bundleIdField.text;
    [self launchAppAtBackground:bundleId];

}


- (void)launchAppAtBackground:(NSString *)bundleId
{
    // 查看当前用户ID
    NSLog(@"当前真实用户ID：%d\n", getuid());
    NSLog(@"当前有效用户ID：%d\n", geteuid());
    
    NSString *tmpcycmd = [NSString stringWithFormat:@"[choose(CLApplicationLifecycleManagerAdapter)[0] launchApplication:@\"%@\"]", bundleId];
    NSLog(@"XXXXXX\n%@\nXXXXXX", tmpcycmd);
    
    
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    NSString *docDir = [paths objectAtIndex:0];
    NSString *tmpcycmdFile = [docDir stringByAppendingPathComponent:@"tmpcycmd.cy"];

    NSLog(@"XXXXXX\ntmpFile: %@\nXXXXXX", tmpcycmdFile);
    BOOL rlt = [tmpcycmd writeToFile:tmpcycmdFile atomically:YES encoding:NSUTF8StringEncoding error:nil];
    NSLog(@"XXXXXX\nwrite: %d\nXXXXXX", rlt);
//    NSString *shPth = [[NSBundle mainBundle] pathForResource:@"launchBk" ofType:@"sh"];
//    NSLog(@"XXXXXX\nshPth:\n%@\nXXXXXX", shPth);
//    NSLog(@"XXXXXX\n%@\nXXXXXX", bundleId);
//    
    NSString *cycmd = [NSString stringWithFormat:@"cycript -p locationd %@", tmpcycmdFile];
    NSLog(@"XXXXXX\n%@\nXXXXXX", cycmd);
    
    NSLog(@"XXXXXX\n%@\nXXXXXX", @"try with system()");
    int system_rlt = system([cycmd UTF8String]);
    NSLog(@"XXXXXX\nsystem_rlt: %d\nXXXXXX", system_rlt);
}


@end
