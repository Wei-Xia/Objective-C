//
//  main.c
//  Degrees
//
//  Created by Wei on 6/24/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

float fahrenheitFromCelsius(float cel)
{
    float fahr= cel*1.8+32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[])
{
    float freezeINC=0;
    float freezeINF=fahrenheitFromCelsius(freezeINC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeINF);
    return 0;
}

