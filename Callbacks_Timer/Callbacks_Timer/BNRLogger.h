//
//  BNRLogger.h
//  Callbacks_Timer
//
//  Created by Wei on 7/24/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRLogger : NSObject

@property (nonatomic) NSDate *lastTime;
- (NSString *)lastTimeString;
- (void)updateLastTime: (NSTimer *)t;

@end
