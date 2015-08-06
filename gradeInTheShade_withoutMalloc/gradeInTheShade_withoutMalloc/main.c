//
//  main.c
//  gradeInTheShade_withoutMalloc
//
//  Created by Wei on 8/6/15.
//  Copyright (c) 2015 Gate Inc. All rights reserved.
//

#include <stdio.h>

float averageFloats(float data[], int dataCount)
{
    float sum = 0.0;
    for (int i = 0; i<dataCount; i++) {
        sum = sum + data[i];
    }
    
    return  sum/dataCount;
}



int main(int argc, const char * argv[])
{
    
    // Declares the array as part of the frame
//    float gradeBook[3];
    float gradeBook[]={60.2,94.5,81.1};
    

//    gradeBook[0] = 60.2;
//    gradeBook[1] = 94.5;
//    gradeBook[2] = 81.1;
    
    // Calculate the average
    float average = averageFloats(gradeBook, 3);
    
    // No need to free the array
    // Cleanup happens automatically when the function returns
    
    printf("Average = %.2f\n", average);
    
    return 0;
}