//
//  main.m
//  TimeAfterTime 2.0
//
//  Created by Wei on 7/9/15.
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
        
        NSDate *later = [now dateByAddingTimeInterval:10000000];
        NSLog(@"In 10000 seconds, it will be %@",later);
        
        //Nesting message
//        NSDate *now = [NSDate date];
//        double seconds=[now timeIntervalSince1970];
//        NSLog(@"It has been %f seconds since the statt of 1970.", seconds);
//        
//        double seconds = [[NSDate date] timeIntervalSince1970];
//        NSLog(@"It has been %f seconds since the statt of 1970.", seconds);
        
    }
    return 0;
}

