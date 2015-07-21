//
//  BNRPerson.m
//  BNREmployee_CollectionClasses
//
//  Created by Wei on 7/21/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import "BNRPerson.h"

@implementation BNRPerson

- (float)bodyMassIndex
{
    //return _weightInKilos/(_weightInKilos*_heightInMeters);
    
    float h = [self heightInMeters];
    int w = [self weightInKilos];
    return w/(w*h);   // use Self method
}


@end
