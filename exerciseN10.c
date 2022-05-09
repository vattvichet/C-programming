#include <stdio.h>

int main()
{
    // Using flaot just in case we have the flaot value
    float M, finalTemperature, initialTemperature, Q;

    // let user put the value
    printf("please enter the mass(M): ");
    scanf("%f", &M);

    printf("Please enter the final temperature: ");
    scanf("%f", &finalTemperature);

    printf("please enter the initial number: ");
    scanf("%f", &initialTemperature);

    // Calculate the the energy(Q)
    Q = M * (finalTemperature - initialTemperature) * 4184;

    // Display the total energy
    printf("Therefore Q = %2.f J", Q);

    return 0;
}