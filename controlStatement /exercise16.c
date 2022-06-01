#include <stdio.h>
int main()
{
    int number;
    while (number >= 0)
    {
        printf("Type a number: ");
        scanf("%d", &number);
        if (number < 10)
        {
            printf("Too low \n");
        }
        else if (number > 20)
        {
            printf("Too high \n");
        }
        else
        {
            printf("Thank you \n");
            break;
        }
    }

    return 0;
}