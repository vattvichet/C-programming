#include <stdio.h>

int main()
{

    // Convert distance in Km to Mile
    float distance = 14 / 1.6;

    // Convert time to hours
    float time = 45.0 / 60 + 30.0 / 3600; // used .0 cus we wanted the float number

    // Compute V = d / t (v = speed)
    float speed = distance / time;

    // Display result with two Decimal places
    printf("Average speed = %.2f mile / hour", speed);

    return 0;
}