#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    char binary[30];

    printf("Enter a binary: ");
    scanf("%s", binary);
    //
    float decimal = 0;
    int n = strlen(binary) - 1; // Exponent (Use with when user doesn't enter Floating Number)
    float beforeDecimal = 0;
    float afterDecimal = 0;
    int rightPower = 1;
    int i, j, k;

    int leftPower;
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
            printf(" \n \n Before Decimal : %f \n \n", beforeDecimal);

            // After Floating Point
            for (k = afterPointPosition; k < strlen(binary); k++)
            {
                afterDecimal += (binary[k] - '0') * pow(2, -rightPower);
                rightPower++;
            }
            printf(" After Decimal : %f", afterDecimal);
            //
            decimal = beforeDecimal + afterDecimal;
            break;
        }
        else
        {
            decimal += (binary[i] - '0') * pow(2, n);
            n--;
        }
    }

    printf(" \n \n \t Decimal : %f \n \n", decimal);
    //

    return 0;
}