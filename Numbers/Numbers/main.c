//
//  main.c
//  Numbers
//
//  Created by Wei on 6/27/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x =255;
    
    printf("x is %d. \n", x);
    printf("In octal, x is %o. \n",x);
    printf("In hexadecimal, x is %x. \n", x);
    
    printf("\n");
    
    unsigned long y =255;
    
    printf("y is %lu. \n", y);
    printf("In octal, y is %lo. \n",y);
    printf("In hexadecimal, y is %lx. \n", y);
    
    printf("\n");
    
    printf("3*3+5*2=%d\n", 3*3+5*2);
    printf("11/3=%d\n", 11/3);
    printf("11/3 = %d remainder of %d \n", 11/3, 11%3);
    printf("11/3.0 = %f\n", (float)11/3);
    
    
    return 0;
}

