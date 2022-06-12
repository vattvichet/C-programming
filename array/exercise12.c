#include <stdio.h>
int main()
{
    int rows, columns, i, j, sum;
    //
    printf("Enter the amount of rows and columns : \n");
    scanf("%d %d", &rows, &columns);
    int a[rows][columns], b[rows][columns];
    //

    printf("Enter the element of the first matrix : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    //

    printf("Enter the element of the second matrix : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &b[rows][columns]);
        }
    }
    //

    printf("The sum of two matix is :");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sum = a[i][j] + b[i][j];
            printf("%d", sum);
        }

        printf("\n");
    }

    return 0;
}