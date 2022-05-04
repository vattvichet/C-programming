#include <stdio.h>
#include <math.h>
int main()
{
    // Catulate the result
    float result = (9.5 * 4.5 - 2.5 * 3) / (45.5 - 3.5);

    // Display the rounded result using round() function
    printf("result = %g\n", round(result * 1000) / 1000);

    // Display the rounded result using %f
    printf("result = %.3f\n", result);

    printf("result = %g", result);

    return 0;
}