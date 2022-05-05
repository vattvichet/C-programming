#include <stdio.h>

int main()
{
    // Current population
    int current = 312032486;

    // Amount of people are born in 5 years
    int born = 5 * 365 * 24 * 3600 / 6;

    // Amount of people are died in 5 years
    int death = 5 * 365 * 24 * 3600 / 15;

    // Amount of people are immigranted in 5 years
    int immigrant = 5 * 365 * 24 * 3600 / 45;

    // The population in 5 years
    int result = current + born + immigrant - death;

    // Display the population
    printf("The population in the next 5 years = %d", result);

    return 0;
}