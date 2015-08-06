//
//  main.c
//  Affirmation
//
//  Created by Wei on 8/6/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    for (int i=0; i<argc; i++) {
        printf("arg %d = %s\n", i, argv[i]);
    }
    
    return 0;
}

