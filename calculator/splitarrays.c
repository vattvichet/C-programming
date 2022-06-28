#include <stdio.h>
int main()
{
    long int binaryval, hexadecimalval = 0, i = 1, remainder;
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    long floatingFull = binaryval;

    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
    printf(".");
    printf("\n %l \n", floatingFull);
    for (int s = 1; s < 2; s++)
    {
        int integer = floatingFull * 10000;
        switch (integer)
        {
        case 0:
            printf("0");
            break;
        case 1:
            printf("1");
            break;
        case 10:
            printf("2");
            break;
        case 11:
            printf("3");
            break;
        case 100:
            printf("4");
            break;
        case 101:
            printf("5");
            break;
        case 110:
            printf("6");
            break;
        case 111:
            printf("7");
            break;
        case 1000:
            printf("8");
            break;
        case 1001:
            printf("9");
            break;
        case 1010:
            printf("A");
            break;
        case 1011:
            printf("B");
            break;
        case 1100:
            printf("C");
            break;
        case 1101:
            printf("D");
            break;
        case 1110:
            printf("E");
            break;
        case 1111:
            printf("F");
            break;

        default:
            break;
        }
    }
    printf("\n");
    return 0;
}
