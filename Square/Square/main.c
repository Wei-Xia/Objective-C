//
//  main.c
//  Square
//
//  Created by Wei on 6/27/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

int getSquare(int s)
{
    int sq = s*s;
    return sq;
}


int main(int argc, const char * argv[])
{
    int side = 15;
    int square = getSquare(side);
    
    printf("The square of side 5 is %d. \n", square);

    return 0;
}

