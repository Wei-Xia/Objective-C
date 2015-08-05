//
//  main.c
//  C_String_Literals
//
//  Created by Wei on 8/4/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    const char *start = "A backslash after two newlines and a tab: \n\n\t\\";
    
    printf("%s has %zu characters\n", start, strlen(start));
    printf("The third letter is %c\n", start[2]);
    
    return 0;
}

