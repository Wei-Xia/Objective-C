//
//  main.c
//  Struct
//
//  Created by Wei on 7/7/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

/*
// Here is the declaration of the struct
struct Person {
    float heightInMeters;
    int weightInKilos;
};
*/

// Here is the new declaration of the type person

typedef struct{
    float heightInMeters;
    int weightInKilos;
} Person;


int main(int argc, const char * argv[])
{
    //struct Person mikey;
    Person mikey;
    mikey.heightInMeters=1.7;
    mikey.weightInKilos=96;
    
    //struct Person aaron;
    Person aaron;
    aaron.heightInMeters=1.97;
    aaron.weightInKilos=84;
    
    printf("mikey is %.2f meters tall.\n", mikey.heightInMeters);
    printf("mikey weights %d kilograms.\n\n", mikey.weightInKilos);
    
    printf("arron is %.2f meters tall.\n", aaron.heightInMeters);
    printf("arron weights %d kilograms.\n", aaron.weightInKilos);
    
    return 0;
}

