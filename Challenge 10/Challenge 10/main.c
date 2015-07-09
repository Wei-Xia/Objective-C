//
//  main.c
//  Challenge 10
//
//  Created by Wei on 7/8/15.
//  Copyright (c) 2015 OO. All rights reserved.
//
// In metersToFeetAndInches(), change to use modf() instead


#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    double meter = 3.0;
    double inch;
    
    double rawFeet=meter*3.281;
    
    double feet = (int)rawFeet;
    
    inch = modf(rawFeet,&feet);
    
    printf("%.0f meters equals to %.0f feet and %.3f inches.\n", meter, feet, inch);
    
    return 0;
}

