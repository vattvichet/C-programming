#include <stdio.h>

// include math.h because we need to use pow function
#include <math.h>

int main()
{
    // we use const to assign pi is 3.14 only
    const float pi = 3.14;

    // we assign r l area volume as float in case when the user enter the floating number
    float r, l, area, volume;

    // User needs to enter the value of radius
    printf("Enter the value of r: ");
    scanf("%f", &r);

    // the formula of area is s=r**2 * pi
    area = pow(r, 2) * pi;

    // we print the value of area and comes along with new line
    printf("The area = %.2f m^2\n", area);

    // User needs to enter the value of length
    printf("Enter the value of l:");
    scanf("%f", &l);

    volume = area * l;

    // we print the value of volume and comes along with new line
    printf("The volume = %.2f m^3\n", volume);
    printf("Thank You \n");
    return 0;
}