/* C program to convert Hexadecimal to Decimal number system */
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char hex[30];
    /* Input hexadecimal number from user */
    printf("Enter any hexadecimal number: ");
    scanf("%s", hex);
    //
    float leftDecimal = 0, rightDecimal = 0;
    float decimal;
    int i = 0, val, len;

    decimal = 0;

    /* Find the length of total number of hex digit */
    len = strlen(hex);
    len--;

    int leftPower;
    int rightPower = 1;

    /*
     * Iterate over each hex digit
     */
    for (i = 0; hex[i] != '\0'; i++)
    {
        if (hex[i] == '.')
        {
            int afterPointPosition = i + 1;
            int leftPower = i - 1;
            //
            for (int j = 0; j < i; j++)
            {

                if (hex[j] >= '0' && hex[j] <= '9')
                {
                    val = hex[j] - 48;
                }
                else if (hex[j] >= 'a' && hex[j] <= 'f')
                {
                    val = hex[j] - 97 + 10;
                }
                else if (hex[j] >= 'A' && hex[j] <= 'F')
                {
                    val = hex[j] - 65 + 10;
                }

                leftDecimal += val * pow(16, leftPower);
                leftPower--;
            }

            //
            for (int k = afterPointPosition; k < strlen(hex); k++)
            {

                if (hex[k] >= '0' && hex[k] <= '9')
                {
                    val = hex[k] - 48;
                }
                else if (hex[k] >= 'a' && hex[k] <= 'f')
                {
                    val = hex[k] - 97 + 10;
                }
                else if (hex[k] >= 'A' && hex[k] <= 'F')
                {
                    val = hex[k] - 65 + 10;
                }

                rightDecimal += val * pow(16, -rightPower);
                rightPower++;
            }

            decimal = leftDecimal + rightDecimal;
        }
        else
        {
            for (i = 0; hex[i] != '\0'; i++)
            {

                if (hex[i] >= '0' && hex[i] <= '9')
                {
                    val = hex[i] - 48;
                }
                else if (hex[i] >= 'a' && hex[i] <= 'f')
                {
                    val = hex[i] - 97 + 10;
                }
                else if (hex[i] >= 'A' && hex[i] <= 'F')
                {
                    val = hex[i] - 65 + 10;
                }

                decimal += val * pow(16, len);
                len--;
            }
        }
    }

    printf("\n\n Decimal number = %f \n\n", decimal);

    return 0;
}
