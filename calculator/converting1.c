//
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int option;
    printf("Please choose a number : ");
    scanf("%d", &option);

    if (option == 1)
    {
        char binary[100];

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
                // Starting with the minus Exponential
                printf(" After Point Position's :%d \n \n", afterPointPosition);
                //
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
    }

    else if (option == 2)
    {

        float fullDecimal;
        printf("Enter any number:");
        scanf("%f", &fullDecimal);

        float floatingPart;

        int integerPart, r, l = 0, m[20], f, t = 0, remainderAmount = 0, s;

        integerPart = fullDecimal;
        floatingPart = fullDecimal - integerPart;
        //
        printf("\n");

        printf("Your Binary : ");
        //
        while (integerPart != 0)
        {
            f = integerPart % 2;
            integerPart /= 2;
            m[t] = f;
            remainderAmount += 1; // Amount of remaider keep increasing
            t++;
        }
        for (r = remainderAmount - 1; r >= 0; r--) // Print all the remainder backward
        {
            printf("%d", m[r]);
        }

        //
        printf(".");
        //
        for (s = 1; s <= 8; s++)
        {
            floatingPart = floatingPart * 2;
            l = floatingPart;
            printf("%d", l);
            //
            if (l == 1)
            {
                floatingPart = floatingPart - l;
            }
        }
        printf("\n \n \n");
    }

    if (option == 3)
    {
        char octal[100];

        printf("Enter a octal: ");
        scanf("%s", octal);
        //
        float decimal = 0;
        int n = strlen(octal) - 1; // Exponent (Use with when user doesn't enter Floating Number)
        float beforeDecimal = 0, afterDecimal = 0;
        int rightPower = 1;
        int i, j, k, leftPower;

        for (i = 0; i < strlen(octal); i++)
        {
            if (octal[i] == '.')
            {
                int afterPointPosition = i + 1;
                leftPower = i - 1;
                //
                // Before Faloating Point
                for (int j = 0; j < i; j++)
                {
                    beforeDecimal += (octal[j] - '0') * pow(8, leftPower);
                    leftPower--;
                }
                printf(" \n \n Before Decimal : %f \n \n", beforeDecimal);

                // After Floating Point
                for (k = afterPointPosition; k < strlen(octal); k++)
                {
                    afterDecimal += (octal[k] - '0') * pow(8, -rightPower);
                    rightPower++;
                }
                // Starting with the minus Exponential
                printf(" After Point Position's :%d \n \n", afterPointPosition);
                //
                printf(" After Decimal : %f", afterDecimal);
                //
                decimal = beforeDecimal + afterDecimal;
                break;
            }
            else
            {
                decimal += (octal[i] - '0') * pow(8, n);
                n--;
            }
        }

        printf(" \n \n \t Decimal : %f \n \n", decimal);
    }
    else if (option == 4)
    {
        float fullDecimal;

        int oct = 0, rem = 0, place = 1;
        printf("Enter a decimal =");
        scanf("%f", &fullDecimal);
        float floatingPart;
        int integerPart, l;

        integerPart = fullDecimal;
        floatingPart = fullDecimal - integerPart;
        //

        //
        while (integerPart != 0)
        {
            rem = integerPart % 8;
            oct = oct + rem * place;
            integerPart = integerPart / 8;
            place = place * 10;
        }
        printf("Your Finally Octal is : %d", oct);

        printf(".");

        for (int s = 1; s <= 5; s++)
        {
            floatingPart = floatingPart * 8;
            l = floatingPart;
            printf("%d", l);
            //
            if (l >= 1)
            {
                floatingPart = floatingPart - l;
            }
        }
        printf("\n\n");
    }

    // Vicheka's Part (Octal to Binary)

    else if (option == 5)
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
    else if (option == 7)
    {
        float fullDecimal;
        printf("Enter any number:");
        scanf("%f", &fullDecimal);

        float floatingPart;

        int integerPart, r, l = 0, m[20], z[20], f, t = 0, remainderAmount = 0, s;

        integerPart = fullDecimal;
        floatingPart = fullDecimal - integerPart;
        //
        printf("\n");

        printf("Your Hexadecimal : ");
        //
        while (integerPart != 0)
        {
            f = integerPart % 16;
            integerPart /= 16;
            m[t] = f;
            remainderAmount += 1; // Amount of remaider keep increasing
            t++;
        }
        for (r = remainderAmount - 1; r >= 0; r--) // Print all the remainder backward
        {
            switch (m[r])
            {
            case 15:
                printf("F");
                break;
            case 14:
                printf("E");
                break;
            case 13:
                printf("D");
                break;
            case 12:
                printf("C");
                break;
            case 11:
                printf("B");
                break;
            case 10:
                printf("A");
                break;
            default:
                printf("%d", m[r]);
            }
        }

        printf(".");

        for (int s = 1; s <= 4; s++)
        {
            floatingPart = floatingPart * 16;
            l = floatingPart;
            z[s] = l;
            //

            switch (z[s])
            {
            case 15:
                printf("F");
                break;
            case 14:
                printf("E");
                break;
            case 13:
                printf("D");
                break;
            case 12:
                printf("C");
                break;
            case 11:
                printf("B");
                break;
            case 10:
                printf("A");
                break;
            default:
                printf("%d", z[s]);
            }
            if (l >= 1)
            {
                floatingPart = floatingPart - l;
            }
        }
        printf("\n\n");

        //
    }

    else if (option == 8)
    {

        char hex[30];
        /* Input hexadecimal number from user */
        printf("Enter any hexadecimal number: ");
        scanf("%s", hex);
        //
        int i = 0, val, power;

        float decimal = 0, leftDecimal = 0, rightDecimal = 0;

        /* Find the length of total number of hex digit */
        power = strlen(hex) - 1;

        int integerPower;
        int floatingPower = 1;

        /*
         * Iterate over each hex digit
         */
        for (i = 0; hex[i] != '\0'; i++)
        {
            if (hex[i] == '.')
            {
                int afterPointPosition = i + 1;
                int integerPower = i - 1;
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

                    leftDecimal += val * pow(16, integerPower);
                    integerPower--;
                }

                printf("integer part : %f", leftDecimal);

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

                    rightDecimal += val * pow(16, -floatingPower);
                    floatingPower++;
                }

                printf("floating part : %f", leftDecimal);

                decimal = leftDecimal + rightDecimal;
                break;
            }
            else
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

                decimal += val * pow(16, power);
                power--;
            }
        }

        printf("\n\n Decimal number = %f \n\n", decimal);
    }
    else if (option == 9)
    {
        char hexNum[50];
        long int count = 0;
        printf("Enter a hexadecimal number : ");
        scanf("%s", hexNum);
        printf("\nBinary Number is : ");
        while (hexNum[count])
        {
            switch (hexNum[count])
            {
            case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1001");
                break;
            case '.':
                printf(".");
                break;
            case 'A':
                printf("1010");
                break;
            case 'B':
                printf("1011");
                break;
            case 'C':
                printf("1100");
                break;
            case 'D':
                printf("1101");
                break;
            case 'E':
                printf("1110");
                break;
            case 'F':
                printf("1111");
                break;
            case 'a':
                printf("1010");
                break;
            case 'b':
                printf("1011");
                break;
            case 'c':
                printf("1100");
                break;
            case 'd':
                printf("1101");
                break;
            case 'e':
                printf("1110");
                break;
            case 'f':
                printf("1111");
                break;

            default:
                printf("\nInvalid Entry, Please Try Again  %c", hexNum[count]);
            }
            count++;
        }

        printf("\n \n");
    }
    else
    {
        printf("error");
    }

    return 0;
}