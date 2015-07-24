//
//  main.m
//  VowelMovement
//
//  Created by Wei on 7/24/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // Create array of string and a container for devowelized ones
        NSArray *originalStrings = @[@"Sauerkraut", @"Raygun", @"Big Nerd Ranch", @"Mississippi"];
        
        NSLog(@"Original strings: %@", originalStrings);
        
        NSMutableArray *devowelizedStrings = [NSMutableArray array];
        
        // Create a list of characters to be removed from the string
        NSArray *vowels = @[@"a", @"e", @"i", @"o", @"u"];
        
        // Declare the block variable
        void (^devowelized)(id, NSUInteger, BOOL *);
        
        // Compose a block and assign it to the variable
        devowelized = ^(id string, NSUInteger i, BOOL *stop){
            
            NSMutableString *newString = [NSMutableString stringWithString:string];
            
            // Iterate over the array of vowels, replacing occurrences of each with an empty string
            for (NSString *s in vowels) {
                NSRange fullRange = NSMakeRange(0, [newString length]);
                [newString replaceOccurrencesOfString:s
                                         withString:@""
                                            options:NSCaseInsensitiveSearch
                                              range:fullRange];
            }
            
            [devowelizedStrings addObject:newString];
            
        }; //End of block assignment
    }
    return 0;
}

