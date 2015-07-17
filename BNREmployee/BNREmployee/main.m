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
        
        // Create an instance of BNREmployee
        BNREmployee *mikey = [[BNREmployee alloc] init];
        
        // Give the instance variables interesting values using [*]setters
        mikey.weightInKilos=96;
        mikey.heightInMeters=1.8;
        mikey.employeeID=12;
        mikey.hireDate=[NSDate dateWithNaturalLanguageString:@"Aug 2nd, 2010"];
        
        // Log the instance varibales using the [*]getters
        float height = mikey.heightInMeters;
        int weight = mikey.weightInKilos;
        NSLog(@"mikey is %.2f meters tall and weights %d kilos", height, weight);
        NSLog(@"Employee %d hired on %@", mikey.employeeID, mikey.hireDate);
        
        // Log the body mass index using the bodyMassIndex method
        float bmi = [mikey bodyMassIndex];
        double years = [mikey yearOfEmployment];
        NSLog(@"BMI of %.2f, has worked with us for %.2f years.", bmi, years);
        
    }
    return 0;
}