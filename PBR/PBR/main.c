//
//  main.c
//  PBR
//
//  Created by Wei on 7/6/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void metersToFeetAndInches(double meters,  int *ftPtr, double *inPtr)
{
    // This function assumes meters is non-negative.

    // Convert the number of meters into a floating-point number of feet
    double rawFeet = meters *3.281;

    //How many complete feet as an unsigned int?
    int feet = (int)rawFeet;

    // Store the number of feet at the supplied address
    printf("Storing %u to the address %p\n", feet, ftPtr);
    *ftPtr = feet;
    
    // Calculate inches
    double fractionalFoot = rawFeet-feet;
    double inches = fractionalFoot*12.0;
    
    // Store the number of inches at the supplied address
    printf("Storing %.2f to the address %p\n", inches, inPtr);
    *inPtr=inches;
}

int main(int argc, const char * argv[])
{
    double meters =3.0;
    int feet;
    double inches;
    
    metersToFeetAndInches(meters, &feet, &inches);
    
    printf("%.0f meters is equal to %d feet and %.2f inches.\n", meters, feet, inches);

    return 0;
}

