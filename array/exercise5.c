#include <stdio.h>
int main()
{
    float num[50];
    int i, n, j;
    int temp; // Used for swapping

    /* Input size of the array */
    printf("Enter size of the  array : ");
    scanf("%d", &n);

    /* Input array elements */
    printf("Enter value of number  : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
    }

    /* begin to sort the number descending order.  */
    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {
            if (num[j] < num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    // print the sort number
    printf("\nThe numbers arranged in descending order are given below :\n ");

    for (i = 0; i < n; i++)
    {
        printf("%.2f \n\n ", num[i]);
    }
}
