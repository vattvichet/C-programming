#include <stdio.h>
int main()
{
    float num, length, squareArea, base, height, triangleArea;
    // 1 is for Square and 2 is for Triangle
    printf(" 1) Square \n 2) Triangle \n");
    printf("Please choose one number : 1 or 2 ");
    scanf("%f", &num);
    // Display the number that the user had chosen
    printf("you chose number : %0.f \n", num);

    if (num == 1)
    {
        printf("Please enter the value of length :");
        scanf("%f", &length);
        // calculate the Area of square
        squareArea = length * length;
        printf("Your square's area = %.2f m^2 \n", squareArea);
    }
    else if (num == 2)
    {
        printf("Please enter the value of base and height respectively :");
        scanf("%f  %f", &base, &height);
        // calculate the Area of triangle
        triangleArea = (base * height) / 2;
        printf("Your triangle's area = %.2f m^2 \n", triangleArea);
    }
    else
    {
        printf("Error!");
    }

    return 0;
}