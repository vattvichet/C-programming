#include <stdio.h>
int main()
{
    float floatingPart;
    double fullDecimal;
    int integerPart, r, l = 0, m[20], n, t, remainderAmount = 0, s;
    printf("Enter any number:");
    scanf("%lf", &fullDecimal);
    integerPart = fullDecimal;
    floatingPart = fullDecimal - integerPart;
    //
    printf("\n");
    while (integerPart != 0)
    {
        n = integerPart % 2;
        integerPart /= 2;
        m[t] = n;
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
        if (l == 1)
            floatingPart = floatingPart - l;
    }
    printf("\n");
    return 0;
}