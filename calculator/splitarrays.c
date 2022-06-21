#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char binary[30];
    float decimal = 0;

    printf("Enter a binary: ");
    gets(binary);

    int n = strlen(binary); // Exponent
    int power = 1;

    // Convert
    for (int i = 0; i < strlen(binary); i++)
    {
        if (power <= n)
        {
            decimal += (binary[i] - '0') * pow(2, -power);
            power++;
        }
    }
    printf("%f", decimal);

    return 0;
}