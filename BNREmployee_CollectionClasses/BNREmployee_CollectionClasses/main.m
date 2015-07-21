//
//  main.m
//  BNREmployee_CollectionClasses
//
//  Created by Wei on 7/21/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNREmployee.h"
#import "BNRAsset.h"


int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        // Create an array of BNREmployee objects
        NSMutableArray *employees = [[NSMutableArray alloc] init];
        
        // Create a dictionary of executives
        NSMutableDictionary *executives = [[NSMutableDictionary alloc] init];
        
        for (int i=0; i<10; i++) {
            // Create an instance of BNREmployee
            BNREmployee *mikey = [[BNREmployee alloc] init];
            
            // Give the instance varibales interesting values
            mikey.weightInKilos=90+i;
            mikey.heightInMeters=1.8-i/10.0;
            mikey.employeeID=i;
            
            // Put the employee in the employees array
            [employees addObject:mikey];
            
            // Is this the first employee?
            if (i==0){
                [executives setObject:mikey forKey:@"CEO"];
            }
            
            // Is this the second employee?
            if (i==1){
                [executives setObject:mikey forKey:@"CTO"];
            }
        }
        
        NSMutableArray *allAssets = [[NSMutableArray alloc] init];
        
        // Create 10 assets
        for (int i=0; i<10; i++) {
            // Create an asset
            BNRAsset *asset = [[BNRAsset alloc]init];
            
            // Give it an interesting label
            NSString *currentLable = [NSString stringWithFormat:@"Laptop %d",i];
            asset.label = currentLable;
            asset.resaleValue = 350 + i*17;
            
            // Get a random number between 0 and 9 inclusive
            NSUInteger randomIndex = random() % [employees count];
            
            // Find that employee
            BNREmployee *randomEmployee = [employees objectAtIndex:randomIndex];
            
            //Assign the asset to the employee
            [randomEmployee addAssets:asset];
            
            [allAssets addObject:asset];
        }
        
        // Sorting arrays
        NSSortDescriptor *voa = [NSSortDescriptor sortDescriptorWithKey:@"valueOfAssets" ascending:YES];
        
        NSSortDescriptor *eid = [NSSortDescriptor sortDescriptorWithKey:@"employeeID" ascending:YES];
        
        [employees sortUsingDescriptors:@[voa, eid]];
        
        
        
        NSLog(@"Employees: %@", employees);
        
        NSLog(@"Giving up ownership of one employee");
        
        [employees removeObjectAtIndex:5];
        
        NSLog(@"allAssets: %@", allAssets);
        
        // Print out the entire dictionary
        NSLog(@"executives: %@", executives);
        
        // Print out the CEO's information
        NSLog(@"CEO: %@", executives[@"CEO"]);
        executives=nil;
        
        
        // Filtering arrays
        NSPredicate *predicate = [NSPredicate predicateWithFormat:@"holder.valueOfAssets>70"];
        
        NSArray *toBeReclaimed = [allAssets filteredArrayUsingPredicate:predicate];
        NSLog(@"toBeReclaimed: %@", toBeReclaimed);
        toBeReclaimed=nil;
        
        
        NSLog(@"Giving up ownership of arrays");
        
        employees = nil;
        allAssets = nil;
        
    }
    return 0;
}