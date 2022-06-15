// C program to find the sum of two matrices of order 2*2

#include <stdio.h>
int main()
{
    float fristMatrix[2][2], sencondMatrix[2][2], result[2][2];
    int rows, columns;

    // First Matrix
    printf("Enter elements of 1st matrix\n");
    for (int rows = 0; rows < 2; rows++)
    {
        for (int columns = 0; columns < 2; columns++)
        {
            scanf("%f", &fristMatrix[rows][columns]);
        }
    }

    // Second Matrix
    printf("Enter elements of 2nd matrix\n");
    for (int rows = 0; rows < 2; rows++)
    {
        for (int columns = 0; columns < 2; columns++)
        {
            scanf("%f", &sencondMatrix[rows][columns]);
        }
    }
    // The adding area
    for (int rows = 0; rows < 2; rows++)
    {
        for (int columns = 0; columns < 2; columns++)
        {
            result[rows][columns] = fristMatrix[rows][columns] + sencondMatrix[rows][columns];
        }
    }

    // Displaying the sum
    printf("\nSum Of Matrix:");

    for (int rows = 0; rows < 2; rows++)
    {
        printf("\n");
        for (int columns = 0; columns < 2; columns++)
        {
            printf("%.1f \t", result[rows][columns]);

            if (columns == 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}