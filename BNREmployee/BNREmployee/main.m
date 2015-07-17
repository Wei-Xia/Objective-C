//
//  main.m
//  BNREmployee
//
//  Created by Wei on 7/16/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRPerson.h"


int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        // Create an instance of BNRPerson
        BNRPerson *mikey = [[BNRPerson alloc] init];
        
        // Give the instance variables interesting values using [*]setters
        // A setter method, or setter, allows code outside of a class to change/set the value of an instance variable
        [mikey setWeightInKilos:96];
        [mikey setHeightInMeters:1.8];
        
        // Log the instance varibales using the [*]getters
        // A getter method, or getter, allows code outside of a calss to read/get the value of an instance variable
        float height = [mikey heightInMeters];
        int weight = [mikey weightInKilos];
        NSLog(@"mikey is %.2f meters tall and weights %d kilograms", height, weight);
        
        // Log some values using custom methods
        float bmi = [mikey bodyMassIndex];
        NSLog(@"mikey has a BMI of %.3f", bmi);
        
    }
    return 0;
}