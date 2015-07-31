//
//  main.m
//  Appliances_Key-Value
//
//  Created by Wei on 7/31/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRAppliance.h"

int main(int argc, const char * argv[])
{
    
    @autoreleasepool {
        
        BNRAppliance *a = [[BNRAppliance alloc]init];
        NSLog(@"a is %@",a);
        [a setProductName:@"Washing Machine"];
        [a setVoltage:240];
        NSLog(@"a is %@", a);
        
        
    }
    return 0;
}

