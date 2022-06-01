// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float result = 0, num1, num2;
//     for (num1 = 1, num2 = 2; num1 <= 624 && num2 <= 625; num1 += 1, num2 += 1)
//     {
//         result = result + (1 / (sqrt(num1) + sqrt(num2)));
//         printf("the result is %f\n", result);
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    float result = 0, num1, num2;
    for (num1 = 1, num2 = 2; num1 <= 624 && num2 <= 625; num1 += 1, num2 += 1)
    {
        result = result + 1 / (sqrt(num1) + sqrt(num2));
        printf("the result is %f\n", result);
    }

    return 0;
}
