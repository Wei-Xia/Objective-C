//
//  main.m
//  NSString
//
//  Created by Wei on 7/13/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSString *lament = @"Why me?";
        NSLog(@"%@",lament);
        
        NSString *slogan = @"I \u2661 New York!";
        NSLog(@"%@", slogan);
        
        if ([slogan isEqualToString:lament]) {
            NSLog(@"%@ and %@ are equal.", slogan, lament);
        }
    }
    return 0;
}

