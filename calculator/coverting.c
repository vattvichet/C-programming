//
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char binary[30];
    int rightPower = 1;
    int i, j, k;
    float sum = 0;
    int leftPower;
    float beforeDecimal = 0;
    float afterDecimal = 0;
    int n = strlen(binary) - 1; // Exponent (Use with when user doesn't enter Floating Number)
    //

    printf("Enter a binary: ");
    gets(binary);

    // Finding position of point
    for (i = 0; i < strlen(binary); i++)
    {
        if (binary[i] == '.')
        {
            int afterPointPosition = i + 1;
            leftPower = i - 1;
            //
            // Before Faloating Point
            for (int j = 0; j < i; j++)
            {
                beforeDecimal += (binary[j] - '0') * pow(2, leftPower);
                leftPower--;
            }
            printf(" Before Decimal : %f \n \n", beforeDecimal);
            //
            // After Floating Point

            for (k = afterPointPosition; k < strlen(binary); k++)
            {
                afterDecimal += (binary[k] - '0') * pow(2, -rightPower);
                rightPower++;
            }
            // Starting with the minus Exponential
            printf(" After Point Position :%d \n \n", afterPointPosition);
            //
            printf(" After Decimal : %f", afterDecimal);
            //
            //
            sum = beforeDecimal + afterDecimal;

            break;
        }
        else
        {
            sum += (binary[i] - '0') * pow(2, n);
            n--;
        }
    }

    printf(" \n \n \t sum : %f \n \n", sum);
    return 0;
}