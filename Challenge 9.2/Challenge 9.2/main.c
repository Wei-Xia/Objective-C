//
//  main.c
//  Challenge 9.2
//
//  Created by Wei on 7/6/15.
//  Copyright (c) 2015 OO. All rights reserved.
//
// On a Mac, a short is 2-byte integer, and one bit is used to hold the sign. What is the smallest number that a shor can store?
// What is the largest?
// An unsigned short only hold non-negative numbers. What is the largest number that an unsigned short can store?

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    short int small;
//    short int large;
//    
//    for (small=0; small<=0; small--) {
//        printf("The smallest short integer is %d.\n",small);
//    }
//    
//    for (large=0; large>=0; large++) {
//        printf("The largest short integer is %d.\n",large);
//    }
//    
//    return 0;
    
    

        
        // what is the smallest number a short can hold and its largest
        
        short x;
        short y;
        
        for (x = 0; x > -1; x++) {
            continue;
        }
        
        for (y = 0; y < 1; y--) {
            continue;
        }
        
        printf("\nSmallest short %d\nlargest short %d\n", x, y);
        
        // same question but unsigned short instead
        
        unsigned short i;
        
        for (i = 0; i < 1; i--) {
            continue;
        }
        printf("largest unsigned short is %d\n", i);
        
        return 0;
}

