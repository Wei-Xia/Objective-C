//
//  main.c
//  bitwize
//
//  Created by Wei on 8/3/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    unsigned char a = 0x3c;
    unsigned char b = 0xa9;
    unsigned char c = a|b;
    
    printf("Hex: %x | %x = %x\n",a,b,c);
    return 0;
}

