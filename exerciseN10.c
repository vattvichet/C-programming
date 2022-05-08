#include <stdio.h>

int main()
{
    float M, finalTemperature, initialTemperature;

    // let user put the value
    printf("please enter the three value :");
    scanf("%f %f %f", &M, &finalTemperature, &initialTemperature);

    // Calculate the the energy(Q)
    float Q = M * (finalTemperature - initialTemperature) * 4184;

    // Display the total energy
    printf("Therefore Q = %f J", Q);

    return 0;
}