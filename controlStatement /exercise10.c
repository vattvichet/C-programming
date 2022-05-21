#include <stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Please enter your Weight in Kg : ");
    scanf("%f", &weight);
    printf("Please enter your Height in Meter : ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("%.1f \n", bmi);

    if (bmi < 18.5)
    {
        printf("Underweight \n");
    }
    else if (bmi <= 24.9)
    {
        printf("Normal \n");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Overweight \n");
    }
    else
    {
        printf("Obese \n");
    }

    return 0;
}
