#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char binary[30];
    int decimal = 0;

    printf("Enter a binary: ");
    scanf("%s", binary);
    int a = strlen(binary);

    int n = strlen(binary) - 1; // Exponent

    // Convert
    for (int i = 0; i < strlen(binary); i++)
    {
        decimal += (binary[i] - '0') * pow(2, n);
        n--;
    }
    printf("%d \n", decimal);
    printf("n is %d \n", n);
    printf("length is : %d", a);

    return 0;
}
