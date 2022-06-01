#include <stdio.h>
int main()
{
    float num;
    // Let the user enter the numbers
    printf("Please type a number you want: ");
    scanf("%f", &num);

    if (num < 10)
    {
        printf("Too Low \n");
    }
    else if (num <= 20)
    {
        printf("Correct \n");
    }
    else
    {
        printf("Too High \n");
    }
    return 0;
}