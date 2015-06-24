//
//  main.c
//  congratulateStudent
//
//  Created by Wei on 6/23/15.
//  Copyright (c) 2015 OO. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>   //usd for sleep()

void congratulateStudent (char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days. \n", student, course, numDays);   //%s stands for char    %d stands for numbers
}

int main(int argc, const char * argv[])
{

    congratulateStudent("Kate", "Cocoa", 5);
    sleep(2);  //program will stop for 2 seconds due to sleep()
    congratulateStudent("Bo", "Objective-C", 2);
    sleep(2);
    congratulateStudent("Mike", "Python", 5);
    sleep(2);
    congratulateStudent("Liz", "iOS", 5);
    sleep(2);
    
    return 0;
}

