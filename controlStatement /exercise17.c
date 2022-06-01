#include <stdio.h>
int main()
{
    for (int n = 2; (n * n * n) < 12000; n += 2)

        printf("therefor n = %d is the largest integer that is less than 12000 \n", n - 2);

    return 0;
}
