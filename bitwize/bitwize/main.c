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
    printf("Decimal: %d | %d = %d\n\n", a,b,c);  // Bitwise-OR
    
    unsigned char d = a&b;
    
    printf("Hex: %x & %x = %x\n",a,b,d);
    printf("Decimal: %d & %d = %d\n\n", a,b,d);  // Bitwise-AND
    
    unsigned char e = a^b;
    
    printf("Hex: %x ^ %x = %x\n",a,b,e);
    printf("Decimal: %d ^ %d = %d\n\n", a,b,e);  // Exclusive-OR

    unsigned char f = ~b;
    
    printf("Hex: The complement of %x is %x\n",b,f);
    printf("Decimal: The complement of %d is %d\n\n", b,f);  // Complement

    unsigned char g = a << 2;
    
    printf("Hex: %x shifted left two places is %x\n", a, g);
    printf("Decimal: %d shifted left two places is %d\n\n", a, g); // Left-shift   Every
    
    unsigned char g = a << 2;
    
    printf("Hex: %x shifted left two places is %x\n", a, g);
    printf("Decimal: %d shifted left two places is %d\n\n", a, g); // Left-shift
    
    return 0;
    
}

