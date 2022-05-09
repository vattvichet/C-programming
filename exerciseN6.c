#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, temp;
    printf("Enter your 2 numbers \n");
    scanf("%d%d", &num1, &num2);
    // swap the valuse
    temp = num1;
    num1 = num2;
    num2 = temp;
    // printf num1 num2
    printf("%d%d", num1, num2);
    return 0;
}