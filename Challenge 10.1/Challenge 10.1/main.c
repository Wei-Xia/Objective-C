//
//  main.c
//  Challenge 10.1
//
//  Created by Wei on 7/8/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void metersToFeetAndInches(double meters, unsigned int *ftPtr, double *inPtr)
{
    double feet;
    
    double fractionalPart = modf((meters * 3.281), &feet);
    
    if (ftPtr)
    {
        printf("Storing %f (double feet) to the address %p\n", feet, ftPtr);
        *ftPtr = (int)feet;
    }
    
    double inches = fractionalPart * 12.0;
    
    if (inPtr)
    {
        printf("Storing %.2f (double inches) to the address %p\n", inches, inPtr);
        *inPtr = inches;
    }
}

int main(int argc, const char * argv[])
{
    
    double meters = 3.0;
    unsigned int feet;
    double inches;
    
    metersToFeetAndInches(meters, &feet, &inches);
    printf("%.1f meters is equal to %d feet and %.1f inches.\n", meters, feet, inches);
    
    return 0;
}