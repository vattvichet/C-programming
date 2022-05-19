#include <stdio.h>
int main()
{
    float num;
    printf("Please type a number that is smaller than 20: ");

    scanf("%f", &num);

    if (num < 20)
    {
        printf("Too Low \n");
    }
    else
    {
        printf("Too High \n");
    }
    return 0;
}