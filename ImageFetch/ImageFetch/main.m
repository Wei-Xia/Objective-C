//
//  main.m
//  ImageFetch
//
//  Created by Wei on 7/22/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSURL *url = [NSURL URLWithString: @"http://www.google.com/images/logos/ps_logo2.png"];
        NSURLRequest *request = [NSURLRequest requestWithURL:url];
        NSError *error = nil;
        NSData *data = [NSURLConnection sendSynchronousRequest:request
                                             returningResponse:NULL
                                                         error:&error];
        
        if (!data) {
            NSLog(@"fetch failed: %@", [error localizedDescription]);
            return 1;
        }
        
        NSLog(@"The file is %lu bytes", (unsigned long)[data length]);
        
        BOOL written = [data writeToFile:@"/tmp/google.png"
                                    options:NSDataWritingAtomic
                                   error:&error];
        
        if (!written) {
            NSLog(@"write failed: %@", [error localizedDescription]);
            return 1;
        }
        
        NSLog(@"Success!");
    
        NSData *readData = [NSData dataWithContentsOfFile:@"/tmp/test.jpg"];   // Read an NSData from a file
        NSLog(@"The file read from the disk has %lu bytes", (unsigned long)[readData length]);
        
    }
    return 0;
}

