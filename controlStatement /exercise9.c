#include <stdio.h>
int main()
{
    float num, length, squareArea, base, height, triangleArea;
    printf(" 1) Square \n 2) Triangle \n");
    printf("Please choose one number : 1 or 2 ");
    scanf("%f", &num);
    printf("you chose number : %0.f \n", num);

    if (num == 1)
    {
        printf("Please enter the value of length :");
        scanf("%f", &length);
        squareArea = length * length;
        printf("Your square's area = %.2f m^2 \n", squareArea);
    }

    if (num == 2)
    {

        printf("Please enter the value of base and height respectively :");
        scanf("%f  %f", &base, &height);
        triangleArea = (base * height) / 2;
        printf("Your triangle's area = %.2f m^2 \n", triangleArea);
    }

    return 0;
}