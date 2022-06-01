#include <stdio.h>
#include <math.h>
int main()
{
    float result = 0, num1, num2;
    for (num1 = 1, num2 = 3; num1 <= 97 && num2 <= 99; num1 += 2, num2 += 2)
    {
        result = result + (num1 / num2);
        printf("the result is %f\n", result);
    }

    return 0;
}