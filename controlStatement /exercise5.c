#include <stdio.h>
int main()
{
    float num;
    printf("Please type a number you want: ");
    scanf("%f", &num);

    if (num < 10)
    {
        printf("Too Low \n");
    }
    else if (num < 20)
    {
        printf("Correct \n");
    }
    else
    {
        printf("Too High \n");
    }
    return 0;
}