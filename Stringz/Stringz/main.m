//
//  main.m
//  Stringz
//
//  Created by Wei on 7/21/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSMutableString *str = [[NSMutableString alloc] init];
        
        for (int i=0; i<10; i++) {
            [str appendString:@"Aaron is cool! \n"];
        }
        [str writeToFile:@"/tmp/cool.txt"
              atomically:YES
                encoding:NSUTF8StringEncoding
                   error:NULL];
             NSLog(@"done writing /desktop/cool.txt");   // Use Find - Go, enter /Volumes/Macintosh HD/private/tmp to find the file
        
    }
    return 0;
}

