// While loop

#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 5)
    {
        printf("%d \n", i);
        i += 1; // or use i++ is the same as i += 1
    }

    return 0;
}

/*
interation 0
i = 0, output 0, i = 1

interation 1
i = 1, output 1, i = 2

interation 0
i = 2, output 2, i = 3

interation 0
i = 3, output 3, i = 4

interation 0
i = 4, output 4, i = 5

*/
