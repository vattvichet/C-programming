
#include <stdio.h>

int main()

{
    int num1, num2;
    // let the user input the value for num1 and num2
    printf("Input the values for Number1:\n");
    scanf("%d", &num1);

    printf("Input the valued for Number2:\n");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("Num1 is less than Num2\n");
    }
    else if (num1 > num2)
    {
        printf("Num1 is greater than Num2\n");
    }
    else
    {
        printf("Num1 is equal to Num2\n");
    }
    return 0;
}
