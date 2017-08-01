//
//  main.m
//  launchBk
//
//  Created by yangxinlei on 2017/4/14.
//  Copyright © 2017年 qunar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

int main(int argc, char * argv[]) {
    
    setuid(0);
    setgid(0);
    
    @autoreleasepool {
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
}
