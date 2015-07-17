//
//  main.m
//  BNREmployee
//
//  Created by Wei on 7/16/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNREmployee.h"


int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        // Create an instance of BNRPerson
        BNRPerson *mikey = [[BNREmployee alloc] init];
        
        // Give the instance variables interesting values using [*]setters
        // A setter method, or setter, allows code outside of a class to change/set the value of an instance variable
        mikey.weightInKilos=96;
        mikey.heightInMeters=1.8;
        
        // Log the instance varibales using the [*]getters
        NSLog(@"mikey has a weight of %d", mikey.weightInKilos);
        NSLog(@"mikey has a height of %.1f", mikey.heightInMeters);
        
        // Log some values using custom methods
        float bmi = [mikey bodyMassIndex];
        NSLog(@"mikey has a BMI of %.3f", bmi);
        
    }
    return 0;
}