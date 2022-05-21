#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;

    printf("Please enter the value of a  b and c respectively : ");
    scanf("%f %f %f", &a, &b, &c);
    // input the discriminant recipe

    discriminant = (b * b) - (4 * a * c);
    printf("Our discriminant =  %.2f  \n", discriminant);
    // condition for real and diferent root

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f \n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f \n", root1);
    }
    else
    {
        printf("The equation has no real roots! \n");
    }

    return 0;
}