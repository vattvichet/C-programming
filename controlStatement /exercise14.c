#include <stdio.h>
main()
{
    float x, y, sum;
    char ch;

    do
    {
        printf("Enter the first number:");
        scanf("%f", &x);
        printf("Enter the second number:");
        scanf("%f", &y);
        sum = x + y;
        printf("The total number is:%f", sum);
        printf("Do you want to continue: y/n");
        scanf(" %c", &ch);
    } while (ch == 'y');

    return 0;
}