#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    // swap the valuse
    temp = num1;
    num1 = num2;
    num2 = temp;

    /*
    temp1 = num1
    temp2 = num2

    num1 = temp2
    num2 = temp1
    */

    // printf num1 num2
    printf("%d \n", num1);
    printf("%d \n", num2);
    return 0;
}
