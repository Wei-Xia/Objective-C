//
//  BNREmployee.m
//  BNREmployee_Object
//
//  Created by Wei on 7/17/15.
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


// Overriding methods
- (float) bodyMassIndex
{
    //return 19.0;
    float normalBMI=[super bodyMassIndex];
    return normalBMI*0.9;
}

- (NSString *) description
{
    return [NSString stringWithFormat:@"<Employee %d>", self.employeeID];
}

@end