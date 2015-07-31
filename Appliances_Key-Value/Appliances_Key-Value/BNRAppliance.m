//
//  BNRAppliance.m
//  Appliances_Key-Value
//
//  Created by Wei on 7/31/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import "BNRAppliance.h"

@implementation BNRAppliance

-(instancetype) initWithProductName:(NSString *)pn
{
    if (self = [super init]) {
        _productName = [pn copy];
        _voltage = 120;
    }
    return self;
}

-(instancetype) init
{
    return [self initWithProductName:@"Unknown"];
}

-(NSString *)description
{
    return [NSString stringWithFormat:@"%@: %d volts", _productName, self.voltage];
}




@end