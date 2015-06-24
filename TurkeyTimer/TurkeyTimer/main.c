//
//  main.c
//  TurkeyTimer
//
//  Created by Wei on 6/23/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

void showCookTimeForTurkey (int pounds)
{
    int necessaryMinutes = 15 + 15*pounds;
    printf("Cook for %d minutes. \n", necessaryMinutes);
    
    if (necessaryMinutes >120){
        int halfway = necessaryMinutes/2;   //necessaryMinutes is the local variable in this if statement
        printf("Rotate after %d of the %d minutes. \n", halfway, necessaryMinutes);
    }
}

int main(int argc, const char * argv[])
{
    int totalWeight=10;
    int gibletsWeight=1;
    int turkeyWeight= totalWeight-gibletsWeight;
    showCookTimeForTurkey(turkeyWeight);
    
    return 0;
}

