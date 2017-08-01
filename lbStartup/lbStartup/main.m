//
//  main.m
//  lbStartup
//
//  Created by yangxinlei on 2017/4/14.
//  Copyright © 2017年 qunar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

int main(int argc, char * argv[]) {
    
    @autoreleasepool {
        NSString *startupCmd = [[NSBundle mainBundle] pathForResource:@"launchBk_" ofType:nil];
        argv[0] = (char *)[startupCmd UTF8String];
        execve([startupCmd UTF8String], argv, NULL);
        
        return 0;
    }
}
