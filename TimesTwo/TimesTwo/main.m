//
//  main.m
//  TimesTwo
//
//  Created by Wei on 7/9/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDate *currentTime1 = nil;  //this is nil for zero value
        NSLog(@"CurrentTime's value is %p", currentTime1);
        
        NSDate *currentTime = [NSDate date];
        NSLog(@"CurrentTime's value is %p", currentTime);
        
        NSDate *startTime = currentTime;
        
        sleep(2);
        
        currentTime= [NSDate date];
        NSLog(@"CurrentTime's value is %p", currentTime);
        NSLog(@"The address of the original object is %p", startTime);
        
        sleep(1);
        
        currentTime= nil;
        NSLog(@"CurrentTime's value is %p", currentTime);
        
    }
    return 0;
}

