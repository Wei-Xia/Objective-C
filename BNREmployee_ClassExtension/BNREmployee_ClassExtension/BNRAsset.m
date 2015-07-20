//
//  BNRAsset.m
//  BNREmployee_ClassExtension
//
//  Created by Wei on 7/20/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import "BNRAsset.h"

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
