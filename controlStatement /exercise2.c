#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the x :");
    scanf("%d", &x);
    printf("Enter the y :");
    scanf("%d", &y);

    //

    if (x > 2)
    {
        if (y > 2) // Y have to be greater than 2
        {
            z = x + y;
            printf("z is %d", z);
        }
    }

    else // Depends on X (if X is smaller than 2)
    {
        printf("x is %d", x);
    }
    return 0;
}