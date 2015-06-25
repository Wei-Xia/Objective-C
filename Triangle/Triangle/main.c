//
//  main.c
//  Triangle
//
//  Created by Wei on 6/24/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

double remainingAngle (double a, double b)
{
    double c=180-b-a;
    return c;
}

int main(int argc, const char * argv[])
{
    double angleA=30.73;
    double angleB=67.50;
    
    double angleC= remainingAngle(angleA, angleB);
    
    printf("The third angle is %.2f \n", angleC);
    
    return 0;
}

