//
//  BNROwnedAppliance.h
//  Appliances
//
//  Created by Wei on 7/30/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRAppliance.h"

@interface BNROwnedAppliance : BNRAppliance

@property (readonly) NSSet *ownerNames;

// The designated initializer
-(instancetype) initWithProductName:(NSString *)pn firstOwnerName:(NSString *)n;
-(void)addOwnerNamesObject:(NSString *)n;
-(void)removeOwnerNamesObject:(NSString *)n;


@end
