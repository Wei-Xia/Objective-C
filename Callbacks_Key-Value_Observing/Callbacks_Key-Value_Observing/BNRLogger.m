//
//  BNRLogger.m
//  Callbacks_Key-Value_Observing
//
//  Created by Wei on 7/31/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import "BNRLogger.h"

@implementation BNRLogger

- (NSString *)lastTimeString
{
    static NSDateFormatter *dateFormatter = nil;
    if (!dateFormatter) {
        dateFormatter = [[NSDateFormatter alloc]init];
        [dateFormatter setTimeStyle:NSDateFormatterMediumStyle];
        [dateFormatter setDateStyle:NSDateFormatterMediumStyle];
        NSLog(@"created dateFormatter");
    }
    
    return [dateFormatter stringFromDate:self.lastTime];
}

- (void)updateLastTime:(NSTimer *)t
{
    NSDate *now = [NSDate date];
    
//    [self setLastTime:now];
    [self willChangeValueForKey:@"lastTime"];
    _lastTime = now;
    [self didChangeValueForKey:@"lastTime"];
    
    NSLog(@"Just set time to %@", self.lastTimeString);
}


-(void)zoneChange: (NSNotification *)note
{
    NSLog(@"The system time zone has changed!");
}

+ (NSSet *)keyPathsForValuesAffectingLastTimeString
{
    return  [NSSet setWithObject:@"lastTime"];
}
@end