//
//  main.c
//  Challenge 8.2
//
//  Created by Wei on 7/2/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>
#include <readline/readline.h>   //declare readline

int main(int argc, const char * argv[])
{

    printf("Who is cool?");

    const char *name = readline(NULL);
    
    printf("%s is cool! \n\n",name);
    
    return 0;
}

