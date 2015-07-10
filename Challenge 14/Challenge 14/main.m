//
//  main.m
//  Challenge 14
//
//  Created by Wei on 7/9/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDateComponents *comps = [[NSDateComponents alloc] init];
        
        [comps setYear:1990];
        [comps setMonth:8];
        [comps setDay:12];
        [comps setHour:18];
        [comps setMinute:29];
        [comps setSecond:32];
        
        NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
        NSDate *dateOfBirth = [g dateFromComponents:comps];
        NSLog(@"My birthday is %@", dateOfBirth);
        
        
        NSDate *now = [NSDate date];
        double secondsSinceEarlierDate = [now timeIntervalSinceDate:dateOfBirth];
        NSLog(@"I have been living for %.0f seconds.\n", secondsSinceEarlierDate);
        
    }
    return 0;
}

