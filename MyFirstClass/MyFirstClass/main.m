//
//  main.m
//  MyFirstClass
//
//  Created by Wei on 7/15/15.
//  Copyright (c) 2015 Wei Xia. All rights reserved.
//

#import <Foundation/Foundation.h>

struct Person {
    float heightInMeters;
    int weightInKilos;
};


int main(int argc, const char * argv[])
{
    struct Person mikey;
    mikey.heightInMeters=1.7;
    mikey.weightInKilos=96;
    
    struct Person aaron;
    aaron.heightInMeters=1.97;
    aaron.weightInKilos=84;
    
    printf("mikey is %.2f meters tall.\n", mikey.heightInMeters);
    printf("mikey weights %d kilograms.\n\n", mikey.weightInKilos);
    
    printf("arron is %.2f meters tall.\n", aaron.heightInMeters);
    printf("arron weights %d kilograms.\n", aaron.weightInKilos);
    
    return 0;
}

