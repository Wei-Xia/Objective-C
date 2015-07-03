//
//  main.c
//  Challenge 8
//
//  Created by Wei on 7/1/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <readline/readline.h>
#include <stdio.h>
#include <stdlib.h>   //declare atoi

int main(int argc, const char * argv[])
{
    
    printf("Where should I start counting?");
    
    const char *num = readline(NULL);
    
    int i=atoi(num);   // convert string into integer
    
    while (i>=0) {
        printf("Countdown:%d \n", i);
        if (i%5==0) {
            printf("Found one! \n");
        }
        i=i-3;
    }
    
    return 0;
}

