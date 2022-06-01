// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     for()
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int divisor, number, sum;
    for (number = 1; number < 10000; number++)
    {
        sum = 0;

        for (divisor = 1; divisor < number; divisor++)
        {
            if (number % divisor == 0) // means remainder = 0
            {
                sum = sum + divisor;
            }
        }

        if (sum == number)
        {
            printf("%d \n", number);
        }
    }
    return 0;
}