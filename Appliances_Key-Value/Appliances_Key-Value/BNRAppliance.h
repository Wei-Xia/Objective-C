//
//  BNRAppliance.h
//  Appliances_Key-Value
//
//  Created by Wei on 7/31/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRAppliance : NSObject

@property (nonatomic, copy) NSString *productName;
@property (nonatomic) int voltage;
- (instancetype)initWithProductName:(NSString *)pn;

// The designated initializer
-(instancetype)initWithProductName:(NSString *)pn;

@end
