//
//  main.m
//  TimeAfterTime
//
//  Created by Wei on 7/8/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDate *now = [NSDate date];
        NSLog(@"This NSDate object lives at %p", now);
        NSLog(@"The date is %@", now);
        
        double seconds=[now timeIntervalSince1970];
        
        NSLog(@"It has been %f seconds since the statt of 1970.", seconds);
        
    }
    return 0;
}

