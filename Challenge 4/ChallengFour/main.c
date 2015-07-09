//
//  main.c
//  ChallengFour
//
//  Created by Wei on 6/20/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 20;
    int j =25;
    int k = (i>j)?10:5;
    
    if (5<j-k) {
        printf("The first expression is true. \n");
    } else
        if (j>i){
            printf("The second expression is true. \n");
        } else {
            printf("Neither express is true. \n");
        }
    
        
    return 0;
}

