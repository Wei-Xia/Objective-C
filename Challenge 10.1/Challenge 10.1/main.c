//
//  main.c
//  Challenge 10.1
//
//  Created by Wei on 7/8/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void metersToFeetAndInches(double meters,  int *ftPtr, double *inPtr)
{
    double rawFeet = meters *3.281;
    
    double feet = (int)rawFeet;
    
    double inches = modf(rawFeet,&feet);
}

int main(int argc, const char * argv[])
{
    double meters =3.0;
    double feet;
    double inches;
    
    metersToFeetAndInches(meters, &feet, &inches);
    
    printf("%.0f meters is equal to %d feet and %.2f inches.\n", meters, feet, inches);
    
    return 0;
}