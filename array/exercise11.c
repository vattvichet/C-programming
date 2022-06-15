#include <stdio.h>

int main()
{
    int fiveStudent[5][5];
    int rows, columns;

    printf("enter the score of each student.");
    for (int row = 0; rows < 2; row++)
    {
        for (int columns = 0; columns < 6; columns++)
        {
            printf("enter the mark :");
            scanf("%d", &fiveStudent[rows][columns]);
        }
    }
    printf("%d", fiveStudent[rows][columns]);

    return 0;
}