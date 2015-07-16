//
//  BNRPerson.h
//  BNRPerson_Properties
//
//  Created by Wei on 7/16/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRPerson : NSObject

// Instance varibale declarations
{
    // BNRPerson has two instance variable
    
    float _heightInMeters;
    int _weightInKilos;
    
}

// BNRPerson has methods to read and set its instance variables

-(float)heightInMeters;     // Getter method declarations
-(void)setHeightInMeters: (float)h;   // Setter method declarations - notice difference in casing
-(int)weightInKilos;        // Getter method declarations
-(void)setWeightInKilos: (int)w;      // Setter method declarations - notice difference in casing

// BNRPerson has a method that calculate the Boday Mass Index
-(float)bodyMassIndex;

@end
