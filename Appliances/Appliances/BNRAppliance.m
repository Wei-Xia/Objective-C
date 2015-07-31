//
//  BNRAppliance.m
//  Appliances
//
//  Created by Wei on 7/30/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import "BNRAppliance.h"

@implementation BNRAppliance

-(instancetype) initWithProductName:(NSString *)pn
{
    // Call the NSObject's init method
    self = [super init];
    
    // Did it return something non-nil?
    if (self) {
        
        // Set the product name
        _productName = [pn copy];
        
        // Give voltage a starting value
        _voltage = 120;
    }
    
     // Return a pointer to the new project
    return self;
}

-(instancetype) init
{
    return [self initWithProductName:@"Unknown"];
}

@end
