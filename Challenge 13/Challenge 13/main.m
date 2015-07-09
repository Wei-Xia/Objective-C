//
//  main.m
//  Challenge 13
//
//  Created by Wei on 7/9/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSHost *host = [NSHost currentHost];
        //NSString *name=[host localizedName];
        
        //NSLog(@"The name of the computer %@",name);
        NSLog(@"My host is %@", host);
        
    }
    return 0;
}

