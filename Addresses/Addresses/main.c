//
//  main.c
//  Addresses
//
//  Created by Wei on 7/3/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i=17;
    printf("i stores its value at %p\n", &i);
    printf("\n");
    
    int *addressofi=&i;
    printf("i stores its value at %p\n",addressofi);
    
    printf("\n");
    printf("This function starts at %p\n", main);
    
    printf("\n");
    printf("The int stored at addressofi is %d\n", *addressofi);

    printf("\n");
    int y;
    int *addressofy=&y;
    *addressofy=89;
    
    printf("Now y is %d\n", y);
    
    return 0;
}

