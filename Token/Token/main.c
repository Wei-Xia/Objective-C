//
//  main.c
//  Token
//
//  Created by Wei on 6/30/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    double y = 12345.6789;
    
    printf("y is %f\n",y);
    printf("y is %e\n",y);
 
    printf("\n");
    
    printf("y is %.2f\n",y);
    printf("y is %.3e\n",y);
    
    return 0;
}

