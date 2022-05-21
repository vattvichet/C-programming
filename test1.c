#include <stdio.h>
int main()
{
    int x, y, z;
    printf("please type 2 number:");
    scanf("%d  %d", &x, &y);

    if (x > 2 && y > 2)
    {
        z = x + y;
        printf("z is %d\n", z);
    }
    else
    {

        printf("x is %d\n", x);
    }

    return 0;
}
