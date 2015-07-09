//
//  main.c
//  Challenge 11
//
//  Created by Wei on 7/8/15.
//
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[])
{
    long secondsSince1970=time(NULL);
    
    printf("It has been %ld seconds since 1970.\n",secondsSince1970);
    
    struct  tm  now;
    localtime_r(&secondsSince1970, &now);
    
    printf("The time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    
    return 0;
}

