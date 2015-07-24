//
//  main.m
//  Callbacks
//
//  Created by Wei on 7/22/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRLogger.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        BNRLogger *logger = [[BNRLogger alloc]init];
        
        [[NSNotificationCenter defaultCenter] addObserver:logger
                                                 selector:@selector(zoneChange:)
                                                     name:NSSystemTimeZoneDidChangeNotification
                                                   object:nil];
        
        NSURL *url = [NSURL URLWithString:@"http://www.gutenberg.org/cache/epub/205/pg205.txt"];
        
        NSURLRequest *request = [NSURLRequest requestWithURL:url];
        
        __unused NSURLConnection *fetchConn = [[NSURLConnection alloc] initWithRequest:request
                                                                              delegate:logger
                                                                      startImmediately:YES];
        
//        NSTimer *timer= [NSTimer scheduledTimerWithTimeInterval:2             //unused variable warning
//                                                         target:logger
//                                                       selector:@selector(updateLastTime:)
//                                                       userInfo:nil
//                                                        repeats:YES];
        
        __unused NSTimer *timers = [NSTimer scheduledTimerWithTimeInterval:2.0     //silence the warning with __unused modifier
                                                                    target:logger
                                                                  selector:@selector(updateLastTime:)
                                                                  userInfo:nil
                                                                   repeats:YES];
        
        [[NSRunLoop currentRunLoop] run];
        
    }
    return 0;
}

