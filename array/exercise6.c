#include <stdio.h>

int main()
{
    int arr[50];
    int size, i, arrIndex, revIndex;
    int temp; // Used for swapping

    /* Input size of the array */

    //
    printf("Enter size of the number: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in number: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    revIndex = 0;
    arrIndex = size - 1;
    while (revIndex < arrIndex)
    {
        /* Copy value from original array to reverse array */
        temp = arr[revIndex];
        arr[revIndex] = arr[arrIndex];
        arr[arrIndex] = temp;

        revIndex++;
        arrIndex--;
    }

    /*
     * Print reversed array
     */
    printf("\nThe reversed  array of number: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
