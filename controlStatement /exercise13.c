#include <stdio.h>
int main()
{

    for (float number; number <= 5;)
    {
        printf("please enter a number : ");
        scanf("%f", &number);

        if (number > 5)
        {
            printf("The last number you entered was a [%.1f]\n", number);
                }
    }

    return 0;
}
