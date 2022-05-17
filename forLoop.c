#include <stdio.h>
int main()
{

    // we can assign the integer before the forLoop

    for (int i = 0; i < 15; i++)
    {
        printf("%d \n", i);

        if (i == 5)
        {
            break;
        }
    }
    return 0;
}