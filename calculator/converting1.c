//
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int chosen;
    printf("Please choose a number : ");
    scanf("%d", &chosen);

    if (chosen == 1)
    {

        char binary[30];
        int rightPower = 1;
        int i, j, k;
        float sum = 0;
        int leftPower;
        float beforeDecimal = 0;
        float afterDecimal = 0;
        int n = strlen(binary) - 2; // Exponent (Use with when user doesn't enter Floating Number)
        // For exponential (We have to substract it by 2, Cus 1 is for the last digit and other 1 is for .     )

        printf("Enter a binary: ");
        scanf("%s", &binary);

        // Finding position of point
        //
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
                //
                break;
            }
            else
            {
                sum += (binary[i] - '0') * pow(2, n);
                n--;
            }
        }

        printf(" \n \n \t sum : %f \n \n", sum);
        //
    }

    // Vicheka's Part (Octal to Binary)

    else if (chosen == 2)
    {
        char octalnum[1000];
        long q = 0;

        printf("Enter any octal number here :");
        scanf("%s", octalnum);
        //
        printf("\n Equivalent binary value: ");
        //
        while (octalnum[q])
        {
            switch (octalnum[q])
            {
            case '0':
                printf("000");
                break;
            case '1':
                printf("001");
                break;
            case '2':
                printf("010");
                break;
            case '3':
                printf("011");
                break;
            case '4':
                printf("100");
                break;
            case '5':
                printf("101");
                break;
            case '6':
                printf("110");
                break;
            case '7':
                printf("111");
                break;
            case '.':
                printf(".");
                break;
            default:
                printf("\n \n %c is not Binary Number \n \n", octalnum[q]);
            }
            q++;
        }
    }
    else
    {
        printf("error");
    }

    return 0;
}