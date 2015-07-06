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
#include <limits.h>

int main(int argc, const char * argv[])

{    
    //Way One
    
    short x;
    short y;
        
    for (x = 0; x > -1; x++) {
        continue;
    }
    printf("Smallest short is %d. \n",x);
        
    for (y = 0; y < 1; y--) {
        continue;
    }
        
//    printf("Smallest short %d\n\nlargest short %d\n\n", x, y);
        
    //same question but unsigned short instead
        
//    unsigned short m;
//    unsigned short n;
//        
//    for (m = 0; m < 1; m--) {
//        continue;
//    }
//    
//    for (n=0; n>-1; n++) {
//        continue;
//    }
//    printf("largest unsigned short is %d\n\n", m);
    
    
    //Way Two
    short int smallestNumber;
    short int largestNumber;
    
    
    
    for (smallestNumber = 0; smallestNumber <= 0; smallestNumber--)
    {
         continue;
    }
    
    printf("The smallest number a short int can store is %d.\n", smallestNumber);

    
    for (largestNumber = 0; largestNumber >= 0; largestNumber++)
    {
        
        continue;
    }
            printf("The largest number a short int can store is %d.\n", largestNumber);
    
    
    printf("Minimum value of a signed short is %d\n", SHRT_MIN);
    printf("Maximum value of a signed short is %d\n", SHRT_MAX);
    printf("Maximum value of a unsigned short is %d\n", USHRT_MAX);
    
    
    return 0;
}

