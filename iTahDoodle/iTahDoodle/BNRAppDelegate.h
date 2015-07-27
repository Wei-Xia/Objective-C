//
//  BNRAppDelegate.h
//  iTahDoodle
//
//  Created by Wei on 7/27/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BNRAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic) UITableView *taskTable;
@property (nonatomic) UITextField *taskField;
@property (nonatomic) UIButton *insertButton;

@property (nonatomic) NSMutableArray *tasks;

- (void)addTask: (id)sender;

@end
