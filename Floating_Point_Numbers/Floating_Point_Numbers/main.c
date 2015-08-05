//
//  main.c
//  Floating_Point_Numbers
//
//  Created by Wei on 8/4/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#include <stdio.h>  // For printf
#include <stdlib.h>  // For malloc/free
#include <string.h>  // For strlen

int main(int argc, const char * argv[])
{
    // Claim a chunk of memory big enough to hold three floats
    float *favorites = malloc(3 * sizeof(float));
    
    // Push values into the locations in that buffer
    favorites[0] = 3.14158;
    favorites[1] = 2.71828;
    favorites[2] = 1.41421;
    
    // Print out each number on the list
    for (int i = 0 ; i<3; i++) {
        printf("%.4f is favorite %d\n", favorites[i], i+1);
    }
    
    // Free the memory so that it can be reused
    free(favorites);
    favorites = NULL;

    return 0;
}

