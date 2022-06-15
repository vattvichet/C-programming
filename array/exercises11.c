#include <stdio.h>

int main()
{
    int fiveStudent[2][5];
    int groups, students;
    int sum1 = 0;
    int sum2 = 0;
    for (groups = 0; groups < 2; groups++)
    {
        for (students = 0; students < 5; students++)
        {
            printf("enter the mark of group %d : ", groups + 1);
            scanf("%d", &fiveStudent[groups][students]);

            if (students == 4)
            {
                printf("\n");
            }
        }
    }

    for (groups = 0; groups < 2; groups++)
    {
        for (students = 0; students < 5; students++)
        {
            if (groups == 0) // for group 1
            {
                sum1 = sum1 + fiveStudent[groups][students];
            }

            else if (groups == 1) // for group 2
            {
                sum2 = sum2 + fiveStudent[groups][students];
            }
            else
            {
                printf("error");
            }
        }
    }

    printf("The sum of group 1 is %d \n", sum1);
    printf("The sum of group 2 is %d\n", sum2);

    return 0;
}