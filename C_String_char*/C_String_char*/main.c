//
//  main.c
//  C_String_char*
//
//  Created by Wei on 8/4/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#include <stdio.h>  // For printf
#include <stdlib.h>  // For malloc/free
#include <string.h>  // For strlen

int main(int argc, const char * argv[])
{
    // Get a pointer to 5 bytes of memory on the heap
    char *start = malloc(5);
    
    // Put 'L' in the first byte
    *start = 'L';
    
    // Put 'o' in the second byte
    *(start+1) = 'o';
    
    // Put 'v' in the third byte
    *(start+2) = 'v';
    
    // Put 'e' in the fourth byte
    *(start+3) = 'e';
    
    // Put zero in the fifth byte
    *(start+4) = '\0';
    
    // Print out the string and its length
    printf("%s has %zu characters\n", start, strlen(start));
    
    // Print out the third letter
    printf("The third letter is %c\n", *(start+2));
    
    // Free the memory so that it can be reused
    free(start);
    start=NULL;
    
    return 0;
}

