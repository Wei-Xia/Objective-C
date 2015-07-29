//
//  BNRDocument.h
//  TahDoodle
//
//  Created by Wei on 7/28/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface BNRDocument : NSDocument

@property (nonatomic) NSMutableArray *tasks;

@property (nonatomic) IBOutlet NSTableView *taskTable;

- (IBAction)addtasks:(id)sender;

@end
