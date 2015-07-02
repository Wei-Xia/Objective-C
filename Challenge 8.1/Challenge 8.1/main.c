//
//  main.c
//  Challenge 8
//
//  Created by Wei on 7/1/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i=99;
    while (i>=0) {
        printf("Countdown:%d \n", i);
        if (i%5==0) {
            printf("Found one! \n");
        }
        i=i-3;
    }
    
    return 0;
}

