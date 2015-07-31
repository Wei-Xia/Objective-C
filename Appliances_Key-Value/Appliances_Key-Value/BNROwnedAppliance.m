//
//  BNROwnedAppliance.m
//  Appliances_Key-Value
//
//  Created by Wei on 7/31/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import "BNROwnedAppliance.h"

@interface  BNROwnedAppliance()
{
    NSMutableSet *_ownerNames;
}

@end

@implementation BNROwnedAppliance

-(instancetype)initWithProductName:(NSString *)pn
{
    return [self initWithProductName:pn firstOwnerName:nil];
}

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

-(void)addOwnerNames:(NSString *)n
{
    [_ownerNames addObject:n];
}

-(void)removeOwnerNames:(NSString *)n
{
    [_ownerNames removeObject:n];
}

-(NSSet *)ownerNames
{
    return [_ownerNames copy];
}


@end