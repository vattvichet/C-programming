#include <stdio.h>
int main()
{
    int number;
    for (int total = 0; total <= 50;)
    {
        printf("\n please put a number :");
        scanf("\n %d", &number);
        total = total + number; // or total = total + number
        printf("\n After adding : [%d] \n", total);
    }

    return 0;
}
