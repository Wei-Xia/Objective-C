//
//  main.c
//  Challenge 10
//
//  Created by Wei on 7/8/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    double meter = 3.0;
    unsigned int feet;
    double inch;
    
    double rawFeet=meter*3.281;
    
    printf("%.2f", rawFeet);
    
    inch = modf(rawFeet,&feet);
    
    printf("%.2f meters equals to %d feet and %.3f inches.\n", meter, feet, inch);
    
    return 0;
}

