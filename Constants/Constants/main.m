//
//  main.m
//  Constants
//
//  Created by Wei on 7/21/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSLog(@"\u03c0 is %f", M_PI);
        NSLog(@"%d is larger", MAX(10, 12));
        
        NSLocale *here = [NSLocale currentLocale];
        
//      NSString *currency = [here objectForKey:@"currency"];   // Way one
        NSString *currency = [here objectForKey:NSLocaleCurrencyCode];    // Way Two
        
        NSLog(@"Money is %@", currency);
    }
    return 0;
}

