//
//  BNRPerson.m
//  BNRPerson_Properties
//
//  Created by Wei on 7/16/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import "BNRPerson.h"

@implementation BNRPerson
- (float)heightInMeters
{
    return _heightInMeters;
}

- (void)setHeightInMeters:(float)h
{
    _heightInMeters = h;
}

- (int)weightInKilos;
{
    return _weightInKilos;
}

- (void)setWeightInKilos:(int)w
{
    _weightInKilos = w;
}

- (float)bodyMassIndex
{
    //return _weightInKilos/(_weightInKilos*_heightInMeters);
    
    float h = [self heightInMeters];
    int w = [self weightInKilos];
    return w/(w*h);   // use Self method
}


@end
