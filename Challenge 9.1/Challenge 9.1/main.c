//
//  main.c
//  Challenge 9.1
//
//  Created by Wei on 7/6/15.
//  Copyright (c) 2015 OO. All rights reserved.
//
// write a program that shows you how much memory a float consumes.

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // how much memory float consumes
    
    printf("A char consumes %zu bytes\n\n", sizeof(char));
    printf("A short consumes %zu bytes\n\n", sizeof(short));
    printf("A float consumes %zu bytes\n\n", sizeof(float));
    printf("A int consumes %zu bytes\n\n", sizeof(int));
    printf("A double consumes %zu bytes\n\n", sizeof(double));
    printf("A long consumes %zu bytes\n\n", sizeof(long));
    
    return 0;
}

