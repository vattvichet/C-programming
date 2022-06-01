#include <stdio.h>
int main()
{
    float num;
    printf("Please type a number that is smaller than 20: ");

    scanf("%f", &num);

    if (num >= 20)
    {
        printf("Too High \n");
    }
    else
    {
        printf("Thank you  \n");
    }
    return 0;
}
