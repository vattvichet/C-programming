//
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char binary[30];
    float decimal = 0;

    printf("Enter a binary: ");
    gets(binary);

    int n = 0; // Exponent

    // Convert
    for (int i = strlen(binary) - 1; i >= 0; i--)
    {

        decimal = decimal + (binary[i] - '0') * pow(2, n);
        n++;
    }
    printf("\n \n \n");
    printf("The Binary of (%s) is equal to (%f) of Decimal \n \n", binary, decimal);

    return 0;
}
