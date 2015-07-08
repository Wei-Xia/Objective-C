//
//  main.c
//  Struct
//
//  Created by Wei on 7/7/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Here is the new declaration of the type person

typedef struct{
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex (Person *p)
{
    return p->weightInKilos/ (p->heightInMeters*p->weightInKilos);
}


int main(int argc, const char * argv[])
{
    // Allocate memory for one person struct
    Person *mikey = (Person *)malloc(sizeof(Person));
    
    // Fill in two members of the struct
    mikey->weightInKilos=96;
    mikey->heightInMeters=1.7;
    
    // Print out the BMI of the original Person
    float mikeyBMI=bodyMassIndex(mikey);
    printf("mikey has a BMI of %f\n", mikeyBMI);
    
    // Let the memory be recycled
    free(mikey);
    
    // Forget where it was
    mikey=NULL;
    
    return 0;
}

