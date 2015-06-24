//
//  main.c
//  Turkey
//
//  Created by Wei on 6/20/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>
#include <objc/objc.h>    //Boolean function statement

int main(int argc, const char * argv[])
{
    float weight; //declare the varibale called 'weight' of type float
    weight = 14.2;  //store a number in that variable
    
    printf("The turkey weighs %f.\n", weight);
    
    float cookingTime;  //declare another variable of type float
    cookingTime = 15.0 + 15.0* weight;
    
    printf("Cook it for %f minutes.\n", cookingTime);
    
    if (weight<100) {
        printf("It is a light turkey\n");
    } else {
        printf("It is a heavy turkey\n");
    }
    
    BOOL time = ((weight<15)&&(cookingTime>100));   //indicate true or false
    if (time) {
        printf("Time is too short. \n");
        printf("Take a short time. \n");
    }   //we need curly braces if we have more than one statements in this if-else.
    
    /* Conditional Operators
     int minutesPerPound      // Way One
     if(isBoneless){
     minutesPerPound =15;
     }
     else{
     minutesPerPound =20;
     }
     
     //The same as below:
     
     int minutesPerPound = isBoneless ? 15:20  //Way Two
     
     */
    
    return 0;
}

