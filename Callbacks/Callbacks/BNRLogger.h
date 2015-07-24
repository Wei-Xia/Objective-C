//
//  BNRLogger.h
//  Callbacks
//
//  Created by Wei on 7/23/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRLogger : NSObject
<NSURLConnectionDataDelegate, NSURLConnectionDataDelegate>

@property (nonatomic) NSDate *lastTime;
- (NSString *)lastTimeString;
- (void)updateLastTime: (NSTimer *)t;

@end
