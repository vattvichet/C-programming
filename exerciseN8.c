#include <stdio.h>

int main()
{
    float weight, pound;
    printf("Please in put the weight");

    // Allow the user to enter the number
    scanf("%f", &weight);

    // 1Kg = 2.204 pounds
    pound = weight * 2.204;

    // Display the weight in (pound)
    printf("Therefore %f Kg = %.2f pounds", weight, pound);
    return 0;
}