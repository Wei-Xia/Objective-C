//
//  BNREmployee.m
//  BNREmployee
//
//  Created by Wei on 7/16/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import "BNREmployee.h"

@implementation BNREmployee

-(double) yearOfEmployment
{
    // Do i have a non-nil hireDate?
    if (self.hireDate) {
        //NSTimeInterval is the same as double
        NSDate *now = [NSDate date];
        NSTimeInterval secs = [now timeIntervalSinceDate:self.hireDate];
        return secs/31557600.0;   //Seconds per year
    }
    else {return 0;}
}

@end
