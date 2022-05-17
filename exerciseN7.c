#include <stdio.h>

int main()
{
    // we assign num1, num2, num as an integer.
    int num1, num2, num;

    // we print the user's input for user to enter the value
    printf("Enter your first number: ");
    // Then we scan the user's value by using function "scanf"
    scanf("%d", &num1);

    // we print the user's input for user to enter the value
    printf("Enter your second number: ");
    scanf("%d", &num2);

    // we sum the value 1 and value 2 together
    num = num1 + num2;

    // finally we print the final result
    printf("The sum of number = %d \n", num);

    return 0;
}