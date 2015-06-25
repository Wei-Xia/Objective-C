//
//  main.c
//  Degrees
//
//  Created by Wei on 6/24/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>   //way 2

float lastTemperature;   //Global variables;

//static float lastTemperature;   //use "static" to prevent from changing variables;

float fahrenheitFromCelsius(float cel)
{
    lastTemperature = cel;
    float fahr= cel*1.8+32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[])
{
    float freezeINC=12.12;
    float freezeINF=fahrenheitFromCelsius(freezeINC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeINF);
    printf("The last temperature converted was %f. \n", lastTemperature);
    //return 0;
    return EXIT_SUCCESS;  //way 2
}

