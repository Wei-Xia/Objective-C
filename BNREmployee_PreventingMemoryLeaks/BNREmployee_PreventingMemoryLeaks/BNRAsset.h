//
//  BNRAsset.h
//  BNREmployee_PreventingMemoryLeaks
//
//  Created by Wei on 7/20/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BNREmployee;

@interface BNRAsset : NSObject

@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int resaleValue;
@property (nonatomic) BNREmployee *holder;

@end
