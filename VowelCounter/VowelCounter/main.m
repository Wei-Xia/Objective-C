//
//  main.m
//  VowelCounter
//
//  Created by Wei on 8/3/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+BNRVowelCounting.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSString *string = @"Hellow World";
        NSLog(@"\"%@\" has %d vowels", string, [string bnr_vowelCount]);
    }
    return 0;
}

