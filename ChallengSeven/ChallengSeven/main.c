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
    

    
    double radiantOf1 = sin(1); // Create a variable that use the "sin function" to calculate and store the result -> You can see that "x" is replace with number 1.
    
    printf("Your answer is: %.3f\n" ,radiantOf1); //Print out the result with 3 numbers after "."
    
    return 0;
}

