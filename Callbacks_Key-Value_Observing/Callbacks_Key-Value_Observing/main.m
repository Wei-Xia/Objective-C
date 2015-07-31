//
//  main.m
//  Callbacks_Key-Value_Observing
//
//  Created by Wei on 7/31/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "BNRLogger.h"
#import "BNRObserver.h"

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
    
        
        __unused NSTimer *timers = [NSTimer scheduledTimerWithTimeInterval:2.0     //silence the warning with __unused modifier
                                                                    target:logger
                                                                  selector:@selector(updateLastTime:)
                                                                  userInfo:nil
                                                                   repeats:YES];
        
        __unused BNRObserver *observer = [[BNRObserver alloc] init];
        // I want to know the new value and the old value whenever lastTime is changed
        [logger addObserver:observer
                 forKeyPath:@"lastTime"
                    options:NSKeyValueObservingOptionNew | NSKeyValueObservingOptionOld
                    context:nil];
        
        [[NSRunLoop currentRunLoop] run];
        
    }
    return 0;
}

