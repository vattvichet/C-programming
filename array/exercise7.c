#include <stdio.h>
#include <stdlib.h>
// declare variable
int i, j;

// definition of the function
int remove_element(int *ptr, int num)
{
    int temp;

    // use for loop

    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            // if statement to check the same number int sorted array
            if (*(ptr + i) == *(ptr + j))
            {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + num - 1);
                *(ptr + num - 1) = temp;
                num--;
            }
        }
    }

    printf(" After removing the duplicate elements: ");
    for (i = 0; i < num; i++)
    {
        printf(" %d \t", *(ptr + i));
    }
    return 0;
}
int main()
{
    // declare local variable
    int num, *ptr;
    printf(" Define the size of the array element: ");
    scanf(" %d", &num);

    ptr = (int *)malloc(num * sizeof(int));

    printf(" \n Enter the elements of the array: \n");
    // use for loop to read elements
    for (i = 0; i < num; i++)
    {
        scanf(" %d", (ptr + i));
    }

    // call function to print the unique elements
    remove_element(ptr, num);
    return 0;
}
