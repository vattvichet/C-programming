#include <stdio.h>
int main()
{
    float floatingPart;
    double decimalNumber;
    int dec[20];
    int integerPart, n, t, r, s, count = 0, l = 0;

    printf("Enter any number:");
    scanf("%lf", &decimalNumber);
    integerPart = decimalNumber;                // it take only integer part from the full Decimal
    floatingPart = decimalNumber - integerPart; // We want to get only floating part from full Decimal
    //
    printf("\n");
    while (integerPart != 0)
    {
        n = integerPart % 2;
        integerPart /= 2;
        dec[t] = n;
        count += 1; // the amount of remiander
        t++;
    }
    for (r = count - 1; r >= 0; r--) // print out the backward remainder
    {
        printf("%d", dec[r]);
    }
    //
    printf(".");
    //
    for (s = 1; s <= 6; s++)
    {
        floatingPart = floatingPart * 2;
        l = floatingPart;
        printf("%d", l);
        if (l == 1)
            floatingPart = floatingPart - l;
    }
    printf("\n");
    return 0;
}