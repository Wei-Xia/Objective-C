//
//  main.m
//  NSArray
//
//  Created by Wei on 7/14/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    
    @autoreleasepool {
        
        // Create three NSDate objects
        NSDate *now = [NSDate date];
        NSDate *tomorrow = [now dateByAddingTimeInterval:24.0*60.0*60.0];
        NSDate *yesterday = [now dateByAddingTimeInterval:-24.0*60.0*60.0];
        
        // Create an empty mutable array
        //NSMutableArray *dateList = [NSMutableArray array];    // Way One
        NSMutableArray *dateList = [[NSMutableArray alloc] init];   // Way Two
        
        //NSArray *dateList = [NSArray arrayWithObjects: now, tomorrow, yesterday, nil];   // Way three to create regular array
        
        // Add two dates to the array
        [dateList addObject:now];
        [dateList addObject:tomorrow];
        
        // Add yesterday at the beginning of the list
        [dateList insertObject:yesterday atIndex:0];
        
        // Iterate over the array
        for (NSDate *d in dateList) {
            NSLog(@"Here is a date: %@",d);
        }
        
        // Remove yesterday
        [dateList removeObjectAtIndex:0];
        NSLog(@"Now the first date is %@", dateList[0]);
    }
    return 0;
}

