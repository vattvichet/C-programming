#include <stdio.h>
int main()
{

    float dec;
    int hex[100];
    int integerPart = dec;
    float floatingPart = dec - integerPart;
    int i = 0, j, l;
    printf(" Input Decimal value : ");
    scanf("%f", &dec);
    while (integerPart > 0)
    {
        hex[i] = integerPart % 16;
        integerPart /= 16;
        i++;
    }
    printf("\n Hexadecimal value is ");
    for (j = i - 1; j >= 0; j--)
    {
        switch (hex[j])
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
            printf("%d", hex[j]);
        }
    }

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
        switch (hex[s])
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
            printf("%d", hex[s]);
        }
    }
    printf("\n\n");
    return 0;
}
