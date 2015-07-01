//
//  main.c
//  ChallengSeven
//
//  Created by Wei on 6/30/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

#include <math.h> //use math in Mac, type 'man math' in Terminal

//double sin(double x);   this is a function that takes one argument "(double x) "

int main(int argc, const char * argv[])
{

    double x=1;
    
    printf("the sine of %f radian is %.3f.\n", x, sin(x));
    
    double radiantOf1 = cos(1); // Create a variable that use the "sin function" to calculate and store the result -> You can see that "x" is replace with number 1.
    
    printf("the cosine of %f radian is %.3f.\n", x,radiantOf1); //Print out the result with 3 numbers after "."
    
    double w=9;
    double z=6;
    
    printf("%.0f/%.0f, the remainder is %.0f.\n", z,w,remainder(z,w));
    
    return 0;
}

