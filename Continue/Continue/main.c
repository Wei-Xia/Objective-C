//
//  main.c
//  Continue
//
//  Created by Wei on 7/1/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    for (i=0; i<12; i++) {
        if (i%3==0) {
            continue;   //this step will skip i which matches i%3==0
        }
        printf("Checking i = %d\n",i);
        if (i+90==i*i) {
            break;
        }
    }
    printf("The answer is %d.\n",i);
    return 0;
}

