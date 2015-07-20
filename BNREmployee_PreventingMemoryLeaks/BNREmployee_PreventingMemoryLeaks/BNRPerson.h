//
//  BNRPerson.h
//  BNREmployee_PreventingMemoryLeaks
//
//  Created by Wei on 7/20/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRPerson : NSObject

// BNRPerson has two properties
@property (nonatomic) float heightInMeters;
@property (nonatomic) int weightInKilos;

//@property (nonatomic, readonly/readwrite) int weightInKilos;    //readwrite is the default setting.

// BNRPerson has a method that calculate the Boday Mass Index
-(float)bodyMassIndex;

@end