//
//  BNRAsset.m
//  BNREmployee_PreventingMemoryLeaks
//
//  Created by Wei on 7/20/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import "BNRAsset.h"
#import "BNREmployee.h"

@implementation BNRAsset

- (NSString *) description
{
    return [NSString stringWithFormat:@"<%@: $%d>", self.label, self.resaleValue];
}

- (void) dealloc
{
    NSLog(@"deallocating %@", self);
}
@end
