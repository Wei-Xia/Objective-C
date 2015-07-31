//
//  BNROwnedAppliance.m
//  Appliances
//
//  Created by Wei on 7/30/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import "BNROwnedAppliance.h"

@interface  BNROwnedAppliance()
{
    NSMutableSet *_ownerNames;
}

@end

@implementation BNROwnedAppliance

-(instancetype)initWithProductName:(NSString *)pn firstOwnerName:(NSString *)n
{
    // Call the superclass's initalizer
    if (self = [super initWithProductName:pn]) {
        
        // Create a set to hold owners names
        _ownerNames = [[NSMutableSet alloc] init];
        
        // Is the first owner name non-nil?
        if (n) {
            [_ownerNames addObject:n];
        }
    }
    
    // Return a pointer to the new object
    return self;
}




@end
