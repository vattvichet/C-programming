#include <stdio.h>
int main()
{

    int number, lineCount = 0;
    for (number = 100; number <= 200; number++)
    {
        if ((number % 5 == 0 && number % 6 != 0) || (number % 6 == 0 && number % 5 != 0))
        {
            printf("%d  ", number);
            lineCount = lineCount + 1;

            if (lineCount % 10 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}