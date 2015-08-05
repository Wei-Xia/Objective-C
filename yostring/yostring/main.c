//
//  main.c
//  yostring
//
//  Created by Wei on 8/4/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    char x = 0x21; // The character "!"
    
    while (x <= 0x7e) { // The character "~"
        printf("%x is %c\n", x,x);
        x++;
    }
    
//    char x = '!'; // The character "!"
//    
//    while (x <= '~') { // The character "~"
//        printf("%x is %c\n", x,x);
//        x++;
//    }
    
    return 0;
}

