#include <stdio.h>
int main()
{
    float weight, height, bmi;
    // Let the user put their weight annd height
    printf("Please enter your Weight in Kg : ");
    scanf("%f", &weight);

    printf("Please enter your Height in Meter : ");
    scanf("%f", &height);

    // Calculate the bmi value
    bmi = weight / (height * height);
    // Display the value of bmi
    printf("%.1f \n", bmi);

    if (bmi < 18.5)
    {
        printf("Underweight \n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal \n");
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("Overweight \n");
    }
    else
    {
        printf("Obese \n");
    }

    return 0;
}
