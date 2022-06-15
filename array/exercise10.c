#include <stdio.h>
#include <stdlib.h> /* for abs() */
#include <math.h>

int main()
{
    int numberArray[] = {-8, 45, 2, -10, 16, -30};
    int leftIndex, rightIndex, min_sum, sum, minLeftIndex, minRightIndex;
    int length;

    // Explain how to find the length of an array
    // there are 4 bytes per integer
    length = sizeof(numberArray) / sizeof(numberArray[0]);

    // Initialization of values
    minLeftIndex = 0;
    minRightIndex = 1;
    min_sum = numberArray[0] + numberArray[1]; // It will be used to compare with the next Sum

    for (leftIndex = 0; leftIndex < length - 1; leftIndex++)
    {
        for (rightIndex = leftIndex + 1; rightIndex < length; rightIndex++)
        {
            sum = numberArray[leftIndex] + numberArray[rightIndex];
            if (abs(min_sum) > abs(sum))
            {
                // The minimum Sum always change if the checking is true
                min_sum = sum;
                minLeftIndex = leftIndex;
                minRightIndex = rightIndex;
            }
        }
    }

    printf(" \n \n The two elements with their sum are the closest to Zero : %d and %d \n \n", numberArray[minLeftIndex], numberArray[minRightIndex]);

    return 0;
}
