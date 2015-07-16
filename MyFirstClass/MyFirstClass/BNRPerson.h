//
//  BNRPerson.h
//  MyFirstClass
//
//  Created by Wei on 7/15/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRPerson : NSObject

{
    // BNRPerson has two instance variable
    
    float _heightInMeters;
    int _weightInKilos;
    
}

// BNRPerson has methods to read and set its instance variables

-(float)heightInMeters;
-(void)setHeightInMeters: (float)h;
-(int)weightInKilos;
-(void)setWeightInKilos: (int)w;

// BNRPerson has a method that calculate the Boday Mass Index
-(float)bodyMassIndex;

@end
